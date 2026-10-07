package com.halfbrick.fruitninja;

/* loaded from: classes.dex */
public class AudioDecoderStream {
    private long mNativePointer;

    public interface InStream {
        long BytesReady();

        boolean CanSeek();

        long GetPos();

        long ReadBytes(byte[] bArr, int i, int i2);

        boolean Seek(long j);
    }

    private native int native_channels(long j);

    protected static native long native_createDecoderStream(byte[] bArr);

    private native String native_getComment(long j, long j2);

    private native long native_getCommentCount(long j);

    private native long native_lengthPCM(long j);

    private native long native_lengthTime(long j);

    private native long native_read(long j, byte[] bArr, int i, int i2);

    private native void native_release(long j);

    private native int native_sampleRate(long j);

    private native boolean native_seekPCM(long j, long j2);

    private native boolean native_seekPCMPage(long j, long j2);

    private native boolean native_seekTime(long j, long j2);

    private native boolean native_seekTimePage(long j, long j2);

    private native long native_tellPCM(long j);

    private native long native_tellTime(long j);

    static {
        NativeGameLib.TryLoadGameLibrary();
    }

    private AudioDecoderStream(long nativePointer) {
        this.mNativePointer = nativePointer;
    }

    protected void finalize() {
        release();
    }

    public void release() {
        native_release(this.mNativePointer);
        this.mNativePointer = 0L;
    }

    public long lengthPCM() {
        return native_lengthPCM(this.mNativePointer);
    }

    public long lengthTime() {
        return native_lengthTime(this.mNativePointer);
    }

    public boolean seekPCM(long pos) {
        return native_seekPCM(this.mNativePointer, pos);
    }

    public boolean seekPCMPage(long pos) {
        return native_seekPCMPage(this.mNativePointer, pos);
    }

    public boolean seekTime(long time_ms) {
        return native_seekTime(this.mNativePointer, time_ms);
    }

    public boolean seekTimePage(long time_ms) {
        return native_seekTimePage(this.mNativePointer, time_ms);
    }

    public long tellPCM() {
        return native_tellPCM(this.mNativePointer);
    }

    public long tellTime() {
        return native_tellTime(this.mNativePointer);
    }

    public int sampleRate() {
        return native_sampleRate(this.mNativePointer);
    }

    public int channels() {
        return native_channels(this.mNativePointer);
    }

    public long getCommentCount() {
        return native_getCommentCount(this.mNativePointer);
    }

    public String getComment(long idx) {
        return native_getComment(this.mNativePointer, idx);
    }

    public long read(byte[] buffer, int offset, int count) {
        return native_read(this.mNativePointer, buffer, offset, count);
    }

    public static AudioDecoderStream createDecoderStream(byte[] encodedData) {
        long nativePtr = native_createDecoderStream(encodedData);
        if (nativePtr != 0) {
            return new AudioDecoderStream(nativePtr);
        }
        return null;
    }
}
