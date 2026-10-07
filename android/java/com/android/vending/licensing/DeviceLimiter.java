package com.android.vending.licensing;

import com.android.vending.licensing.Policy;

/* loaded from: classes.dex */
public interface DeviceLimiter {
    Policy.LicenseResponse isDeviceAllowed(String str);
}
