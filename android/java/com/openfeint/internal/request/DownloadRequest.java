package com.openfeint.internal.request;

import com.halfbrick.fruitninja.R;
import com.openfeint.internal.JsonResourceParser;
import com.openfeint.internal.OpenFeintInternal;
import com.openfeint.internal.resource.ServerException;
import java.io.IOException;
import org.codehaus.jackson.JsonFactory;
import org.codehaus.jackson.JsonParser;

/* loaded from: classes.dex */
public abstract class DownloadRequest extends BaseRequest {
    protected abstract void onSuccess(byte[] bArr);

    public DownloadRequest() {
    }

    public DownloadRequest(OrderedArgList args) {
        super(args);
    }

    @Override // com.openfeint.internal.request.BaseRequest
    public String method() {
        return "GET";
    }

    public void onFailure(String exceptionMessage) {
        OpenFeintInternal.log("ServerException", exceptionMessage);
    }

    @Override // com.openfeint.internal.request.BaseRequest
    public void onResponse(int responseCode, byte[] body) {
        String exceptionMessage = OpenFeintInternal.getRString(R.string.of_unknown_server_error);
        if (200 <= responseCode && responseCode < 300 && body != null) {
            onSuccess(body);
            return;
        }
        if (404 == responseCode) {
            exceptionMessage = OpenFeintInternal.getRString(R.string.of_file_not_found);
        } else {
            try {
                JsonFactory jsonFactory = new JsonFactory();
                JsonParser jp = jsonFactory.createJsonParser(body);
                JsonResourceParser jrp = new JsonResourceParser(jp);
                Object responseBody = jrp.parse();
                if (responseBody != null && (responseBody instanceof ServerException)) {
                    ServerException e = (ServerException) responseBody;
                    exceptionMessage = e.exceptionClass + ": " + e.message;
                }
            } catch (IOException e2) {
                exceptionMessage = OpenFeintInternal.getRString(R.string.of_error_parsing_error_message);
            }
        }
        onFailure(exceptionMessage);
    }
}
