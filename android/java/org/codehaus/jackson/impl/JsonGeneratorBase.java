package org.codehaus.jackson.impl;

import java.io.IOException;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicLong;
import org.codehaus.jackson.JsonGenerationException;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.JsonNode;
import org.codehaus.jackson.JsonParser;
import org.codehaus.jackson.JsonToken;
import org.codehaus.jackson.ObjectCodec;

/* loaded from: classes.dex */
public abstract class JsonGeneratorBase extends JsonGenerator {
    protected boolean _closed;
    protected int _features;
    protected ObjectCodec _objectCodec;
    protected JsonWriteContext _writeContext = JsonWriteContext.createRootContext();
    protected boolean _cfgNumbersAsStrings = isEnabled(JsonGenerator.Feature.WRITE_NUMBERS_AS_STRINGS);

    protected abstract void _releaseBuffers();

    protected abstract void _verifyValueWrite(String str) throws IOException;

    protected abstract void _writeEndArray() throws IOException;

    protected abstract void _writeEndObject() throws IOException;

    protected abstract void _writeFieldName(String str, boolean z) throws IOException;

    protected abstract void _writeStartArray() throws IOException;

    protected abstract void _writeStartObject() throws IOException;

    @Override // org.codehaus.jackson.JsonGenerator
    public abstract void flush() throws IOException;

    @Override // org.codehaus.jackson.JsonGenerator
    public abstract void writeBoolean(boolean z) throws IOException;

    @Override // org.codehaus.jackson.JsonGenerator
    public abstract void writeNull() throws IOException;

    @Override // org.codehaus.jackson.JsonGenerator
    public abstract void writeNumber(double d) throws IOException;

    @Override // org.codehaus.jackson.JsonGenerator
    public abstract void writeNumber(float f) throws IOException;

    @Override // org.codehaus.jackson.JsonGenerator
    public abstract void writeNumber(int i) throws IOException;

    @Override // org.codehaus.jackson.JsonGenerator
    public abstract void writeNumber(long j) throws IOException;

    @Override // org.codehaus.jackson.JsonGenerator
    public abstract void writeNumber(BigDecimal bigDecimal) throws IOException;

