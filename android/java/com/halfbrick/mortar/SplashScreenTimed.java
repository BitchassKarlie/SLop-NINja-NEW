package com.halfbrick.mortar;

import android.content.Context;

/* loaded from: classes.dex */
public class SplashScreenTimed extends SplashScreen {
    private float m_remainingTime;

    public SplashScreenTimed(Context context, int splashResourceID, float secondsToDisplay) {
        super(context, splashResourceID);
        this.m_remainingTime = secondsToDisplay;
    }

    @Override // com.halfbrick.mortar.SplashScreen
    public void Update(float deltaT) {
        this.m_remainingTime -= deltaT;
        super.Update(deltaT);
    }

    @Override // com.halfbrick.mortar.SplashScreen
    public boolean HasFinished() {
        return this.m_remainingTime <= 0.0f && super.HasFinished();
    }
}
