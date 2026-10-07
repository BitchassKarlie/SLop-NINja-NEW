package org.codehaus.jackson.impl;

import java.io.IOException;
import java.io.InputStream;
import org.codehaus.jackson.JsonParser;
import org.codehaus.jackson.io.IOContext;

/* loaded from: classes.dex */
public abstract class StreamBasedParserBase extends JsonNumericParserBase {
    protected boolean _bufferRecyclable;
    protected byte[] _inputBuffer;
    protected InputStream _inputStream;

    protected StreamBasedParserBase(IOContext ctxt, int features, InputStream in, byte[] inputBuffer, int start, int end, boolean bufferRecyclable) {
        super(ctxt, features);
        this._inputStream = in;
        this._inputBuffer = inputBuffer;
        this._inputPtr = start;
        this._inputEnd = end;
        this._bufferRecyclable = bufferRecyclable;
    }

    @Override // org.codehaus.jackson.impl.JsonParserBase
    protected final boolean loadMore() throws IOException {
        this._currInputProcessed += this._inputEnd;
        this._currInputRowStart -= this._inputEnd;
        if (this._inputStream != null) {
            int count = this._inputStream.read(this._inputBuffer, 0, this._inputBuffer.length);
            if (count > 0) {
                this._inputPtr = 0;
                this._inputEnd = count;
                return true;
            }
            _closeInput();
            if (count == 0) {
                throw new IOException("Reader returned 0 characters when trying to read " + this._inputEnd);
            }
        }
        return false;
    }

    @Override // org.codehaus.jackson.impl.JsonParserBase
    protected void _closeInput() throws IOException {
        if (this._inputStream != null) {
            if (this._ioContext.isResourceManaged() || isEnabled(JsonParser.Feature.AUTO_CLOSE_SOURCE)) {
                this._inputStream.close();
            }
            this._inputStream = null;
        }
    }

    @Override // org.codehaus.jackson.impl.JsonParserBase
    protected void _releaseBuffers() throws IOException {
        byte[] buf;
        super._releaseBuffers();
        if (this._bufferRecyclable && (buf = this._inputBuffer) != null) {
            this._inputBuffer = null;
            this._ioContext.releaseReadIOBuffer(buf);
        }
    }
}
