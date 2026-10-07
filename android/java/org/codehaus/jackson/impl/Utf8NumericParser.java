package org.codehaus.jackson.impl;

import java.io.IOException;
import java.io.InputStream;
import org.codehaus.jackson.JsonToken;
import org.codehaus.jackson.io.IOContext;

/* loaded from: classes.dex */
public abstract class Utf8NumericParser extends StreamBasedParserBase {
    public Utf8NumericParser(IOContext pc, int features, InputStream in, byte[] inputBuffer, int start, int end, boolean bufferRecyclable) {
        super(pc, features, in, inputBuffer, start, end, bufferRecyclable);
    }

    @Override // org.codehaus.jackson.impl.JsonNumericParserBase
    protected final JsonToken parseNumberText(int c) throws IOException {
        int outPtr;
        int outPtr2;
        int outPtr3;
        char[] outBuf = this._textBuffer.emptyAndGetCurrentSegment();
        int outPtr4 = 0;
        boolean negative = c == 45;
        if (negative) {
            int outPtr5 = 0 + 1;
            outBuf[0] = '-';
            if (this._inputPtr >= this._inputEnd) {
                loadMoreGuaranteed();
            }
            byte[] bArr = this._inputBuffer;
            int i = this._inputPtr;
            this._inputPtr = i + 1;
            c = bArr[i] & 255;
            outPtr4 = outPtr5;
        }
        int intLen = 0;
        boolean eof = false;
        while (true) {
            if (c < 48) {
                outPtr = outPtr4;
                break;
            }
            if (c <= 57) {
                intLen++;
                if (intLen == 2 && outBuf[outPtr4 - 1] == '0') {
                    reportInvalidNumber("Leading zeroes not allowed");
                }
                if (outPtr4 >= outBuf.length) {
                    outBuf = this._textBuffer.finishCurrentSegment();
                    outPtr4 = 0;
                }
                outPtr = outPtr4 + 1;
                outBuf[outPtr4] = (char) c;
                if (this._inputPtr >= this._inputEnd && !loadMore()) {
                    c = 0;
                    eof = true;
                    break;
                }
                byte[] bArr2 = this._inputBuffer;
                int i2 = this._inputPtr;
                this._inputPtr = i2 + 1;
                c = bArr2[i2] & 255;
                outPtr4 = outPtr;
            } else {
                outPtr = outPtr4;
                break;
            }
        }
        if (intLen == 0) {
            reportInvalidNumber("Missing integer part (next char " + _getCharDesc(c) + ")");
        }
        int fractLen = 0;
        if (c == 46) {
            outPtr2 = outPtr + 1;
            outBuf[outPtr] = (char) c;
            while (true) {
                if (this._inputPtr >= this._inputEnd && !loadMore()) {
                    eof = true;
                    break;
                }
                byte[] bArr3 = this._inputBuffer;
                int i3 = this._inputPtr;
                this._inputPtr = i3 + 1;
                c = bArr3[i3] & 255;
                if (c < 48 || c > 57) {
                    break;
                }
                fractLen++;
                if (outPtr2 >= outBuf.length) {
                    outBuf = this._textBuffer.finishCurrentSegment();
                    outPtr2 = 0;
                }
                outBuf[outPtr2] = (char) c;
                outPtr2++;
            }
            if (fractLen == 0) {
                reportUnexpectedNumberChar(c, "Decimal point not followed by a digit");
            }
        } else {
            outPtr2 = outPtr;
        }
        int expLen = 0;
        if (c == 101 || c == 69) {
            if (outPtr2 >= outBuf.length) {
                outBuf = this._textBuffer.finishCurrentSegment();
                outPtr2 = 0;
            }
            int outPtr6 = outPtr2 + 1;
            outBuf[outPtr2] = (char) c;
            if (this._inputPtr >= this._inputEnd) {
                loadMoreGuaranteed();
            }
            byte[] bArr4 = this._inputBuffer;
            int i4 = this._inputPtr;
            this._inputPtr = i4 + 1;
            int c2 = bArr4[i4] & 255;
            if (c2 == 45 || c2 == 43) {
                if (outPtr6 >= outBuf.length) {
                    outBuf = this._textBuffer.finishCurrentSegment();
                    outPtr3 = 0;
                } else {
                    outPtr3 = outPtr6;
                }
                outPtr6 = outPtr3 + 1;
                outBuf[outPtr3] = (char) c2;
                if (this._inputPtr >= this._inputEnd) {
                    loadMoreGuaranteed();
                }
                byte[] bArr5 = this._inputBuffer;
                int i5 = this._inputPtr;
                this._inputPtr = i5 + 1;
                c2 = bArr5[i5] & 255;
            }
            while (true) {
                outPtr2 = outPtr6;
                if (c2 <= 57 && c2 >= 48) {
                    expLen++;
                    if (outPtr2 >= outBuf.length) {
                        outBuf = this._textBuffer.finishCurrentSegment();
                        outPtr2 = 0;
                    }
                    outPtr6 = outPtr2 + 1;
                    outBuf[outPtr2] = (char) c2;
                    if (this._inputPtr >= this._inputEnd && !loadMore()) {
                        eof = true;
                        outPtr2 = outPtr6;
                        break;
                    }
                    byte[] bArr6 = this._inputBuffer;
                    int i6 = this._inputPtr;
                    this._inputPtr = i6 + 1;
                    c2 = bArr6[i6] & 255;
                } else {
                    break;
                }
            }
            if (expLen == 0) {
                reportUnexpectedNumberChar(c2, "Exponent indicator not followed by a digit");
            }
        }
        if (!eof) {
            this._inputPtr--;
        }
        this._textBuffer.setCurrentLength(outPtr2);
        return reset(negative, intLen, fractLen, expLen);
    }
}
