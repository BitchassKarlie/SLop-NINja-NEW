package com.halfbrick.fruitninja;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.util.Log;
import android.view.KeyEvent;
import java.io.File;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

/* loaded from: classes.dex */
public class GameManager {
    private FruitNinjaActivity mActivity;
    private Context mContext;
    private List<KeyEvent> mKeyEvents = new ArrayList();
    private volatile boolean initialized = false;
    private int mWidth = 40;
    private int mHeight = 40;

    public GameManager(Context context, FruitNinjaActivity activity) {
        this.mActivity = null;
        this.mContext = null;
        this.mContext = context;
        this.mActivity = activity;
    }

    public void RegisterKeyEvent(KeyEvent event) {
        synchronized (this.mKeyEvents) {
            this.mKeyEvents.add(event);
        }
    }

    private void initFileSystem(Context context) {
        String saveFileDir;
        ApplicationInfo appInfo = context.getApplicationInfo();
        File filesDir = context.getFilesDir();
        if (filesDir != null && (filesDir.exists() || filesDir.mkdirs())) {
            saveFileDir = filesDir.getAbsolutePath() + "/";
        } else {
            saveFileDir = appInfo.dataDir + "/files/";
        }
        Log.e("halfbrick.Mortar.info", "Save file dir: " + saveFileDir);
        NativeGameLib.InitFileManager(appInfo.sourceDir, saveFileDir, false);
        SoundManager.initSounds(context);
    }

    public void Init(GL10 gl) {
        if (!this.initialized) {
            gl.glDisableClientState(32888);
            gl.glDisableClientState(32886);
            gl.glDisableClientState(32884);
            gl.glDisableClientState(32885);
            gl.glFrontFace(2305);
            gl.glDisable(3042);
            gl.glDisable(2884);
            initFileSystem(this.mContext);
            Log.e("halfbrick.Mortar", "Current Language: " + Locale.getDefault().getLanguage());
            NativeGameLib.init(this.mWidth, this.mHeight, Locale.getDefault().getLanguage());
            this.mActivity.doLicenseCheck();
            this.mKeyEvents.clear();
            this.initialized = true;
        }
    }

    public void Render(GL10 gl) {
        if (!this.initialized) {
            Init(gl);
        }
        gl.glFrontFace(2305);
        gl.glEnable(2884);
        gl.glCullFace(1029);
        gl.glEnable(2929);
        synchronized (this.mKeyEvents) {
            for (KeyEvent event : this.mKeyEvents) {
                NativeGameLib.keyEvent(event.getKeyCode(), event.getAction() == 0, (event.getFlags() & 32) != 0);
            }
            this.mKeyEvents.clear();
        }
        if (!NativeGameLib.step()) {
            this.mActivity.shutdownApp();
        }
        if (NativeGameLib.gameRequestedQuit()) {
            this.mActivity.runOnUiThread(new Runnable() { // from class: com.halfbrick.fruitninja.GameManager.1
                @Override // java.lang.Runnable
                public void run() {
                    GameManager.this.mActivity.showDialog(1);
                }
            });
        }
    }

    public void onSurfaceChanged(GL10 gl, int width, int height) {
        this.mWidth = width;
        this.mHeight = height;
        if (this.initialized) {
            NativeGameLib.init(width, height, Locale.getDefault().getLanguage());
        }
    }

    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        if (this.initialized) {
            NativeGameLib.onResume();
        }
    }
}
