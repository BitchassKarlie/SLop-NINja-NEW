package com.halfbrick.fruitninja;

import android.util.Log;

/* loaded from: classes.dex */
public class NativeGameLib {
    private static Object sSyncObj;

    private static native boolean native_GetIsAppLicensed();

    private static native void native_InitFileManager(String str, String str2, boolean z);

    private static native void native_SetAppLicensed(boolean z);

    private static native boolean native_canShowNotification();

    private static native void native_confirmQuitRequest(boolean z);

    private static native void native_displayNotification(String str, int i);

    private static native boolean native_gameRequestedQuit();

    private static native void native_init(int i, int i2, String str);

    private static native void native_keyEvent(int i, boolean z, boolean z2);

    private static native void native_onFocusLost();

    private static native void native_onFocusRetrieved();

    private static native void native_onPause();

    private static native void native_onResume();

    private static native void native_saveOnExit();

    private static native boolean native_step();

    private static native void native_touchEvent(int i, long j, int i2, float f, float f2, float f3, float f4);

    public static boolean TryLoadLibrary(String library) {
        try {
            Log.i("JNI", "Trying to load lib" + library + ".so");
            System.loadLibrary(library);
            return true;
        } catch (UnsatisfiedLinkError ule) {
            Log.e("JNI", "WARNING: Could not load lib" + library + ".so");
            Log.e("JNI", "Reason: " + ule.getMessage());
            return false;
        }
    }

    public static boolean TryLoadGameLibrary() {
        boolean result = TryLoadLibrary("fruitninja");
        Log.v("halfbrick.Mortar", "Loading native lib, result: " + result);
        return result;
    }

    static {
        TryLoadGameLibrary();
        sSyncObj = new Object();
    }

    public static Object GetSyncObj() {
        return sSyncObj;
    }

    public static void init(int width, int height, String language) {
        synchronized (sSyncObj) {
            native_init(width, height, language);
        }
    }

    public static boolean step() {
        boolean zNative_step;
        synchronized (sSyncObj) {
            zNative_step = native_step();
        }
        return zNative_step;
    }

    public static void InitFileManager(String assetDir, String saveDir, boolean result) {
        synchronized (sSyncObj) {
            native_InitFileManager(assetDir, saveDir, result);
        }
    }

    public static void touchEvent(int ActionID, long ActionTime_ms, int PointerID, float X, float Y, float Pressure, float Size) {
        native_touchEvent(ActionID, ActionTime_ms, PointerID, X, Y, Pressure, Size);
    }

    public static void keyEvent(int keyCode, boolean isDown, boolean isCanceled) {
        native_keyEvent(keyCode, isDown, isCanceled);
    }

    public static void onPause() {
        synchronized (sSyncObj) {
            native_onPause();
        }
    }

    public static void onResume() {
        synchronized (sSyncObj) {
            native_onResume();
        }
    }

    public static void onFocusRetrieved() {
        synchronized (sSyncObj) {
            native_onFocusRetrieved();
        }
    }

    public static void onFocusLost() {
        synchronized (sSyncObj) {
            native_onFocusLost();
        }
    }

    public static void saveOnExit() {
        synchronized (sSyncObj) {
            native_saveOnExit();
        }
    }

    public static boolean canShowNotification() {
        return native_canShowNotification();
    }

    public static void displayNotification(String text, int category) {
        synchronized (sSyncObj) {
            native_displayNotification(text, category);
        }
    }

    public static void SetAppLicensed(boolean licensed) {
        synchronized (sSyncObj) {
            native_SetAppLicensed(licensed);
        }
    }

    public static boolean GetIsAppLicensed() {
        boolean zNative_GetIsAppLicensed;
        synchronized (sSyncObj) {
            zNative_GetIsAppLicensed = native_GetIsAppLicensed();
        }
        return zNative_GetIsAppLicensed;
    }

    public static boolean gameRequestedQuit() {
        return native_gameRequestedQuit();
    }

    public static void confirmQuitRequest(boolean doQuit) {
        synchronized (sSyncObj) {
            native_confirmQuitRequest(doQuit);
        }
    }
}
