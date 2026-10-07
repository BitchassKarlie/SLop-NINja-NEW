package com.halfbrick.fruitninja;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.Resources;
import android.net.Uri;
import android.os.Bundle;
import android.os.Process;
import android.provider.Settings;
import android.util.Log;
import android.view.KeyEvent;
import com.android.vending.licensing.AESObfuscator;
import com.android.vending.licensing.LicenseChecker;
import com.android.vending.licensing.LicenseCheckerCallback;
import com.android.vending.licensing.ServerManagedPolicy;
import org.codehaus.jackson.impl.JsonWriteContext;

/* loaded from: classes.dex */
public class FruitNinjaActivity extends Activity {
    private static final String BASE64_PUBLIC_KEY = "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAgVOPlGwypNiRXwWQSgrWULwqL7wo5wEkQYaFtQJelgILPmAcv2fRzYKXcZJVwIw2LZFHQezB4vSQl8s8wqbTxgdwTA5dRmbvfMV8IF7J9Q0M8nX1ibqm1VNLdO44LdEryDLc2GdcvWTxBbgt8HBXqKu4UO652yLTe1DAW7rrpC6YeJq/all6EYuh4Vy5Z786RgCXMARdA1BQqP5dUvdX6jlKZvnPaerIGeLxg5o3pvg/xtOwIF0satGnEqpFJ0ZJD5s615wY3CIDbwJSRgjvtZ8r1SFWMpfCz4MWzSGbSvsmYAsK18N2HRKnBIv5YKFNqsllTf/XCeImYjfeMQCOpQIDAQAB";
    private static final byte[] SALT = {-118, 107, 85, -45, -87, -55, 107, -91, 4, 55, 96, 37, 101, -119, -91, 49, 6, 116, -43, 4};
    FruitNinjaView mView;
    private AlertDialog.Builder failMarketCheckDialogBuilder = null;
    private LicenseCheckerCallback mLicenseCheckerCallback = null;
    private LicenseChecker mChecker = null;

    public static class AlertButtonInfo {
    }

    protected boolean ProcessKeyEvent(int keyCode, KeyEvent event) {
        switch (keyCode) {
            case JsonWriteContext.STATUS_OK_AFTER_SPACE /* 3 */:
            case JsonWriteContext.STATUS_EXPECT_NAME /* 5 */:
            case 6:
            case 24:
            case 25:
                return false;
            default:
                this.mView.RegisterKeyEvent(event);
                return true;
        }
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        return ProcessKeyEvent(keyCode, event);
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyUp(int keyCode, KeyEvent event) {
        return ProcessKeyEvent(keyCode, event);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setVolumeControlStream(3);
        this.mView = new FruitNinjaView(getApplication(), this);
        setContentView(this.mView);
        InitLicense();
    }

    public void shutdownApp() {
        runOnUiThread(new Runnable() { // from class: com.halfbrick.fruitninja.FruitNinjaActivity.1
            @Override // java.lang.Runnable
            public void run() {
                FruitNinjaActivity.this.finish();
            }
        });
    }

    @Override // android.app.Activity
    protected void onPause() throws IllegalStateException {
        super.onPause();
        this.mView.onPause();
        NativeGameLib.saveOnExit();
        SoundManager.AutoPause();
    }

    @Override // android.app.Activity
    protected void onResume() throws IllegalStateException {
        super.onResume();
        SoundManager.AutoResume();
        this.mView.onResume();
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) {
            NativeGameLib.onFocusRetrieved();
        } else {
            NativeGameLib.onFocusLost();
        }
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        CleanupLicense();
        Process.killProcess(Process.myPid());
    }

    final int getLocalResourceIdentifier(String name, String type) {
        if (name == null || type == null) {
            return 0;
        }
        return getResources().getIdentifier(name, type, getPackageName());
    }

    public final void failMarketCheck(String title, String message) throws Resources.NotFoundException {
        Log.e("halfbrick.Mortar", "Market check failed, message: " + message);
        int titleID = getLocalResourceIdentifier(title, "string");
        int messageID = getLocalResourceIdentifier(message, "string");
        if (messageID != 0) {
            failMarketCheck(titleID, messageID);
            return;
        }
        if (title != null) {
            title = getResources().getString(titleID);
        }
        failMarketCheck_RawStrings(title, "Unknown license validation error message: " + message);
    }

