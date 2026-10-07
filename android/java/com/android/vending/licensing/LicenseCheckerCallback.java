package com.android.vending.licensing;

/* loaded from: classes.dex */
public interface LicenseCheckerCallback {

    public enum ApplicationErrorCode {
        INVALID_PACKAGE_NAME,
        NON_MATCHING_UID,
        NOT_MARKET_MANAGED,
        CHECK_IN_PROGRESS,
        INVALID_PUBLIC_KEY,
        MISSING_PERMISSION,
        COMMUNICATION_ERROR
    }

    void allow();

    void applicationError(ApplicationErrorCode applicationErrorCode);

    void dontAllow();
}
