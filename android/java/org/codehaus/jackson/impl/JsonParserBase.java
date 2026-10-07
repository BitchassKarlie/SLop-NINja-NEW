package org.codehaus.jackson.impl;

import java.io.IOException;
import org.codehaus.jackson.Base64Variant;
import org.codehaus.jackson.JsonLocation;
import org.codehaus.jackson.JsonParseException;
import org.codehaus.jackson.JsonParser;
import org.codehaus.jackson.JsonToken;
import org.codehaus.jackson.io.IOContext;
import org.codehaus.jackson.util.ByteArrayBuilder;
import org.codehaus.jackson.util.TextBuffer;

/* loaded from: classes.dex */
public abstract class JsonParserBase extends JsonParser {
    static final int INT_APOSTROPHE = 39;
    static final int INT_ASTERISK = 42;
    static final int INT_BACKSLASH = 92;
    static final int INT_COLON = 58;
    static final int INT_COMMA = 44;
    static final int INT_CR = 13;
    static final int INT_LBRACKET = 91;
    static final int INT_LCURLY = 123;
    static final int INT_LF = 10;
    static final int INT_QUOTE = 34;
    static final int INT_RBRACKET = 93;
    static final int INT_RCURLY = 125;
    static final int INT_SLASH = 47;
    static final int INT_SPACE = 32;
    static final int INT_TAB = 9;
    static final int INT_b = 98;
    static final int INT_f = 102;
    static final int INT_n = 110;
    static final int INT_r = 114;
    static final int INT_t = 116;
    static final int INT_u = 117;
    protected byte[] _binaryValue;
    protected boolean _closed;
    protected final IOContext _ioContext;
    protected JsonToken _nextToken;
    protected JsonReadContext _parsingContext;
    protected final TextBuffer _textBuffer;
    protected int _inputPtr = 0;
    protected int _inputEnd = 0;
    protected long _currInputProcessed = 0;
    protected int _currInputRow = 1;
    protected int _currInputRowStart = 0;
    protected long _tokenInputTotal = 0;
    protected int _tokenInputRow = 1;
    protected int _tokenInputCol = 0;
    protected boolean _tokenIncomplete = false;
    protected char[] _nameCopyBuffer = null;
    protected boolean _nameCopied = false;
    ByteArrayBuilder _byteArrayBuilder = null;

    protected abstract void _closeInput() throws IOException;

    protected abstract byte[] _decodeBase64(Base64Variant base64Variant) throws IOException;

    protected abstract void _finishString() throws IOException;

    protected abstract boolean loadMore() throws IOException;

    @Override // org.codehaus.jackson.JsonParser
    public abstract JsonToken nextToken() throws IOException;

    protected JsonParserBase(IOContext ctxt, int features) {
        this._ioContext = ctxt;
        this._features = features;
        this._textBuffer = ctxt.constructTextBuffer();
        this._parsingContext = JsonReadContext.createRootContext(this._tokenInputRow, this._tokenInputCol);
    }

    @Override // org.codehaus.jackson.JsonParser
    public JsonParser skipChildren() throws IOException {
        if (this._currToken == JsonToken.START_OBJECT || this._currToken == JsonToken.START_ARRAY) {
            int open = 1;
            while (true) {
                JsonToken t = nextToken();
                if (t == null) {
                    _handleEOF();
                } else {
                    switch (AnonymousClass1.$SwitchMap$org$codehaus$jackson$JsonToken[t.ordinal()]) {
                        case JsonWriteContext.STATUS_OK_AFTER_COMMA /* 1 */:
                        case JsonWriteContext.STATUS_OK_AFTER_COLON /* 2 */:
                            open++;
                            break;
                        case JsonWriteContext.STATUS_OK_AFTER_SPACE /* 3 */:
                        case JsonWriteContext.STATUS_EXPECT_VALUE /* 4 */:
                            open--;
                            if (open != 0) {
                                break;
                            } else {
                                break;
                            }
                    }
                }
            }
        }
        return this;
    }

