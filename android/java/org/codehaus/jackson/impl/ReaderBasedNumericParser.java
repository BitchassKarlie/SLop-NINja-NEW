package org.codehaus.jackson.impl;

import java.io.IOException;
import java.io.Reader;
import org.codehaus.jackson.JsonToken;
import org.codehaus.jackson.io.IOContext;

/* loaded from: classes.dex */
public abstract class ReaderBasedNumericParser extends ReaderBasedParserBase {
    public ReaderBasedNumericParser(IOContext pc, int features, Reader r) {
        super(pc, features, r);
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x003a  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0089  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x008f  */
    @Override // org.codehaus.jackson.impl.JsonNumericParserBase
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected final JsonToken parseNumberText(int ch) throws IOException {
        boolean negative = ch == 45;
        int ptr = this._inputPtr;
        int startPtr = ptr - 1;
        int inputLen = this._inputEnd;
        if (negative) {
            if (ptr < this._inputEnd) {
                int ptr2 = ptr + 1;
                char c = this._inputBuffer[ptr];
                if (c > '9' || c < '0') {
                    reportUnexpectedNumberChar(c, "expected digit (0-9) to follow minus sign, for valid numeric value");
                }
                ptr = ptr2;
                int intLen = 1;
                while (ptr < this._inputEnd) {
                }
            }
        } else {
            int intLen2 = 1;
            while (ptr < this._inputEnd) {
                int ptr3 = ptr + 1;
                char c2 = this._inputBuffer[ptr];
                if (c2 >= '0' && c2 <= '9') {
                    intLen2++;
                    if (intLen2 == 2 && this._inputBuffer[ptr3 - 2] == '0') {
                        reportInvalidNumber("Leading zeroes not allowed");
                        ptr = ptr3;
                    } else {
                        ptr = ptr3;
                    }
                } else {
                    int fractLen = 0;
                    if (c2 == '.') {
                        while (ptr3 < inputLen) {
                            int ptr4 = ptr3 + 1;
                            c2 = this._inputBuffer[ptr3];
                            if (c2 >= '0' && c2 <= '9') {
                                fractLen++;
                                ptr3 = ptr4;
                            } else {
                                if (fractLen == 0) {
                                    reportUnexpectedNumberChar(c2, "Decimal point not followed by a digit");
                                }
                                ptr3 = ptr4;
                                int expLen = 0;
                                if (c2 != 'e' || c2 == 'E') {
                                    if (ptr3 >= inputLen) {
                                        int ptr5 = ptr3 + 1;
                                        char c3 = this._inputBuffer[ptr3];
                                        if (c3 != '-' && c3 != '+') {
                                            ptr3 = ptr5;
                                        } else if (ptr5 < inputLen) {
                                            ptr3 = ptr5 + 1;
                                            c3 = this._inputBuffer[ptr5];
                                        }
                                        while (c3 <= '9' && c3 >= '0') {
                                            expLen++;
                                            if (ptr3 < inputLen) {
                                                c3 = this._inputBuffer[ptr3];
                                                ptr3++;
                                            }
                                        }
                                        if (expLen == 0) {
                                            reportUnexpectedNumberChar(c3, "Exponent indicator not followed by a digit");
                                        }
                                    }
                                }
                                int ptr6 = ptr3 - 1;
                                this._inputPtr = ptr6;
                                int len = ptr6 - startPtr;
                                this._textBuffer.resetWithShared(this._inputBuffer, startPtr, len);
                                return reset(negative, intLen2, fractLen, expLen);
                            }
                        }
                    } else {
                        int expLen2 = 0;
                        if (c2 != 'e') {
                        }
                        if (ptr3 >= inputLen) {
                        }
                    }
                }
            }
        }
        this._inputPtr = negative ? startPtr + 1 : startPtr;
        return parseNumberText2(negative);
    }

    private final JsonToken parseNumberText2(boolean negative) throws IOException {
        char c;
        char c2;
        int outPtr;
        char[] outBuf = this._textBuffer.emptyAndGetCurrentSegment();
        int outPtr2 = 0;
        if (negative) {
            int outPtr3 = 0 + 1;
            outBuf[0] = '-';
            outPtr2 = outPtr3;
        }
        int intLen = 0;
        boolean eof = false;
        while (true) {
            if (this._inputPtr >= this._inputEnd && !loadMore()) {
                c = 0;
                eof = true;
                break;
            }
            char[] cArr = this._inputBuffer;
            int i = this._inputPtr;
            this._inputPtr = i + 1;
            c = cArr[i];
            if (c < '0' || c > '9') {
                break;
            }
            intLen++;
            if (intLen == 2 && outBuf[outPtr2 - 1] == '0') {
                reportInvalidNumber("Leading zeroes not allowed");
            }
            if (outPtr2 >= outBuf.length) {
                outBuf = this._textBuffer.finishCurrentSegment();
                outPtr2 = 0;
            }
            outBuf[outPtr2] = c;
            outPtr2++;
        }
        if (intLen == 0) {
            reportInvalidNumber("Missing integer part (next char " + _getCharDesc(c) + ")");
        }
        int fractLen = 0;
        if (c == '.') {
            int outPtr4 = outPtr2 + 1;
            outBuf[outPtr2] = c;
            while (true) {
                outPtr2 = outPtr4;
                if (this._inputPtr >= this._inputEnd && !loadMore()) {
                    eof = true;
                    break;
                }
                char[] cArr2 = this._inputBuffer;
                int i2 = this._inputPtr;
                this._inputPtr = i2 + 1;
                c = cArr2[i2];
                if (c < '0' || c > '9') {
                    break;
                }
                fractLen++;
                if (outPtr2 >= outBuf.length) {
                    outBuf = this._textBuffer.finishCurrentSegment();
                    outPtr2 = 0;
                }
                outPtr4 = outPtr2 + 1;
                outBuf[outPtr2] = c;
            }
            if (fractLen == 0) {
                reportUnexpectedNumberChar(c, "Decimal point not followed by a digit");
            }
        }
        int expLen = 0;
        if (c == 'e' || c == 'E') {
            if (outPtr2 >= outBuf.length) {
                outBuf = this._textBuffer.finishCurrentSegment();
                outPtr2 = 0;
            }
            int outPtr5 = outPtr2 + 1;
            outBuf[outPtr2] = c;
            if (this._inputPtr < this._inputEnd) {
                char[] cArr3 = this._inputBuffer;
                int i3 = this._inputPtr;
                this._inputPtr = i3 + 1;
                c2 = cArr3[i3];
            } else {
                c2 = getNextChar("expected a digit for number exponent");
            }
            if (c2 == '-' || c2 == '+') {
                if (outPtr5 >= outBuf.length) {
                    outBuf = this._textBuffer.finishCurrentSegment();
                    outPtr = 0;
                } else {
                    outPtr = outPtr5;
                }
                outPtr5 = outPtr + 1;
                outBuf[outPtr] = c2;
                if (this._inputPtr < this._inputEnd) {
                    char[] cArr4 = this._inputBuffer;
                    int i4 = this._inputPtr;
                    this._inputPtr = i4 + 1;
                    c2 = cArr4[i4];
                } else {
                    c2 = getNextChar("expected a digit for number exponent");
                }
            }
            while (true) {
                outPtr2 = outPtr5;
                if (c2 <= '9' && c2 >= '0') {
                    expLen++;
                    if (outPtr2 >= outBuf.length) {
                        outBuf = this._textBuffer.finishCurrentSegment();
                        outPtr2 = 0;
                    }
                    outPtr5 = outPtr2 + 1;
                    outBuf[outPtr2] = c2;
                    if (this._inputPtr >= this._inputEnd && !loadMore()) {
                        eof = true;
                        outPtr2 = outPtr5;
                        break;
                    }
                    char[] cArr5 = this._inputBuffer;
                    int i5 = this._inputPtr;
                    this._inputPtr = i5 + 1;
                    c2 = cArr5[i5];
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