    public final void failMarketCheck(int titleID, int messageID) {
        Log.e("halfbrick.Mortar", "Market check failed, titleID: " + titleID + ", messageID: " + messageID);
        this.failMarketCheckDialogBuilder = new AlertDialog.Builder(this).setCancelable(false).setMessage(messageID).setPositiveButton(R.string.quit_button, new DialogInterface.OnClickListener() { // from class: com.halfbrick.fruitninja.FruitNinjaActivity.2
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialog, int which) {
                FruitNinjaActivity.this.shutdownApp();
            }
        });
        if (titleID != 0) {
            this.failMarketCheckDialogBuilder.setTitle(titleID);
        }
        showDialog(2);
    }

    private static class AlertDialogKeyListener implements DialogInterface.OnKeyListener {
        private AlertDialogKeyListener() {
        }

        @Override // android.content.DialogInterface.OnKeyListener
        public boolean onKey(DialogInterface dialog, int keyCode, KeyEvent event) {
            switch (keyCode) {
                case JsonWriteContext.STATUS_OK_AFTER_SPACE /* 3 */:
                case JsonWriteContext.STATUS_EXPECT_VALUE /* 4 */:
                    return false;
                default:
                    return true;
            }
        }
    }

    public final void failMarketCheck_RawStrings(String title, String message) {
        this.failMarketCheckDialogBuilder = new AlertDialog.Builder(this).setCancelable(false).setMessage(message).setOnKeyListener(new AlertDialogKeyListener()).setPositiveButton(R.string.quit_button, new DialogInterface.OnClickListener() { // from class: com.halfbrick.fruitninja.FruitNinjaActivity.3
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialog, int which) {
                FruitNinjaActivity.this.shutdownApp();
            }
        });
        if (title != null) {
            this.failMarketCheckDialogBuilder.setTitle(title);
        }
        showDialog(2);
    }

    @Override // android.app.Activity
    protected final Dialog onCreateDialog(int id) {
        switch (id) {
            case 0:
                return new AlertDialog.Builder(this).setTitle(R.string.unlicensed_dialog_title).setMessage(R.string.unlicensed_dialog_body).setCancelable(false).setOnKeyListener(new AlertDialogKeyListener()).setPositiveButton(R.string.buy_button, new DialogInterface.OnClickListener() { // from class: com.halfbrick.fruitninja.FruitNinjaActivity.5
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialog, int which) {
                        Intent marketIntent = new Intent("android.intent.action.VIEW", Uri.parse("http://market.android.com/details?id=" + FruitNinjaActivity.this.getPackageName()));
                        FruitNinjaActivity.this.startActivity(marketIntent);
                        FruitNinjaActivity.this.shutdownApp();
                    }
                }).setNegativeButton(R.string.quit_button, new DialogInterface.OnClickListener() { // from class: com.halfbrick.fruitninja.FruitNinjaActivity.4
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialog, int which) {
                        FruitNinjaActivity.this.shutdownApp();
                    }
                }).create();
            case JsonWriteContext.STATUS_OK_AFTER_COMMA /* 1 */:
                return new AlertDialog.Builder(this).setTitle(R.string.quit_game_title).setMessage(R.string.quit_game_body).setOnKeyListener(new AlertDialogKeyListener()).setCancelable(true).setOnCancelListener(new DialogInterface.OnCancelListener() { // from class: com.halfbrick.fruitninja.FruitNinjaActivity.8
                    @Override // android.content.DialogInterface.OnCancelListener
                    public void onCancel(DialogInterface dialog) {
                        NativeGameLib.confirmQuitRequest(false);
                    }
                }).setPositiveButton(R.string.quit_button, new DialogInterface.OnClickListener() { // from class: com.halfbrick.fruitninja.FruitNinjaActivity.7
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialog, int which) {
                        NativeGameLib.confirmQuitRequest(true);
                    }
                }).setNegativeButton(R.string.play_button, new DialogInterface.OnClickListener() { // from class: com.halfbrick.fruitninja.FruitNinjaActivity.6
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialog, int which) {
                        NativeGameLib.confirmQuitRequest(false);
                    }
                }).create();
            case JsonWriteContext.STATUS_OK_AFTER_COLON /* 2 */:
                Dialog dlg = this.failMarketCheckDialogBuilder.create();
                this.failMarketCheckDialogBuilder = null;
                return dlg;
            default:
                return null;
        }
    }

    final void InitLicense() {
        String deviceId = Settings.Secure.getString(getContentResolver(), "android_id");
        this.mLicenseCheckerCallback = new MyLicenseCheckerCallback();
        this.mChecker = new LicenseChecker(this, new ServerManagedPolicy(this, new AESObfuscator(SALT, getPackageName(), deviceId)), BASE64_PUBLIC_KEY);
    }

    final void CleanupLicense() {
        this.mChecker.onDestroy();
    }

    public final void doLicenseCheck() {
        setProgressBarIndeterminateVisibility(true);
        this.mChecker.checkAccess(this.mLicenseCheckerCallback);
    }

    private class MyLicenseCheckerCallback implements LicenseCheckerCallback {
        private MyLicenseCheckerCallback() {
        }

        @Override // com.android.vending.licensing.LicenseCheckerCallback
        public void allow() {
            if (!FruitNinjaActivity.this.isFinishing()) {
                NativeGameLib.SetAppLicensed(true);
            }
        }

        @Override // com.android.vending.licensing.LicenseCheckerCallback
        public final void dontAllow() {
            if (!FruitNinjaActivity.this.isFinishing()) {
                NativeGameLib.SetAppLicensed(true);
            }
        }

        @Override // com.android.vending.licensing.LicenseCheckerCallback
        public final void applicationError(LicenseCheckerCallback.ApplicationErrorCode errorCode) {
            if (!FruitNinjaActivity.this.isFinishing()) {
                switch (AnonymousClass9.$SwitchMap$com$android$vending$licensing$LicenseCheckerCallback$ApplicationErrorCode[errorCode.ordinal()]) {
                    case JsonWriteContext.STATUS_OK_AFTER_COMMA /* 1 */:
                    case JsonWriteContext.STATUS_OK_AFTER_COLON /* 2 */:
                    case JsonWriteContext.STATUS_OK_AFTER_SPACE /* 3 */:
                    case JsonWriteContext.STATUS_EXPECT_VALUE /* 4 */:
                    case JsonWriteContext.STATUS_EXPECT_NAME /* 5 */:
                        NativeGameLib.SetAppLicensed(false);
                        FruitNinjaActivity.this.showDialog(0);
                        break;
                    case 7:
                        boolean appLicensed = NativeGameLib.GetIsAppLicensed();
                        if (!appLicensed) {
                            FruitNinjaActivity.this.showDialog(0);
                            break;
                        }
                        break;
                }
            }
        }
    }

    /* renamed from: com.halfbrick.fruitninja.FruitNinjaActivity$9, reason: invalid class name */
    static /* synthetic */ class AnonymousClass9 {
        static final /* synthetic */ int[] $SwitchMap$com$android$vending$licensing$LicenseCheckerCallback$ApplicationErrorCode = new int[LicenseCheckerCallback.ApplicationErrorCode.values().length];

        static {
            try {
                $SwitchMap$com$android$vending$licensing$LicenseCheckerCallback$ApplicationErrorCode[LicenseCheckerCallback.ApplicationErrorCode.INVALID_PACKAGE_NAME.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$android$vending$licensing$LicenseCheckerCallback$ApplicationErrorCode[LicenseCheckerCallback.ApplicationErrorCode.NON_MATCHING_UID.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$android$vending$licensing$LicenseCheckerCallback$ApplicationErrorCode[LicenseCheckerCallback.ApplicationErrorCode.NOT_MARKET_MANAGED.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$android$vending$licensing$LicenseCheckerCallback$ApplicationErrorCode[LicenseCheckerCallback.ApplicationErrorCode.INVALID_PUBLIC_KEY.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$android$vending$licensing$LicenseCheckerCallback$ApplicationErrorCode[LicenseCheckerCallback.ApplicationErrorCode.MISSING_PERMISSION.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
            try {
                $SwitchMap$com$android$vending$licensing$LicenseCheckerCallback$ApplicationErrorCode[LicenseCheckerCallback.ApplicationErrorCode.CHECK_IN_PROGRESS.ordinal()] = 6;
            } catch (NoSuchFieldError e6) {
            }
            try {
                $SwitchMap$com$android$vending$licensing$LicenseCheckerCallback$ApplicationErrorCode[LicenseCheckerCallback.ApplicationErrorCode.COMMUNICATION_ERROR.ordinal()] = 7;
            } catch (NoSuchFieldError e7) {
            }
        }
    }
}
