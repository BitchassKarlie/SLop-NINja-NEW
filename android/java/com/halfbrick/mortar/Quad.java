package com.halfbrick.mortar;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;
import javax.microedition.khronos.opengles.GL10;

/* compiled from: SplashScreen.java */
/* loaded from: classes.dex */
class Quad {
    private FloatBuffer mColorBuffer;
    private ByteBuffer mIndexBuffer;
    private FloatBuffer mTexBuffer;
    private FloatBuffer mVertexBuffer;

    private static FloatBuffer allocateFloatBuffer(int capacity) {
        ByteBuffer vbb = ByteBuffer.allocateDirect(capacity * 4);
        vbb.order(ByteOrder.nativeOrder());
        return vbb.asFloatBuffer();
    }

    private static FloatBuffer allocateFloatBuffer(float[] values) {
        FloatBuffer buff = allocateFloatBuffer(values.length);
        buff.put(values);
        buff.position(0);
        return buff;
    }

    public Quad(float u0, float u1, float v0, float v1) {
        float[] vertices = {-1.0f, -1.0f, 1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 1.0f, 1.0f, -1.0f, 1.0f, 1.0f};
        float[] uvCoords = {u0, v1, u1, v1, u1, v0, u0, v0};
        float[] colors = {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f};
        byte[] indices = {0, 3, 2, 0, 2, 1};
        this.mVertexBuffer = allocateFloatBuffer(vertices);
        this.mColorBuffer = allocateFloatBuffer(colors);
        this.mTexBuffer = allocateFloatBuffer(uvCoords);
        this.mIndexBuffer = ByteBuffer.allocateDirect(indices.length);
        this.mIndexBuffer.put(indices);
        this.mIndexBuffer.position(0);
    }

    public void draw(GL10 gl) {
        gl.glEnableClientState(32884);
        gl.glVertexPointer(3, 5126, 0, this.mVertexBuffer);
        gl.glEnableClientState(32886);
        gl.glColorPointer(4, 5126, 0, this.mColorBuffer);
        gl.glEnableClientState(32888);
        gl.glTexCoordPointer(2, 5126, 0, this.mTexBuffer);
        gl.glDrawElements(4, 6, 5121, this.mIndexBuffer);
    }
}
