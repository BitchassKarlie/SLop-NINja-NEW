package com.openfeint.internal.resource;

import java.io.IOException;
import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.TimeZone;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.JsonParser;

/* loaded from: classes.dex */
public abstract class DateResourceProperty extends PrimitiveResourceProperty {
    static DateFormat sDateParser = makeDateParser();

    public abstract Date get(Resource resource);

    public abstract void set(Resource resource, Date date);

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void copy(Resource lhs, Resource rhs) {
        set(lhs, get(rhs));
    }

    static DateFormat makeDateParser() {
        DateFormat p = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        p.setTimeZone(TimeZone.getTimeZone("UTC"));
        return p;
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void parse(Resource obj, JsonParser jp) throws IOException {
        String text = jp.getText();
        if (text.equals("null")) {
            set(obj, null);
            return;
        }
        try {
            set(obj, sDateParser.parse(text));
        } catch (ParseException e) {
            set(obj, null);
        }
    }

    @Override // com.openfeint.internal.resource.PrimitiveResourceProperty
    public void generate(Resource obj, JsonGenerator generator) throws IOException {
        Date o = get(obj);
        if (o != null) {
            generator.writeString(sDateParser.format(o));
        } else {
            generator.writeNull();
        }
    }
}
