package com.openfeint.internal.notifications;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.halfbrick.fruitninja.R;
import com.openfeint.api.Notification;
import com.openfeint.internal.OpenFeintInternal;
import com.openfeint.internal.request.BitmapRequest;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes.dex */
public class TwoLineNotification extends NotificationBase {
    protected TwoLineNotification(String text, String extra, String imageName, Notification.Category cat, Notification.Type type, Map<String, Object> userData) {
        super(text, imageName, cat, type, userData);
    }

    @Override // com.openfeint.internal.notifications.NotificationBase
    protected boolean createView() {
        LayoutInflater inflater = (LayoutInflater) OpenFeintInternal.getInstance().getContext().getSystemService("layout_inflater");
        this.displayView = inflater.inflate(R.layout.of_two_line_notification, (ViewGroup) null);
        ((TextView) this.displayView.findViewById(R.id.of_text1)).setText(getText());
        ((TextView) this.displayView.findViewById(R.id.of_text2)).setText((String) getUserData().get("extra"));
        final ImageView icon = (ImageView) this.displayView.findViewById(R.id.of_icon);
        if (this.imageName != null) {
            Drawable image = getResourceDrawable(this.imageName);
            if (image == null) {
                BitmapRequest req = new BitmapRequest() { // from class: com.openfeint.internal.notifications.TwoLineNotification.1
                    @Override // com.openfeint.internal.request.BaseRequest
                    public String path() {
                        return TwoLineNotification.this.imageName;
                    }

                    @Override // com.openfeint.internal.request.BitmapRequest
                    public void onSuccess(Bitmap responseBody) {
                        icon.setImageDrawable(new BitmapDrawable(responseBody));
                        TwoLineNotification.this.showToast();
                    }

                    @Override // com.openfeint.internal.request.DownloadRequest
                    public void onFailure(String exceptionMessage) {
                        OpenFeintInternal.log("NotificationImage", "Failed to load image " + TwoLineNotification.this.imageName + ":" + exceptionMessage);
                        icon.setVisibility(4);
                        TwoLineNotification.this.showToast();
                    }
                };
                req.launch();
                return false;
            }
            icon.setImageDrawable(image);
        } else {
            icon.setVisibility(4);
        }
        return true;
    }

    @Override // com.openfeint.internal.notifications.NotificationBase
    protected void drawView(Canvas canvas) {
        this.displayView.draw(canvas);
    }

    public static void show(String text, String extra) {
        show(text, extra, Notification.Category.Foreground);
    }

    public static void show(String text, String extra, Notification.Category c) {
        show(text, extra, c, Notification.Type.None);
    }

    public static void show(String text, String extra, Notification.Category c, Notification.Type t) {
        show(text, extra, null, c, t);
    }

    public static void show(String text, String extra, String imageName) {
        show(text, extra, imageName, Notification.Category.Foreground);
    }

    public static void show(String text, String extra, String imageName, Notification.Category c) {
        show(text, extra, imageName, c, Notification.Type.None);
    }

    public static void show(String text, String extra, String imageName, Notification.Category c, Notification.Type t) {
        Map<String, Object> userData = new HashMap<>();
        userData.put("extra", extra);
        TwoLineNotification notification = new TwoLineNotification(text, extra, imageName, c, t, userData);
        notification.checkDelegateAndView();
    }
}
