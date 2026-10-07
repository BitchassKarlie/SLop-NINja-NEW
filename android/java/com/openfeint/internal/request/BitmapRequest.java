package com.openfeint.internal.request;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import com.halfbrick.fruitninja.R;
import com.openfeint.internal.OpenFeintInternal;

/* loaded from: classes.dex */
public abstract class BitmapRequest extends DownloadRequest {
    public void onSuccess(Bitmap responseBody) {
    }

    @Override // com.openfeint.internal.request.DownloadRequest
    protected void onSuccess(byte[] body) {
        Bitmap b = BitmapFactory.decodeByteArray(body, 0, body.length);
        if (b != null) {
            onSuccess(b);
        } else {
            onFailure(OpenFeintInternal.getRString(R.string.of_bitmap_decode_error));
        }
    }
}