    /* renamed from: org.codehaus.jackson.impl.JsonParserBase$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$org$codehaus$jackson$JsonToken = new int[JsonToken.values().length];

        static {
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.START_OBJECT.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.START_ARRAY.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.END_OBJECT.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.END_ARRAY.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.FIELD_NAME.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.VALUE_STRING.ordinal()] = 6;
            } catch (NoSuchFieldError e6) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.VALUE_NUMBER_INT.ordinal()] = 7;
            } catch (NoSuchFieldError e7) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.VALUE_NUMBER_FLOAT.ordinal()] = 8;
            } catch (NoSuchFieldError e8) {
            }
        }
    }

    @Override // org.codehaus.jackson.JsonParser
    public String getCurrentName() throws IOException {
        return this._parsingContext.getCurrentName();
    }

    @Override // org.codehaus.jackson.JsonParser, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        this._closed = true;
        try {
            _closeInput();
        } finally {
            _releaseBuffers();
        }
    }

    @Override // org.codehaus.jackson.JsonParser
    public boolean isClosed() {
        return this._closed;
    }

    @Override // org.codehaus.jackson.JsonParser
    public JsonReadContext getParsingContext() {
        return this._parsingContext;
    }

    @Override // org.codehaus.jackson.JsonParser
    public JsonLocation getTokenLocation() {
        return new JsonLocation(this._ioContext.getSourceReference(), getTokenCharacterOffset(), getTokenLineNr(), getTokenColumnNr());
    }

    @Override // org.codehaus.jackson.JsonParser
    public JsonLocation getCurrentLocation() {
        int col = (this._inputPtr - this._currInputRowStart) + 1;
        return new JsonLocation(this._ioContext.getSourceReference(), (this._currInputProcessed + this._inputPtr) - 1, this._currInputRow, col);
    }

    @Override // org.codehaus.jackson.JsonParser
    public String getText() throws IOException {
        if (this._currToken != null) {
            switch (AnonymousClass1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
                case JsonWriteContext.STATUS_EXPECT_NAME /* 5 */:
                    return this._parsingContext.getCurrentName();
                case 6:
                    if (this._tokenIncomplete) {
                        this._tokenIncomplete = false;
                        _finishString();
                        break;
                    }
                    break;
                case 7:
                case 8:
                    break;
                default:
                    return this._currToken.asString();
            }
            return this._textBuffer.contentsAsString();
        }
        return null;
    }

    @Override // org.codehaus.jackson.JsonParser
    public char[] getTextCharacters() throws IOException {
        if (this._currToken != null) {
            switch (AnonymousClass1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
                case JsonWriteContext.STATUS_EXPECT_NAME /* 5 */:
                    if (!this._nameCopied) {
                        String name = this._parsingContext.getCurrentName();
                        int nameLen = name.length();
                        if (this._nameCopyBuffer == null) {
                            this._nameCopyBuffer = this._ioContext.allocNameCopyBuffer(nameLen);
                        } else if (this._nameCopyBuffer.length < nameLen) {
                            this._nameCopyBuffer = new char[nameLen];
                        }
                        name.getChars(0, nameLen, this._nameCopyBuffer, 0);
                        this._nameCopied = true;
                    }
                    return this._nameCopyBuffer;
                case 6:
                    if (this._tokenIncomplete) {
                        this._tokenIncomplete = false;
                        _finishString();
                        break;
                    }
                    break;
                case 7:
                case 8:
                    break;
                default:
                    return this._currToken.asCharArray();
            }
            return this._textBuffer.getTextBuffer();
        }
        return null;
    }

    @Override // org.codehaus.jackson.JsonParser
    public int getTextLength() throws IOException {
        if (this._currToken == null) {
            return 0;
        }
        switch (AnonymousClass1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
            case JsonWriteContext.STATUS_EXPECT_NAME /* 5 */:
                return this._parsingContext.getCurrentName().length();
            case 6:
                if (this._tokenIncomplete) {
                    this._tokenIncomplete = false;
                    _finishString();
                    break;
                }
                break;
            case 7:
            case 8:
                break;
            default:
                return this._currToken.asCharArray().length;
        }
        return this._textBuffer.size();
    }

    @Override // org.codehaus.jackson.JsonParser
    public int getTextOffset() throws IOException {
        if (this._currToken != null) {
            switch (AnonymousClass1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
                case JsonWriteContext.STATUS_EXPECT_NAME /* 5 */:
                    return 0;
                case 6:
                    if (this._tokenIncomplete) {
                        this._tokenIncomplete = false;
                        _finishString();
                        break;
                    }
                    break;
            }
            return this._textBuffer.getTextOffset();
        }
        return 0;
    }

    @Override // org.codehaus.jackson.JsonParser
    public final byte[] getBinaryValue(Base64Variant b64variant) throws IOException {
        if (this._currToken != JsonToken.VALUE_STRING) {
            _reportError("Current token (" + this._currToken + ") not VALUE_STRING, can not access as binary");
        }
        if (this._tokenIncomplete) {
            try {
                this._binaryValue = _decodeBase64(b64variant);
                this._tokenIncomplete = false;
            } catch (IllegalArgumentException iae) {
                throw _constructError("Failed to decode VALUE_STRING as base64 (" + b64variant + "): " + iae.getMessage());
            }
        }
        return this._binaryValue;
    }

    public final long getTokenCharacterOffset() {
        return this._tokenInputTotal;
    }

    public final int getTokenLineNr() {
        return this._tokenInputRow;
    }

    public final int getTokenColumnNr() {
        return this._tokenInputCol + 1;
    }

    protected final void loadMoreGuaranteed() throws IOException {
        if (!loadMore()) {
            _reportInvalidEOF();
        }
    }

    protected void _releaseBuffers() throws IOException {
        this._textBuffer.releaseBuffers();
        char[] buf = this._nameCopyBuffer;
        if (buf != null) {
            this._nameCopyBuffer = null;
            this._ioContext.releaseNameCopyBuffer(buf);
        }
    }

    protected void _handleEOF() throws JsonParseException {
        if (!this._parsingContext.inRoot()) {
            _reportInvalidEOF(": expected close marker for " + this._parsingContext.getTypeDesc() + " (from " + this._parsingContext.getStartLocation(this._ioContext.getSourceReference()) + ")");
        }
    }

    protected void _reportUnexpectedChar(int ch, String comment) throws JsonParseException {
        String msg = "Unexpected character (" + _getCharDesc(ch) + ")";
        if (comment != null) {
            msg = msg + ": " + comment;
        }
        _reportError(msg);
    }

    protected void _reportInvalidEOF() throws JsonParseException {
        _reportInvalidEOF(" in " + this._currToken);
    }

    protected void _reportInvalidEOF(String msg) throws JsonParseException {
        _reportError("Unexpected end-of-input" + msg);
    }

    protected void _throwInvalidSpace(int i) throws JsonParseException {
        char c = (char) i;
        String msg = "Illegal character (" + _getCharDesc(c) + "): only regular white space (\\r, \\n, \\t) is allowed between tokens";
        _reportError(msg);
    }

    protected void _throwUnquotedSpace(int i, String ctxtDesc) throws JsonParseException {
        if (!isEnabled(JsonParser.Feature.ALLOW_UNQUOTED_CONTROL_CHARS) || i >= INT_SPACE) {
            char c = (char) i;
            String msg = "Illegal unquoted character (" + _getCharDesc(c) + "): has to be escaped using backslash to be included in " + ctxtDesc;
            _reportError(msg);
        }
    }

    protected void _reportMismatchedEndMarker(int actCh, char expCh) throws JsonParseException {
        String startDesc = "" + this._parsingContext.getStartLocation(this._ioContext.getSourceReference());
        _reportError("Unexpected close marker '" + ((char) actCh) + "': expected '" + expCh + "' (for " + this._parsingContext.getTypeDesc() + " starting at " + startDesc + ")");
    }

    protected static final String _getCharDesc(int ch) {
        char c = (char) ch;
        if (Character.isISOControl(c)) {
            return "(CTRL-CHAR, code " + ch + ")";
        }
        if (ch > 255) {
            return "'" + c + "' (code " + ch + " / 0x" + Integer.toHexString(ch) + ")";
        }
        return "'" + c + "' (code " + ch + ")";
    }

    protected final void _reportError(String msg) throws JsonParseException {
        throw _constructError(msg);
    }

    protected final void _wrapError(String msg, Throwable t) throws JsonParseException {
        throw _constructError(msg, t);
    }

    protected final void _throwInternal() {
        throw new RuntimeException("Internal error: this code path should never get executed");
    }

    protected final JsonParseException _constructError(String msg, Throwable t) {
        return new JsonParseException(msg, getCurrentLocation(), t);
    }

    public ByteArrayBuilder _getByteArrayBuilder() {
        if (this._byteArrayBuilder == null) {
            this._byteArrayBuilder = new ByteArrayBuilder();
        } else {
            this._byteArrayBuilder.reset();
        }
        return this._byteArrayBuilder;
    }
}
