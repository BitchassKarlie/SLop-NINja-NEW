package com.halfbrick.fruitninja;

import android.view.MotionEvent;

/* loaded from: classes.dex */
public class TouchInputHandler {
    public void onTouchEvent(MotionEvent event) throws InterruptedException {
        NativeGameLib.touchEvent(event.getAction(), event.getEventTime(), 0, event.getX(), event.getY(), event.getPressure(), event.getSize());
        try {
            Thread.sleep(10L);
        } catch (InterruptedException e) {
        }
    }

    public void FocusLost() {
    }
}
