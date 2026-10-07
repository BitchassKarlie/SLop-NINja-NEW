package com.openfeint.internal.request;

import com.halfbrick.fruitninja.R;
import com.openfeint.internal.OpenFeintInternal;
import com.openfeint.internal.resource.ServerException;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.util.concurrent.Future;
import org.apache.http.Header;
import org.apache.http.HttpEntity;
import org.apache.http.HttpResponse;
import org.apache.http.client.ResponseHandler;
import org.apache.http.client.entity.UrlEncodedFormEntity;
import org.apache.http.client.methods.HttpDelete;
import org.apache.http.client.methods.HttpEntityEnclosingRequestBase;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.client.methods.HttpPost;
import org.apache.http.client.methods.HttpPut;
import org.apache.http.client.methods.HttpUriRequest;
import org.apache.http.impl.client.AbstractHttpClient;
import org.apache.http.params.BasicHttpParams;
import org.apache.http.params.HttpParams;
import org.apache.http.util.EntityUtils;

/* loaded from: classes.dex */
public abstract class BaseRequest {
    private static int DEFAULT_RETRIES = 2;
    private static long DEFAULT_TIMEOUT = 20000;
    protected static String TAG = "Request";
    private static String sBaseServerURL = null;
    private OrderedArgList mArgs;
    private HttpUriRequest mRequest;
    private byte[] mResponseBody;
    private int mResponseCode;
    private long mSecondsSinceEpoch;
    private HttpResponse response_;
    private boolean mResponded = false;
    private String mResponseEncoding = null;
    private String mResponseType = null;
    private String mSignature = null;
    private String mKey = null;
    private int mRetriesLeft = 0;
    private Future<?> mFuture = null;
    private HttpParams mHttpParams = null;

    public abstract String method();

    public abstract void onResponse(int i, byte[] bArr);

    public abstract String path();

    protected String getResponseEncoding() {
        return this.mResponseEncoding;
    }

    protected String getResponseType() {
        return this.mResponseType;
    }

    public int numRetries() {
        return DEFAULT_RETRIES;
    }

    public long timeout() {
        return DEFAULT_TIMEOUT;
    }

    public void setFuture(Future<?> future) {
        this.mFuture = future;
    }

    public Future<?> getFuture() {
        return this.mFuture;
    }

    protected HttpParams getHttpParams() {
        if (this.mHttpParams == null) {
            this.mHttpParams = new BasicHttpParams();
        }
        return this.mHttpParams;
    }

    public boolean wantsLogin() {
        return false;
    }

    public boolean signed() {
        return true;
    }

    public boolean needsDeviceSession() {
        return signed();
    }

    public BaseRequest() {
    }

    public BaseRequest(OrderedArgList args) {
        setArgs(args);
    }

    public String url() {
        if (sBaseServerURL == null) {
            sBaseServerURL = OpenFeintInternal.getInstance().getServerUrl();
        }
        return sBaseServerURL + path();
    }

    public final void sign(Signer authority) {
        if (this.mArgs == null) {
            this.mArgs = new OrderedArgList();
        }
        if (signed()) {
            this.mSecondsSinceEpoch = System.currentTimeMillis() / 1000;
            this.mSignature = authority.sign(path(), method(), this.mSecondsSinceEpoch, this.mArgs);
            this.mKey = authority.getKey();
        }
    }

    public final void setArgs(OrderedArgList args) {
        this.mArgs = args;
    }

