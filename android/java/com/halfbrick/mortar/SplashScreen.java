package com.halfbrick.mortar;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.opengl.GLUtils;
import android.util.Log;
import java.io.IOException;
import java.io.InputStream;
import javax.microedition.khronos.opengles.GL10;

/* loaded from: classes.dex */
public class SplashScreen {
    private Context mContext;
    private int mResourceID;
    private long previousTime = 0;
    private Quad mQuad = new Quad(0.0f, 1.0f, 0.125f, 0.875f);
    private int[] m_textures = new int[1];

    public SplashScreen(Context context, int splashResourceID) {
        this.mContext = context;
        this.mResourceID = splashResourceID;
        this.m_textures[0] = 0;
    }

    public void CreateResources(GL10 gl) throws Resources.NotFoundException, IOException {
        if (this.m_textures[0] == 0) {
            gl.glGenTextures(this.m_textures.length, this.m_textures, 0);
        }
        gl.glBindTexture(3553, this.m_textures[0]);
        InputStream is = this.mContext.getResources().openRawResource(this.mResourceID);
        Bitmap splashBitmap = null;
        try {
            try {
                splashBitmap = BitmapFactory.decodeStream(is);
                GLUtils.texImage2D(3553, 0, splashBitmap, 0);
                if (splashBitmap != null) {
                    splashBitmap.recycle();
                }
                try {
                    is.close();
                } catch (IOException e) {
                }
            } catch (Exception e2) {
                Log.e("halfbrick.Mortar", "Failed to load splash texture: " + e2.getMessage());
                if (splashBitmap != null) {
                    splashBitmap.recycle();
                }
                try {
                    is.close();
                } catch (IOException e3) {
                }
            }
            gl.glTexParameterf(3553, 10241, 9729.0f);
            gl.glTexParameterf(3553, 10240, 9729.0f);
            gl.glEnable(3042);
            gl.glTexEnvf(8960, 8704, 8448.0f);
        } catch (Throwable th) {
            if (splashBitmap != null) {
                splashBitmap.recycle();
            }
            try {
                is.close();
            } catch (IOException e4) {
            }
            throw th;
        }
    }

    public void ReleaseResources(GL10 gl) {
        gl.glDeleteTextures(this.m_textures.length, this.m_textures, 0);
        this.m_textures[0] = 0;
    }

    public void Render(GL10 gl) throws Resources.NotFoundException, IOException {
        if (this.previousTime == 0) {
            this.previousTime = System.nanoTime();
        }
        long newTime = System.nanoTime();
        Update((newTime - this.previousTime) * 1.0E-9f);
        this.previousTime = newTime;
        if (this.m_textures[0] == 0) {
            CreateResources(gl);
        }
        gl.glClear(16640);
        gl.glBindTexture(3553, this.m_textures[0]);
        gl.glEnable(3553);
        gl.glFrontFace(2304);
        gl.glMatrixMode(5889);
        gl.glLoadIdentity();
        gl.glMatrixMode(5888);
        gl.glLoadIdentity();
        this.mQuad.draw(gl);
    }

    public void Update(float deltaT) {
    }

    public boolean HasFinished() {
        return true;
    }
}
