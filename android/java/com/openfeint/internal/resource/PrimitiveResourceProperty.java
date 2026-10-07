package com.openfeint.internal.resource;

import java.io.IOException;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.JsonParser;

/* loaded from: classes.dex */
public abstract class PrimitiveResourceProperty extends ResourceProperty {
    public abstract void copy(Resource resource, Resource resource2);

    public abstract void generate(Resource resource, JsonGenerator jsonGenerator) throws IOException;

    public abstract void parse(Resource resource, JsonParser jsonParser) throws IOException;
}
