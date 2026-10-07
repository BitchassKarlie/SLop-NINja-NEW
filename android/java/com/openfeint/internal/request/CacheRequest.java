package com.openfeint.internal.request;

import android.database.Cursor;
import android.database.SQLException;
import android.database.sqlite.SQLiteDatabase;
import com.openfeint.internal.OpenFeintInternal;
import com.openfeint.internal.db.DB;
import org.apache.http.Header;
import org.apache.http.client.methods.HttpUriRequest;

/* loaded from: classes.dex */
public abstract class CacheRequest extends BaseRequest {
    private static final String IF_MODIFIED_SINCE = "If-Modified-Since";
    private static final String LastModified = "Last-Modified";
    private static final String TAG = "CacheRequest";
    private String key_;

    public CacheRequest(String key) {
        this.key_ = key;
    }

    @Override // com.openfeint.internal.request.BaseRequest
    public String method() {
        return "GET";
    }

    @Override // com.openfeint.internal.request.BaseRequest
    protected HttpUriRequest generateRequest() {
        HttpUriRequest req = super.generateRequest();
        String date = getLastModified();
        if (date != null) {
            req.addHeader(IF_MODIFIED_SINCE, date);
        }
        return req;
    }

    private String getLastModified() {
        Cursor result = null;
        String value = null;
        try {
            SQLiteDatabase db = DB.storeHelper.getReadableDatabase();
            String[] key = {this.key_};
            result = db.rawQuery("SELECT VALUE FROM store where id=?", key);
            if (result.getCount() > 0) {
                result.moveToFirst();
                value = result.getString(0);
            }
            db.close();
        } catch (Exception e) {
            OpenFeintInternal.log(TAG, e.getMessage());
        }
        if (result != null) {
            result.close();
        }
        return value;
    }

    private void storeLastModified(String value) throws SQLException {
        if (value != null) {
            String[] values = {this.key_, value};
            try {
                SQLiteDatabase db = DB.storeHelper.getWritableDatabase();
                db.execSQL("INSERT OR REPLACE INTO store VALUES(?, ?)", values);
                db.close();
            } catch (SQLException e) {
                OpenFeintInternal.log(TAG, e.getMessage());
            }
        }
    }

    public void on200Response() throws SQLException {
        Header h = getResponse().getFirstHeader(LastModified);
        if (h != null) {
            storeLastModified(h.getValue());
        }
    }
}
