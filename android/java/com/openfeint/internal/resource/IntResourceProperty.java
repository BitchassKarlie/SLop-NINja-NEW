package com.openfeint.internal.resource;

import java.io.IOException;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.JsonParser;

/* loaded from: classes.dex */
public abstract class IntResourceProperty extends PrimitiveResourceProperty {
    public abstract int get(Resource resource);

    public abstract void set(Resource resource, int i);

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void copy(Resource lhs, Resource rhs) {
        set(lhs, get(rhs));
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void parse(Resource obj, JsonParser jp) throws IOException {
        set(obj, jp.getIntValue());
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void generate(Resource obj, JsonGenerator generator) throws IOException {
        generator.writeNumber(get(obj));
    }
}
