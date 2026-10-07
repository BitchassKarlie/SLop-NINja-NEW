package com.openfeint.internal.resource;

import java.io.IOException;
import java.lang.Enum;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.JsonParser;

/* loaded from: classes.dex */
public abstract class EnumResourceProperty<T extends Enum<T>> extends PrimitiveResourceProperty {
    Class<T> mEnumClass;

    public abstract T get(Resource resource);

    public abstract void set(Resource resource, T t);

    public EnumResourceProperty(Class<T> enumClass) {
        this.mEnumClass = enumClass;
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void copy(Resource lhs, Resource rhs) {
        set(lhs, get(rhs));
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void parse(Resource obj, JsonParser jp) throws IOException {
        set(obj, Enum.valueOf(this.mEnumClass, jp.getText()));
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void generate(Resource obj, JsonGenerator generator) throws IOException {
        generator.writeString(get(obj).toString());
    }
}
