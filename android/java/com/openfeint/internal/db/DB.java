package com.openfeint.internal.db;

import android.content.Context;
import android.database.SQLException;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.os.Environment;
import com.openfeint.internal.OpenFeintInternal;
import java.io.File;

/* loaded from: classes.dex */
public class DB {
    public static final String DBNAME = "manifest.db";
    private static final String DBPATH = "/openfeint/webui/manifest.db";
    private static final int VERSION = 2;
    public static DataStorageHelperX storeHelper;

    private static boolean removeDB(Context ctx) {
        String state = Environment.getExternalStorageState();
        if (!"mounted".equals(state)) {
            return ctx.getDatabasePath(DBNAME).delete();
        }
        File sdcard = Environment.getExternalStorageDirectory();
        File db = new File(sdcard, DBPATH);
        return db.delete();
    }

    public static void createDB(Context ctx) {
        String state = Environment.getExternalStorageState();
        if ("mounted".equals(state)) {
            File sdcard = Environment.getExternalStorageDirectory();
            storeHelper = new DataStorageHelperX(sdcard.getAbsolutePath() + DBPATH);
        } else {
            storeHelper = new DataStorageHelperX(ctx);
        }
    }

    public static boolean recover(Context ctx) {
        if (storeHelper != null) {
            storeHelper.close();
        }
        boolean success = removeDB(ctx);
        if (success) {
            createDB(ctx);
            return storeHelper != null;
        }
        return success;
    }

    public static void insertManifest(String[] values) throws SQLException {
        try {
            SQLiteDatabase db = storeHelper.getWritableDatabase();
            db.execSQL("INSERT OR REPLACE INTO manifest VALUES(?, ?)", values);
            db.close();
        } catch (SQLException e) {
            OpenFeintInternal.log("SQL", e.toString());
        }
    }

    public static class DataStorageHelperX extends SQLiteOpenHelperX {
        DataStorageHelperX(Context context) {
            super(new DataStorageHelper(context));
        }

        DataStorageHelperX(String path) {
            super(path, 2);
        }

        @Override // com.openfeint.internal.db.SQLiteOpenHelperX
        public void onCreate(SQLiteDatabase db) throws SQLException {
            db.execSQL("CREATE TABLE manifest (PATH TEXT PRIMARY KEY, HASH TEXT);");
            db.execSQL("CREATE TABLE store (ID TEXT PRIMARY KEY, VALUE TEXT);");
        }

        @Override // com.openfeint.internal.db.SQLiteOpenHelperX
        public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) throws SQLException {
            if (oldVersion == 1) {
                db.execSQL("CREATE TABLE store (ID TEXT PRIMARY KEY, VALUE TEXT);");
            }
        }
    }

    public static class DataStorageHelper extends SQLiteOpenHelper {
        DataStorageHelper(Context context) {
            super(context, DB.DBNAME, (SQLiteDatabase.CursorFactory) null, 2);
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public void onCreate(SQLiteDatabase db) throws SQLException {
            db.execSQL("CREATE TABLE manifest (PATH TEXT PRIMARY KEY, HASH TEXT);");
            db.execSQL("CREATE TABLE store (ID TEXT PRIMARY KEY, VALUE TEXT);");
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) throws SQLException {
            if (oldVersion == 1) {
                db.execSQL("CREATE TABLE store (ID TEXT PRIMARY KEY, VALUE TEXT);");
            }
        }
    }
}
