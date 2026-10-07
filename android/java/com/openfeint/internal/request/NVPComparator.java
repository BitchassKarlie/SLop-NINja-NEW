package com.openfeint.internal.request;

import java.util.Comparator;
import org.apache.http.NameValuePair;

/* compiled from: OrderedArgList.java */
/* loaded from: classes.dex */
class NVPComparator implements Comparator<NameValuePair> {
    NVPComparator() {
    }

    @Override // java.util.Comparator
    public int compare(NameValuePair a, NameValuePair b) {
        int r = a.getName().compareTo(b.getName());
        return r == 0 ? a.getValue().compareTo(b.getValue()) : r;
    }
}
