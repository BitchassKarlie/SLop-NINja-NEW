package com.openfeint.internal.ui;

import android.content.Intent;
import android.graphics.Bitmap;
import android.os.Bundle;
import com.openfeint.api.OpenFeint;
import com.openfeint.internal.ImagePicker;
import com.openfeint.internal.OpenFeintInternal;
import com.openfeint.internal.Util;
import com.openfeint.internal.Util5;
import com.openfeint.internal.request.IRawRequestDelegate;
import com.openfeint.internal.ui.WebNav;
import java.io.ByteArrayOutputStream;
import java.util.List;
import java.util.Map;

/* loaded from: classes.dex */
public class IntroFlow extends WebNav {
    ImagePicker mImagePicker;

    @Override // com.openfeint.internal.ui.WebNav, android.app.Activity
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
    }

    @Override // com.openfeint.internal.ui.WebNav
    protected String initialContentPath() {
        String contentName = getIntent().getStringExtra("content_name");
        return contentName != null ? "intro/" + contentName : "intro/index";
    }

    @Override // com.openfeint.internal.ui.WebNav, android.app.Activity
    public void onActivityResult(int requestCode, int resultCode, Intent returnedIntent) {
        if (this.mImagePicker != null && this.mImagePicker.onActivityResult(requestCode, resultCode, returnedIntent)) {
            this.mImagePicker = null;
        }
    }

    @Override // com.openfeint.internal.ui.WebNav
    protected WebNav.ActionHandler createActionHandler(WebNav webNav) {
        return new IntroFlowActionHandler(webNav);
    }

    private class IntroFlowActionHandler extends WebNav.ActionHandler {
        Bitmap cachedImage;

        public IntroFlowActionHandler(WebNav webNav) {
            super(webNav);
        }

        @Override // com.openfeint.internal.ui.WebNav.ActionHandler
        protected void populateActionList(List<String> actionList) {
            super.populateActionList(actionList);
            actionList.add("createUser");
            actionList.add("loginUser");
            actionList.add("cacheImage");
            actionList.add("uploadImage");
            actionList.add("clearImage");
            actionList.add("decline");
            actionList.add("getEmail");
        }

        public final void createUser(final Map<String, String> options) {
            OpenFeintInternal.getInstance().createUser(options.get("name"), options.get("email"), options.get("password"), options.get("password_confirmation"), new IRawRequestDelegate() { // from class: com.openfeint.internal.ui.IntroFlow.IntroFlowActionHandler.1
                @Override // com.openfeint.internal.request.IRawRequestDelegate
                public void onResponse(int status, String response) {
                    String js = String.format("%s('%d', %s)", options.get("callback"), Integer.valueOf(status), response.trim());
                    IntroFlowActionHandler.this.mWebNav.executeJavascript(js);
                }
            });
        }

        public final void loginUser(final Map<String, String> options) {
            OpenFeintInternal.getInstance().loginUser(options.get("email"), options.get("password"), options.get("user_id"), new IRawRequestDelegate() { // from class: com.openfeint.internal.ui.IntroFlow.IntroFlowActionHandler.2
                @Override // com.openfeint.internal.request.IRawRequestDelegate
                public void onResponse(int status, String response) {
                    String js = String.format("%s('%d', %s)", options.get("callback"), Integer.valueOf(status), response.trim());
                    IntroFlowActionHandler.this.mWebNav.executeJavascript(js);
                }
            });
        }

        public final void cacheImage(Map<String, String> options) {
            IntroFlow.this.mImagePicker = new ImagePicker(IntroFlow.this, 152, new ImagePicker.ImagePickerCB() { // from class: com.openfeint.internal.ui.IntroFlow.IntroFlowActionHandler.3
                @Override // com.openfeint.internal.ImagePicker.ImagePickerCB
                public void onPictureChosen(Bitmap image) {
                    IntroFlowActionHandler.this.cachedImage = image;
                }
            }).show();
        }

        public final void uploadImage(Map<String, String> options) {
            if (this.cachedImage != null) {
                String apiUrl = "/xp/users/" + OpenFeintInternal.getInstance().getCurrentUser().resourceID() + "/profile_picture";
                ByteArrayOutputStream out = new ByteArrayOutputStream();
                this.cachedImage.compress(Bitmap.CompressFormat.PNG, 100, out);
                upload(apiUrl, out);
            }
        }

        public final void clearImage(Map<String, String> options) {
            this.cachedImage = null;
        }

        public void decline(Map<String, String> options) {
            OpenFeint.userDeclinedFeint();
            IntroFlow.this.finish();
        }

        public void getEmail(Map<String, String> options) {
            String account;
            if (Util.isEclairOrLater() && (account = Util5.getAccountNameEclair(IntroFlow.this)) != null) {
                IntroFlow.this.executeJavascript(String.format("%s('%s');", options.get("callback"), account));
            }
        }

        private void upload(String apiPath, ByteArrayOutputStream stream) {
            OpenFeintInternal.getInstance().uploadFile(apiPath, "profile.png", stream.toByteArray(), "image/png", new IRawRequestDelegate() { // from class: com.openfeint.internal.ui.IntroFlow.IntroFlowActionHandler.4
                @Override // com.openfeint.internal.request.IRawRequestDelegate
                public void onResponse(int status, String responseBody) {
                    OpenFeintInternal.log("WebUI", "UPLOAD FINISHED! status:" + status + " response:" + responseBody);
                }
            });
        }
    }
}
