package com.android.vending.licensing;

/* loaded from: classes.dex */
public interface Obfuscator {
    String obfuscate(String str);

    String unobfuscate(String str) throws ValidationException;
}
