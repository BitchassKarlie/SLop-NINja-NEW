package com.openfeint.api;

import android.content.Context;
import android.content.res.Resources;
import com.openfeint.api.resource.CurrentUser;
import com.openfeint.internal.OpenFeintInternal;

/* loaded from: classes.dex */
public class OpenFeint {
    public static CurrentUser getCurrentUser() {
        return OpenFeintInternal.getInstance().getCurrentUser();
    }

    public static boolean isUserLoggedIn() {
        return OpenFeintInternal.getInstance().isUserLoggedIn();
    }

    public static void initialize(Context ctx, OpenFeintSettings settings, OpenFeintDelegate delegate) {
        OpenFeintInternal.initialize(ctx, settings, delegate);
    }

    public static void initializeWithoutLoggingIn(Context ctx, OpenFeintSettings settings, OpenFeintDelegate delegate) {
        OpenFeintInternal.initializeWithoutLoggingIn(ctx, settings, delegate);
    }

    public static void setDelegate(OpenFeintDelegate delegate) {
        OpenFeintInternal.getInstance().setDelegate(delegate);
    }

    public static void login() {
        OpenFeintInternal.getInstance().login();
    }

    public static boolean isNetworkConnected() {
        return OpenFeintInternal.getInstance().isFeintServerReachable();
    }

    public static void userApprovedFeint() throws Resources.NotFoundException {
        OpenFeintInternal.getInstance().userApprovedFeint();
    }

    public static void userDeclinedFeint() {
        OpenFeintInternal.getInstance().userDeclinedFeint();
    }

    public static void logoutUser() {
        OpenFeintInternal.getInstance().logoutUser(null);
    }
}
