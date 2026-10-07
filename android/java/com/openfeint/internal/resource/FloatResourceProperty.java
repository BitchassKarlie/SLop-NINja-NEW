package com.openfeint.internal.resource;

import java.io.IOException;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.JsonParseException;
import org.codehaus.jackson.JsonParser;

/* loaded from: classes.dex */
public abstract class FloatResourceProperty extends PrimitiveResourceProperty {
    public abstract float get(Resource resource);

    public abstract void set(Resource resource, float f);

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void copy(Resource lhs, Resource rhs) {
        set(lhs, get(rhs));
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void parse(Resource obj, JsonParser jp) throws IOException {
        try {
            set(obj, jp.getFloatValue());
        } catch (JsonParseException e) {
        }
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void generate(Resource obj, JsonGenerator generator) throws IOException {
        generator.writeNumber(get(obj));
    }
}
