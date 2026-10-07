package com.halfbrick.fruitninja;

import android.view.MotionEvent;

/* loaded from: classes.dex */
public class MultiTouchInputHandler extends TouchInputHandler {
    @Override // com.halfbrick.fruitninja.TouchInputHandler
    public void onTouchEvent(MotionEvent event) throws InterruptedException {
        int numPointers = event.getPointerCount();
        for (int ptrIdx = 0; ptrIdx < numPointers; ptrIdx++) {
            NativeGameLib.touchEvent(event.getAction(), event.getEventTime(), event.getPointerId(ptrIdx), event.getX(ptrIdx), event.getY(ptrIdx), event.getPressure(ptrIdx), event.getSize(ptrIdx));
        }
        try {
            Thread.sleep(10L);
        } catch (InterruptedException e) {
        }
    }
}
