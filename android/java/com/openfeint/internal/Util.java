package com.openfeint.internal;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.os.Environment;
import android.util.DisplayMetrics;
import android.view.WindowManager;
import com.openfeint.api.OpenFeintSettings;
import com.openfeint.internal.resource.ResourceClass;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import org.codehaus.jackson.JsonFactory;
import org.codehaus.jackson.JsonParser;

/* loaded from: classes.dex */
public class Util {
    private static final String TAG = "Util";
    public static final int VERSION = Integer.valueOf(Build.VERSION.SDK).intValue();

    public static boolean isEclairOrLater() {
        return VERSION >= 5;
    }

    public static void setOrientation(Activity act) {
        Integer orientation = (Integer) OpenFeintInternal.getInstance().getSettings().get(OpenFeintSettings.RequestedOrientation);
        if (orientation != null) {
            act.setRequestedOrientation(orientation.intValue());
        }
    }

    public static final byte[] toByteArray(InputStream is) throws IOException {
        byte[] readBuffer = new byte[4096];
        ByteArrayOutputStream accumulator = new ByteArrayOutputStream();
        while (true) {
            int count = is.read(readBuffer);
            if (count > 0) {
                accumulator.write(readBuffer, 0, count);
            } else {
                accumulator.close();
                return accumulator.toByteArray();
            }
        }
    }

    public static void deleteFiles(File path) {
        if (path.isDirectory()) {
            String[] files = path.list();
            for (String name : files) {
                File child = new File(path, name);
                deleteFiles(child);
            }
        }
        path.delete();
    }

    public static void copyDirectory(File srcDir, File dstDir) throws IOException {
        if (srcDir.isDirectory()) {
            if (!dstDir.exists()) {
                dstDir.mkdir();
            }
            String[] children = srcDir.list();
            for (int i = 0; i < children.length; i++) {
                copyDirectory(new File(srcDir, children[i]), new File(dstDir, children[i]));
            }
            return;
        }
        copyFile(srcDir, dstDir);
    }

    public static void copyFile(File src, File dst) throws IOException {
        InputStream in = new FileInputStream(src);
        OutputStream out = new FileOutputStream(dst);
        copyStream(in, out);
    }

    public static void copyStream(InputStream in, OutputStream out) throws IOException {
        byte[] copyBuffer = new byte[16384];
        while (true) {
            int len = in.read(copyBuffer);
            if (len > 0) {
                out.write(copyBuffer, 0, len);
            } else {
                in.close();
                out.close();
                return;
            }
        }
    }

    public static void saveFile(byte[] in, String path) throws IOException {
        File file = new File(path);
        file.getParentFile().mkdirs();
        FileOutputStream out = new FileOutputStream(file);
        out.write(in);
        out.close();
    }

    public static DisplayMetrics getDisplayMetrics() {
        DisplayMetrics metrics = new DisplayMetrics();
        WindowManager wm = (WindowManager) OpenFeintInternal.getInstance().getContext().getSystemService("window");
        wm.getDefaultDisplay().getMetrics(metrics);
        return metrics;
    }

    public static void run(String cmd) throws IOException {
        try {
            Runtime.getRuntime().exec(cmd);
            OpenFeintInternal.log(TAG, cmd);
        } catch (Exception e) {
            OpenFeintInternal.log(TAG, e.getMessage());
        }
    }

    public static void createSymbolic(String dst, String src) throws IOException {
        run("ln -s " + dst + " " + src);
    }

    public static boolean isSymblic(File f) {
        try {
            return !f.getCanonicalPath().equals(f.getAbsolutePath());
        } catch (IOException e) {
            return false;
        }
    }

    public static void moveWebCache(Context ctx) {
        File cache = new File(ctx.getCacheDir(), "webviewCache");
        if (!isSymblic(cache)) {
            String state = Environment.getExternalStorageState();
            if ("mounted".equals(state)) {
                File sdcard = new File(Environment.getExternalStorageDirectory(), "openfeint/cache");
                if (!sdcard.exists()) {
                    sdcard.mkdirs();
                }
                deleteFiles(cache);
                createSymbolic(sdcard.getAbsolutePath(), cache.getAbsolutePath());
            }
        }
    }

    public static byte[] readWholeFile(String path) throws IOException {
        File f = new File(path);
        int len = (int) f.length();
        InputStream in = new FileInputStream(f);
        byte[] b = new byte[len];
        in.read(b);
        return b;
    }

    public static Object getObjFromJsonFile(String path) {
        try {
            InputStream in = new FileInputStream(new File(path));
            return getObjFromJsonStream(in);
        } catch (Exception e) {
            return null;
        }
    }

    public static Object getObjFromJsonStream(InputStream in) throws IOException {
        JsonFactory jsonFactory = new JsonFactory();
        JsonParser jp = jsonFactory.createJsonParser(in);
        JsonResourceParser jrp = new JsonResourceParser(jp);
        return jrp.parse();
    }

    public static Object getObjFromJson(byte[] json) {
        JsonFactory jsonFactory = new JsonFactory();
        try {
            JsonParser jp = jsonFactory.createJsonParser(json);
            JsonResourceParser jrp = new JsonResourceParser(jp);
            return jrp.parse();
        } catch (Exception e) {
            OpenFeintInternal.log(TAG, e.getMessage());
            return null;
        }
    }

    public static Object getObjFromJson(byte[] json, ResourceClass resourceClass) {
        JsonFactory jsonFactory = new JsonFactory();
        OpenFeintInternal.log(TAG, new String(json));
        try {
            JsonParser jp = jsonFactory.createJsonParser(json);
            JsonResourceParser jrp = new JsonResourceParser(jp);
            return jrp.parse(resourceClass);
        } catch (Exception e) {
            OpenFeintInternal.log(TAG, e.getMessage() + "json error");
            return null;
        }
    }

    public static String getDpiName(Context ctx) {
        DisplayMetrics metrics = new DisplayMetrics();
        WindowManager winMan = (WindowManager) ctx.getSystemService("window");
        winMan.getDefaultDisplay().getMetrics(metrics);
        if (metrics.density >= 2.0f) {
            return "udpi";
        }
        if (metrics.density >= 1.5d) {
            return "hdpi";
        }
        return "mdpi";
    }
}