    protected JsonGeneratorBase(int features, ObjectCodec codec) {
        this._features = features;
        this._objectCodec = codec;
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public JsonGenerator enable(JsonGenerator.Feature f) {
        this._features |= f.getMask();
        if (f == JsonGenerator.Feature.WRITE_NUMBERS_AS_STRINGS) {
            this._cfgNumbersAsStrings = true;
        }
        return this;
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public JsonGenerator disable(JsonGenerator.Feature f) {
        this._features &= f.getMask() ^ (-1);
        if (f == JsonGenerator.Feature.WRITE_NUMBERS_AS_STRINGS) {
            this._cfgNumbersAsStrings = false;
        }
        return this;
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public final boolean isEnabled(JsonGenerator.Feature f) {
        return (this._features & f.getMask()) != 0;
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public final JsonGenerator useDefaultPrettyPrinter() {
        return setPrettyPrinter(new DefaultPrettyPrinter());
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public final JsonGenerator setCodec(ObjectCodec oc) {
        this._objectCodec = oc;
        return this;
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public final ObjectCodec getCodec() {
        return this._objectCodec;
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public final JsonWriteContext getOutputContext() {
        return this._writeContext;
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public final void writeStartArray() throws IOException {
        _verifyValueWrite("start an array");
        this._writeContext = this._writeContext.createChildArrayContext();
        if (this._cfgPrettyPrinter != null) {
            this._cfgPrettyPrinter.writeStartArray(this);
        } else {
            _writeStartArray();
        }
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public final void writeEndArray() throws IOException {
        if (!this._writeContext.inArray()) {
            _reportError("Current context not an ARRAY but " + this._writeContext.getTypeDesc());
        }
        if (this._cfgPrettyPrinter != null) {
            this._cfgPrettyPrinter.writeEndArray(this, this._writeContext.getEntryCount());
        } else {
            _writeEndArray();
        }
        this._writeContext = this._writeContext.getParent();
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public final void writeStartObject() throws IOException {
        _verifyValueWrite("start an object");
        this._writeContext = this._writeContext.createChildObjectContext();
        if (this._cfgPrettyPrinter != null) {
            this._cfgPrettyPrinter.writeStartObject(this);
        } else {
            _writeStartObject();
        }
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public final void writeEndObject() throws IOException {
        if (!this._writeContext.inObject()) {
            _reportError("Current context not an object but " + this._writeContext.getTypeDesc());
        }
        this._writeContext = this._writeContext.getParent();
        if (this._cfgPrettyPrinter != null) {
            this._cfgPrettyPrinter.writeEndObject(this, this._writeContext.getEntryCount());
        } else {
            _writeEndObject();
        }
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public final void writeFieldName(String name) throws IOException {
        int status = this._writeContext.writeFieldName(name);
        if (status == 4) {
            _reportError("Can not write a field name, expecting a value");
        }
        _writeFieldName(name, status == 1);
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public void writeObject(Object value) throws IOException {
        if (value == null) {
            writeNull();
        } else if (this._objectCodec != null) {
            this._objectCodec.writeValue(this, value);
        } else {
            _writeSimpleObject(value);
        }
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public void writeTree(JsonNode rootNode) throws IOException {
        if (rootNode == null) {
            writeNull();
        } else {
            if (this._objectCodec == null) {
                throw new IllegalStateException("No ObjectCodec defined for the generator, can not serialize JsonNode-based trees");
            }
            this._objectCodec.writeTree(this, rootNode);
        }
    }

    @Override // org.codehaus.jackson.JsonGenerator, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        this._closed = true;
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public boolean isClosed() {
        return this._closed;
    }

    /* renamed from: org.codehaus.jackson.impl.JsonGeneratorBase$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$org$codehaus$jackson$JsonParser$NumberType;
        static final /* synthetic */ int[] $SwitchMap$org$codehaus$jackson$JsonToken = new int[JsonToken.values().length];

        static {
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.START_OBJECT.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.END_OBJECT.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.START_ARRAY.ordinal()] = 3;
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
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.VALUE_TRUE.ordinal()] = 9;
            } catch (NoSuchFieldError e9) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.VALUE_FALSE.ordinal()] = 10;
            } catch (NoSuchFieldError e10) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.VALUE_NULL.ordinal()] = 11;
            } catch (NoSuchFieldError e11) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonToken[JsonToken.VALUE_EMBEDDED_OBJECT.ordinal()] = 12;
            } catch (NoSuchFieldError e12) {
            }
            $SwitchMap$org$codehaus$jackson$JsonParser$NumberType = new int[JsonParser.NumberType.values().length];
            try {
                $SwitchMap$org$codehaus$jackson$JsonParser$NumberType[JsonParser.NumberType.INT.ordinal()] = 1;
            } catch (NoSuchFieldError e13) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonParser$NumberType[JsonParser.NumberType.BIG_INTEGER.ordinal()] = 2;
            } catch (NoSuchFieldError e14) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonParser$NumberType[JsonParser.NumberType.BIG_DECIMAL.ordinal()] = 3;
            } catch (NoSuchFieldError e15) {
            }
            try {
                $SwitchMap$org$codehaus$jackson$JsonParser$NumberType[JsonParser.NumberType.FLOAT.ordinal()] = 4;
            } catch (NoSuchFieldError e16) {
            }
        }
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public final void copyCurrentEvent(JsonParser jp) throws IOException {
        switch (AnonymousClass1.$SwitchMap$org$codehaus$jackson$JsonToken[jp.getCurrentToken().ordinal()]) {
            case JsonWriteContext.STATUS_OK_AFTER_COMMA /* 1 */:
                writeStartObject();
                break;
            case JsonWriteContext.STATUS_OK_AFTER_COLON /* 2 */:
                writeEndObject();
                break;
            case JsonWriteContext.STATUS_OK_AFTER_SPACE /* 3 */:
                writeStartArray();
                break;
            case JsonWriteContext.STATUS_EXPECT_VALUE /* 4 */:
                writeEndArray();
                break;
            case JsonWriteContext.STATUS_EXPECT_NAME /* 5 */:
                writeFieldName(jp.getCurrentName());
                break;
            case 6:
                writeString(jp.getTextCharacters(), jp.getTextOffset(), jp.getTextLength());
                break;
            case 7:
                switch (AnonymousClass1.$SwitchMap$org$codehaus$jackson$JsonParser$NumberType[jp.getNumberType().ordinal()]) {
                    case JsonWriteContext.STATUS_OK_AFTER_COMMA /* 1 */:
                        writeNumber(jp.getIntValue());
                        break;
                    case JsonWriteContext.STATUS_OK_AFTER_COLON /* 2 */:
                        writeNumber(jp.getBigIntegerValue());
                        break;
                    default:
                        writeNumber(jp.getLongValue());
                        break;
                }
            case 8:
                switch (AnonymousClass1.$SwitchMap$org$codehaus$jackson$JsonParser$NumberType[jp.getNumberType().ordinal()]) {
                    case JsonWriteContext.STATUS_OK_AFTER_SPACE /* 3 */:
                        writeNumber(jp.getDecimalValue());
                        break;
                    case JsonWriteContext.STATUS_EXPECT_VALUE /* 4 */:
                        writeNumber(jp.getFloatValue());
                        break;
                    default:
                        writeNumber(jp.getDoubleValue());
                        break;
                }
            case 9:
                writeBoolean(true);
                break;
            case 10:
                writeBoolean(false);
                break;
            case 11:
                writeNull();
                break;
            case 12:
                writeObject(jp.getEmbeddedObject());
                break;
            default:
                _cantHappen();
                break;
        }
    }

    @Override // org.codehaus.jackson.JsonGenerator
    public final void copyCurrentStructure(JsonParser jp) throws IOException {
        JsonToken t = jp.getCurrentToken();
        if (t == JsonToken.FIELD_NAME) {
            writeFieldName(jp.getCurrentName());
            t = jp.nextToken();
        }
        switch (AnonymousClass1.$SwitchMap$org$codehaus$jackson$JsonToken[t.ordinal()]) {
            case JsonWriteContext.STATUS_OK_AFTER_COMMA /* 1 */:
                writeStartObject();
                while (jp.nextToken() != JsonToken.END_OBJECT) {
                    copyCurrentStructure(jp);
                }
                writeEndObject();
                break;
            case JsonWriteContext.STATUS_OK_AFTER_COLON /* 2 */:
            default:
                copyCurrentEvent(jp);
                break;
            case JsonWriteContext.STATUS_OK_AFTER_SPACE /* 3 */:
                writeStartArray();
                while (jp.nextToken() != JsonToken.END_ARRAY) {
                    copyCurrentStructure(jp);
                }
                writeEndArray();
                break;
        }
    }

    protected void _reportError(String msg) throws JsonGenerationException {
        throw new JsonGenerationException(msg);
    }

    protected void _cantHappen() {
        throw new RuntimeException("Internal error: should never end up through this code path");
    }

    protected void _writeSimpleObject(Object value) throws IOException {
        if (value == null) {
            writeNull();
            return;
        }
        if (value instanceof String) {
            writeString((String) value);
            return;
        }
        if (value instanceof Number) {
            Number n = (Number) value;
            if (n instanceof Integer) {
                writeNumber(n.intValue());
                return;
            }
            if (n instanceof Long) {
                writeNumber(n.longValue());
                return;
            }
            if (n instanceof Double) {
                writeNumber(n.doubleValue());
                return;
            }
            if (n instanceof Float) {
                writeNumber(n.floatValue());
                return;
            }
            if (n instanceof Short) {
                writeNumber((int) n.shortValue());
                return;
            }
            if (n instanceof Byte) {
                writeNumber((int) n.byteValue());
                return;
            }
            if (n instanceof BigInteger) {
                writeNumber((BigInteger) n);
                return;
            }
            if (n instanceof BigDecimal) {
                writeNumber((BigDecimal) n);
                return;
            } else if (n instanceof AtomicInteger) {
                writeNumber(((AtomicInteger) n).get());
                return;
            } else if (n instanceof AtomicLong) {
                writeNumber(((AtomicLong) n).get());
                return;
            }
        } else if (value instanceof byte[]) {
            writeBinary((byte[]) value);
            return;
        } else if (value instanceof Boolean) {
            writeBoolean(((Boolean) value).booleanValue());
            return;
        } else if (value instanceof AtomicBoolean) {
            writeBoolean(((AtomicBoolean) value).get());
            return;
        }
        throw new IllegalStateException("No ObjectCodec defined for the generator, can only serialize simple wrapper types (type passed " + value.getClass().getName() + ")");
    }
}
