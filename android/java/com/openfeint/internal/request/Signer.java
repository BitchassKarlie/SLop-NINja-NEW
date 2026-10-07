package com.openfeint.internal.request;

import java.io.UnsupportedEncodingException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;
import org.apache.commons.codec.binary.Base64;

/* loaded from: classes.dex */
public class Signer {
    private String mAccessToken;
    private String mKey;
    private String mSecret;
    private String mSigningKey;

    public String getKey() {
        return this.mKey;
    }

    public Signer(String key, String secret) {
        this.mKey = key;
        this.mSecret = secret;
        this.mSigningKey = this.mSecret + "&";
    }

    public void setAccessToken(String token, String tokenSecret) {
        this.mAccessToken = token;
        this.mSigningKey = this.mSecret + "&" + tokenSecret;
    }

    public String sign(String path, String method, long secondsSinceEpoch, OrderedArgList unsignedParams) throws IllegalStateException, NoSuchAlgorithmException, InvalidKeyException {
        if (this.mAccessToken != null) {
            unsignedParams.put("token", this.mAccessToken);
        }
        StringBuilder sigbase = new StringBuilder();
        sigbase.append(path);
        sigbase.append('+');
        sigbase.append(this.mSecret);
        sigbase.append('+');
        sigbase.append(method);
        sigbase.append('+');
        String argString = unsignedParams.getArgString();
        sigbase.append(argString == null ? "" : argString);
        try {
            SecretKeySpec key = new SecretKeySpec(this.mSigningKey.getBytes("UTF-8"), "HmacSHA1");
            Mac mac = Mac.getInstance("HmacSHA1");
            mac.init(key);
            byte[] bytes = mac.doFinal(sigbase.toString().getBytes("UTF-8"));
            return new String(Base64.encodeBase64(bytes)).replace("\r\n", "");
        } catch (UnsupportedEncodingException | InvalidKeyException | NoSuchAlgorithmException e) {
            return null;
        }
    }
}
