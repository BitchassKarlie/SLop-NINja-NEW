package com.openfeint.internal.resource;

import java.io.IOException;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.JsonParser;
import org.codehaus.jackson.JsonToken;

/* loaded from: classes.dex */
public abstract class StringResourceProperty extends PrimitiveResourceProperty {
    public abstract String get(Resource resource);

    public abstract void set(Resource resource, String str);

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void copy(Resource lhs, Resource rhs) {
        set(lhs, get(rhs));
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void parse(Resource obj, JsonParser jp) throws IOException {
        if (jp.getCurrentToken() == JsonToken.VALUE_NULL) {
            set(obj, null);
        } else {
            set(obj, jp.getText());
        }
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void generate(Resource obj, JsonGenerator generator) throws IOException {
        String o = get(obj);
        if (o != null) {
            generator.writeString(o);
        } else {
            generator.writeNull();
        }
    }
}
