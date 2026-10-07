package com.openfeint.internal.resource;

import java.io.IOException;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.JsonParser;
import org.codehaus.jackson.JsonToken;

/* loaded from: classes.dex */
public abstract class BooleanResourceProperty extends PrimitiveResourceProperty {
    public abstract boolean get(Resource resource);

    public abstract void set(Resource resource, boolean z);

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void copy(Resource lhs, Resource rhs) {
        set(lhs, get(rhs));
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void parse(Resource obj, JsonParser jp) throws IOException {
        if (jp.getCurrentToken() == JsonToken.VALUE_TRUE || jp.getText().equalsIgnoreCase("true") || jp.getText().equalsIgnoreCase("1") || jp.getText().equalsIgnoreCase("YES")) {
            set(obj, true);
        } else {
            set(obj, false);
        }
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void generate(Resource obj, JsonGenerator generator) throws IOException {
        generator.writeBoolean(get(obj));
    }
}