    protected HttpUriRequest generateRequest() {
        HttpEntityEnclosingRequestBase postReq;
        HttpUriRequest retval = null;
        String meth = method();
        if (meth.equals("GET") || meth.equals("DELETE")) {
            String url = url();
            String argString = this.mArgs.getArgString();
            if (argString != null) {
                url = url + "?" + argString;
            }
            if (meth.equals("GET")) {
                retval = new HttpGet(url);
            } else if (meth.equals("DELETE")) {
                retval = new HttpDelete(url);
            }
        } else {
            if (meth.equals("POST")) {
                postReq = new HttpPost(url());
            } else {
                if (!meth.equals("PUT")) {
                    throw new RuntimeException("Unsupported HTTP method: " + meth);
                }
                postReq = new HttpPut(url());
            }
            try {
                UrlEncodedFormEntity entity = new UrlEncodedFormEntity(this.mArgs.getArgs(), "UTF-8");
                entity.setContentType("application/x-www-form-urlencoded; charset=UTF-8");
                postReq.setEntity(entity);
            } catch (UnsupportedEncodingException e) {
                OpenFeintInternal.log(TAG, "Unable to encode request.");
                e.printStackTrace(System.err);
            }
            retval = postReq;
        }
        if (signed() && this.mSignature != null && this.mKey != null) {
            retval.addHeader("X-OF-Signature", this.mSignature);
            retval.addHeader("X-OF-Key", this.mKey);
        }
        addParams(retval);
        return retval;
    }

    protected final void addParams(HttpUriRequest retval) {
        if (this.mHttpParams != null) {
            retval.setParams(this.mHttpParams);
        }
    }

    public final void exec() throws IOException {
        this.mRequest = generateRequest();
        this.mRetriesLeft = numRetries();
        this.mResponseBody = null;
        while (this.mResponseBody == null) {
            try {
                AbstractHttpClient client = OpenFeintInternal.getInstance().getClient();
                client.execute(this.mRequest, new ResponseHandler<Object>() { // from class: com.openfeint.internal.request.BaseRequest.1
                    @Override // org.apache.http.client.ResponseHandler
                    public Object handleResponse(HttpResponse response) throws IOException {
                        HttpEntity entity = response.getEntity();
                        BaseRequest.this.mResponseBody = new byte[0];
                        BaseRequest.this.mResponseCode = response.getStatusLine().getStatusCode();
                        if (entity != null) {
                            Header contentEncoding = entity.getContentEncoding();
                            if (contentEncoding != null) {
                                BaseRequest.this.mResponseEncoding = contentEncoding.getValue();
                            }
                            Header contentType = entity.getContentType();
                            if (contentType != null) {
                                BaseRequest.this.mResponseType = contentType.getValue();
                            }
                            BaseRequest.this.mResponseBody = EntityUtils.toByteArray(entity);
                            if (entity.getContentLength() >= 0 && entity.getContentLength() != BaseRequest.this.mResponseBody.length) {
                                OpenFeintInternal.log(BaseRequest.TAG, "Content-Length mismatch with content - " + BaseRequest.this.mRequest.getURI().toASCIIString());
                                BaseRequest.this.mResponseCode = 0;
                            }
                        }
                        BaseRequest.this.response_ = response;
                        return null;
                    }
                });
                this.mRequest = null;
            } catch (Exception e) {
                OpenFeintInternal.log(TAG, "Error executing request '" + path() + "'.");
                e.printStackTrace(System.err);
                int i = this.mRetriesLeft - 1;
                this.mRetriesLeft = i;
                if (i < 0) {
                    ServerException se = new ServerException();
                    se.exceptionClass = e.getClass().getName();
                    se.message = e.getMessage();
                    if (se.message == null) {
                        se.message = OpenFeintInternal.getRString(R.string.of_unknown_server_error);
                    }
                    String exceptionBody = se.generate();
                    this.mResponseBody = exceptionBody.getBytes();
                    this.mResponseCode = 0;
                    return;
                }
            }
        }
    }

    public HttpResponse getResponse() {
        return this.response_;
    }

    public final void onResponse() {
        if (!this.mResponded) {
            this.mResponded = true;
            onResponse(this.mResponseCode, this.mResponseBody);
            this.response_ = null;
        }
    }

    public void launch() {
        OpenFeintInternal.makeRequest(this);
    }

    public void postTimeoutCleanup() throws UnsupportedOperationException {
        HttpUriRequest req = this.mRequest;
        this.mRequest = null;
        if (req != null) {
            try {
                req.abort();
            } catch (UnsupportedOperationException e) {
            }
        }
        ServerException se = new ServerException();
        se.exceptionClass = "Timeout";
        se.message = OpenFeintInternal.getRString(R.string.of_timeout);
        this.mResponseBody = se.generate().getBytes();
        this.mResponseCode = 0;
    }
}
