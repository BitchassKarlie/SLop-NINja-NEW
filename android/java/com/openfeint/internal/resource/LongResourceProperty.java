package com.openfeint.internal.resource;

import java.io.IOException;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.JsonParser;

/* loaded from: classes.dex */
public abstract class LongResourceProperty extends PrimitiveResourceProperty {
    public abstract long get(Resource resource);

    public abstract void set(Resource resource, long j);

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void copy(Resource lhs, Resource rhs) {
        set(lhs, get(rhs));
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void parse(Resource obj, JsonParser jp) throws IOException {
        set(obj, jp.getLongValue());
    }

    public void set(Resource obj, String val) {
        set(obj, Long.valueOf(val).longValue());
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void generate(Resource obj, JsonGenerator generator) throws IOException {
        generator.writeNumber(get(obj));
    }
}
