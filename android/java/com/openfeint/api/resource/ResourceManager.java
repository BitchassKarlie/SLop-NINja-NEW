package com.openfeint.api.resource;

import java.util.ArrayList;
import java.util.List;

/* loaded from: classes.dex */
public abstract class ResourceManager<T> {
    private List<Delegate> delegates = new ArrayList();
    protected T t;

    public interface Delegate {
        void newResource();
    }

    public T get() {
        return this.t;
    }

    public void register(Delegate delegate) {
        if (!this.delegates.contains(delegate)) {
            this.delegates.add(delegate);
        }
    }

    public void unRegister(Delegate delegate) {
        this.delegates.remove(delegate);
    }

    public void newResource(T newT) {
        this.t = newT;
        for (Delegate d : this.delegates) {
            d.newResource();
        }
    }
}
