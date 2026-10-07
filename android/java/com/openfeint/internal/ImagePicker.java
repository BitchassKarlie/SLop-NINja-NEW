package com.openfeint.internal;

import android.app.Activity;
import android.app.ActivityManager;
import android.content.Intent;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Matrix;
import android.net.Uri;
import android.provider.MediaStore;
import com.openfeint.internal.request.IRawRequestDelegate;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;

/* loaded from: classes.dex */
public class ImagePicker {
    public static final int IMAGE_PICKER_REQ_ID = 10009;
    protected static final String TAG = "ImagePicker";
    Activity mActivity;
    String mApiPath;
    ImagePickerCB mCallback;
    int mMaxLength;

    public static abstract class ImagePickerCB {
        public abstract void onPictureChosen(Bitmap bitmap);

        public void onAbort() {
        }
    }

    public ImagePicker(Activity currentActivity, int maxLength, ImagePickerCB cb) {
        this.mActivity = currentActivity;
        this.mCallback = cb;
        this.mMaxLength = maxLength;
    }

    public ImagePicker(Activity currentActivity, String apiPath, int maxLength) {
        this.mActivity = currentActivity;
        this.mApiPath = apiPath;
        this.mMaxLength = maxLength;
    }

    public ImagePicker show() {
        ActivityManager am = (ActivityManager) this.mActivity.getSystemService("activity");
        ActivityManager.MemoryInfo mi = new ActivityManager.MemoryInfo();
        am.getMemoryInfo(mi);
        Intent intent = new Intent("android.intent.action.PICK", MediaStore.Images.Media.INTERNAL_CONTENT_URI);
        intent.setType("image/*");
        this.mActivity.startActivityForResult(intent, IMAGE_PICKER_REQ_ID);
        return this;
    }

    public boolean onActivityResult(int requestCode, int resultCode, Intent returnedIntent) {
        if (requestCode == 10009) {
            if (resultCode == -1) {
                Uri selectedImage = returnedIntent.getData();
                String[] columns = {"_data", "orientation"};
                Cursor cursor = this.mActivity.getContentResolver().query(selectedImage, columns, null, null, null);
                cursor.moveToFirst();
                int columnIndex = cursor.getColumnIndex(columns[0]);
                String filePath = cursor.getString(columnIndex);
                int rotation = cursor.getInt(cursor.getColumnIndex(columns[1]));
                cursor.close();
                Bitmap image = resize(filePath, this.mMaxLength, rotation);
                OpenFeintInternal.log(TAG, "image! " + image.getWidth() + "x" + image.getHeight());
                if (this.mCallback != null) {
                    this.mCallback.onPictureChosen(image);
                } else {
                    ByteArrayOutputStream out = new ByteArrayOutputStream();
                    image.compress(Bitmap.CompressFormat.PNG, 100, out);
                    upload(this.mApiPath, out);
                }
            } else if (this.mCallback != null) {
                this.mCallback.onAbort();
            }
            return true;
        }
        return false;
    }

    private Bitmap resize(String filePath, int maxLength, int rotation) {
        Bitmap image = preScaleImage(filePath, maxLength);
        int width = image.getWidth();
        int height = image.getHeight();
        boolean tall = height > width;
        int _x = tall ? 0 : (width - height) / 2;
        int _y = tall ? (height - width) / 2 : 0;
        int _length = tall ? width : height;
        float scale = maxLength / _length;
        Matrix transform = new Matrix();
        transform.postScale(scale, scale);
        transform.postRotate(rotation);
        return Bitmap.createBitmap(image, _x, _y, _length, _length, transform, false);
    }

    private Bitmap preScaleImage(String filePath, int maxLength) {
        File f = new File(filePath);
        try {
            BitmapFactory.Options o = new BitmapFactory.Options();
            o.inJustDecodeBounds = true;
            BitmapFactory.decodeStream(new FileInputStream(f), null, o);
            int minDim = Math.min(o.outWidth, o.outHeight);
            int scale = 1;
            while (minDim / 2 > maxLength) {
                minDim /= 2;
                scale++;
            }
            BitmapFactory.Options o2 = new BitmapFactory.Options();
            o2.inSampleSize = scale;
            return BitmapFactory.decodeStream(new FileInputStream(f), null, o2);
        } catch (FileNotFoundException e) {
            OpenFeintInternal.log(TAG, e.toString());
            return null;
        }
    }

    private void upload(String apiPath, ByteArrayOutputStream stream) {
        OpenFeintInternal.getInstance().uploadFile(apiPath, "profile.png", stream.toByteArray(), "image/png", new IRawRequestDelegate() { // from class: com.openfeint.internal.ImagePicker.1
            @Override // com.openfeint.internal.request.IRawRequestDelegate
            public void onResponse(int status, String responseBody) {
                OpenFeintInternal.log(ImagePicker.TAG, "UPLOAD FINISHED! status:" + status + " response:" + responseBody);
            }
        });
    }
}
