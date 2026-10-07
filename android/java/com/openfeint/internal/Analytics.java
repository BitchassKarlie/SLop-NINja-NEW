package com.openfeint.internal;

import android.content.SharedPreferences;
import java.util.Date;

/* loaded from: classes.dex */
public class Analytics {
    long dashboardMilliseconds;
    Date dashboardStart;
    long gameSessionMilliseconds;
    int numDashboardLaunches;
    int numGameSessions;
    int numOnlineGameSessions;
    Date sessionStart;

    public Analytics() {
        SharedPreferences prefs = OpenFeintInternal.getInstance().getContext().getSharedPreferences("FeintAnalytics", 0);
        prefs.getInt("dashboardLaunches", this.numDashboardLaunches);
        prefs.getInt("sessionLaunches", this.numGameSessions);
        prefs.getInt("onlineSessions", this.numOnlineGameSessions);
        prefs.getLong("sessionMilliseconds", this.gameSessionMilliseconds);
        prefs.getLong("dashboardMilliseconds", this.dashboardMilliseconds);
    }

    public void markDashboardOpen() {
        this.numDashboardLaunches++;
        this.dashboardStart = new Date();
        update();
    }

    public void markDashboardClose() {
        if (this.dashboardStart != null) {
            this.dashboardMilliseconds += new Date().getTime() - this.dashboardStart.getTime();
            this.dashboardStart = null;
            update();
            return;
        }
        OpenFeintInternal.log("Analytics", "Dashboard closed without known starting time");
    }

    public void markSessionOpen(boolean online) {
        this.numGameSessions++;
        if (online) {
            this.numOnlineGameSessions++;
        }
        this.sessionStart = new Date();
        update();
    }

    public void markSessionClose() {
        if (this.sessionStart != null) {
            this.gameSessionMilliseconds += new Date().getTime() - this.sessionStart.getTime();
            this.sessionStart = null;
            update();
            return;
        }
        OpenFeintInternal.log("Analytics", "Session closed without known starting time");
    }

    private void update() {
        SharedPreferences.Editor prefs = OpenFeintInternal.getInstance().getContext().getSharedPreferences("FeintAnalytics", 0).edit();
        prefs.putInt("dashboardLaunches", this.numDashboardLaunches);
        prefs.putInt("sessionLaunches", this.numGameSessions);
        prefs.putInt("onlineSessions", this.numOnlineGameSessions);
        prefs.putLong("sessionMilliseconds", this.gameSessionMilliseconds);
        prefs.putLong("dashboardMilliseconds", this.dashboardMilliseconds);
        prefs.commit();
    }
}
