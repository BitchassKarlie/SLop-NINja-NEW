package com.android.vending.licensing;

import com.android.vending.licensing.Policy;

/* loaded from: classes.dex */
public class NullDeviceLimiter implements DeviceLimiter {
    @Override // com.android.vending.licensing.DeviceLimiter
    public Policy.LicenseResponse isDeviceAllowed(String userId) {
        return Policy.LicenseResponse.LICENSED;
    }
}
