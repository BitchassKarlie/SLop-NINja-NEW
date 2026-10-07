package com.android.vending.licensing;

/* loaded from: classes.dex */
public interface Policy {

    public enum LicenseResponse {
        LICENSED,
        NOT_LICENSED,
        RETRY
    }

    boolean allowAccess();

    boolean deniedAccess();

    void processServerResponse(LicenseResponse licenseResponse, ResponseData responseData);
}
