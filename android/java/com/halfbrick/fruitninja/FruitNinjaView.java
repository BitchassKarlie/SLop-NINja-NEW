package com.halfbrick.fruitninja;

import android.content.Context;
import android.content.res.Resources;
import android.opengl.GLSurfaceView;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MotionEvent;
import com.halfbrick.mortar.SplashScreen;
import com.halfbrick.mortar.SplashScreenTimed;
import java.io.IOException;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

/* loaded from: classes.dex */
class FruitNinjaView extends GLSurfaceView {
    private static final boolean DEBUG = false;
    private static final String TAG = "FruitNinjaView";
    private TouchInputHandler mTouchInputHandler;
    private Renderer m_renderer;

    public FruitNinjaView(Context context, FruitNinjaActivity act) {
        super(context);
        this.m_renderer = null;
        this.mTouchInputHandler = null;
        init(false, 0, 0, context, act);
    }

    public FruitNinjaView(Context context, FruitNinjaActivity act, boolean translucent, int depth, int stencil) {
        super(context);
        this.m_renderer = null;
        this.mTouchInputHandler = null;
        init(translucent, depth, stencil, context, act);
    }

    public void RegisterKeyEvent(KeyEvent event) {
        this.m_renderer.RegisterKeyEvent(event);
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent event) throws InterruptedException {
        this.mTouchInputHandler.onTouchEvent(event);
        return true;
    }

    protected static TouchInputHandler CreateTouchHandler() {
        try {
            return new MultiTouchInputHandler();
        } catch (Throwable catchAll) {
            Log.e("halfbrick.Mortar", "Failed to create Multi-Touch handler, reason: " + catchAll.getMessage());
            return new TouchInputHandler();
        }
    }

    private void init(boolean translucent, int depth, int stencil, Context context, FruitNinjaActivity act) {
        this.mTouchInputHandler = CreateTouchHandler();
        if (translucent) {
            getHolder().setFormat(-3);
        }
        this.m_renderer = new Renderer(context, act);
        setRenderer(this.m_renderer);
    }

    private static class Renderer implements GLSurfaceView.Renderer {
        private FruitNinjaActivity mActivity;
        private Context mContext;
        private boolean mFirstFrame = true;
        private GameManager mGame;
        private SplashScreen mSplash;
        private static int m_width = 0;
        private static int m_height = 0;

        public Renderer(Context context, FruitNinjaActivity activity) {
            this.mSplash = null;
            this.mActivity = null;
            this.mGame = null;
            this.mContext = context;
            this.mActivity = activity;
            this.mSplash = new SplashScreenTimed(context, R.raw.splash, 2.0f);
            this.mGame = new GameManager(context, activity);
        }

        public void RegisterKeyEvent(KeyEvent event) {
            this.mGame.RegisterKeyEvent(event);
        }

        @Override // android.opengl.GLSurfaceView.Renderer
        public void onDrawFrame(GL10 gl) throws Resources.NotFoundException, IOException {
            if (this.mSplash != null) {
                this.mSplash.Render(gl);
                if (!this.mFirstFrame) {
                    this.mGame.Init(gl);
                }
                if (this.mSplash.HasFinished()) {
                    this.mSplash.ReleaseResources(gl);
                    this.mSplash = null;
                }
            } else {
                this.mGame.Render(gl);
            }
            this.mFirstFrame = false;
            gl.glFlush();
            gl.glFinish();
        }

        @Override // android.opengl.GLSurfaceView.Renderer
        public void onSurfaceChanged(GL10 gl, int width, int height) {
            m_width = width;
            m_height = height;
            if (this.mSplash != null && !this.mSplash.HasFinished()) {
                gl.glViewport(0, 0, m_width, m_height);
            }
            this.mGame.onSurfaceChanged(gl, width, height);
        }

        @Override // android.opengl.GLSurfaceView.Renderer
        public void onSurfaceCreated(GL10 gl, EGLConfig config) {
            this.mGame.onSurfaceCreated(gl, config);
        }
    }
}
