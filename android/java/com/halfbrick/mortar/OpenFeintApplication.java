package com.halfbrick.mortar;

import android.app.Application;
import android.util.Log;
import com.halfbrick.fruitninja.NativeGameLib;
import com.openfeint.api.Notification;
import com.openfeint.api.OpenFeint;
import com.openfeint.api.OpenFeintDelegate;
import com.openfeint.api.OpenFeintSettings;
import com.openfeint.api.resource.Leaderboard;
import com.openfeint.api.resource.Score;
import com.openfeint.api.resource.ServerTimestamp;
import com.openfeint.api.resource.User;
import java.util.List;
import java.util.Timer;
import java.util.TimerTask;
import org.codehaus.jackson.impl.JsonWriteContext;

/* loaded from: classes.dex */
public class OpenFeintApplication extends Application {
    private static final int MAX_MINUTES_FROM_SERVER = 60;
    private static final int MINUTES_BETWEEN_SERVER_TIME_UPDATE = 15;
    private static long mRetrivedServerTimeAt = GetLocalEpochSeconds();
    private static long mServerSecondsSinceEpoch = GetLocalEpochSeconds();
    private Timer mTimer;

    private static long GetLocalEpochSeconds() {
        return (System.currentTimeMillis() + 500) / 1000;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void SetServerTime(ServerTimestamp currentTime) {
        mRetrivedServerTimeAt = GetLocalEpochSeconds();
        mServerSecondsSinceEpoch = currentTime.secondsSinceEpoch;
    }

    public static long GetServerEpochSeconds() {
        long secondsSinceLastUpdate = GetLocalEpochSeconds() - mRetrivedServerTimeAt;
        if (secondsSinceLastUpdate > 900) {
            secondsSinceLastUpdate = 900;
        } else if (secondsSinceLastUpdate < 0) {
            secondsSinceLastUpdate = 0;
        }
        return mServerSecondsSinceEpoch + secondsSinceLastUpdate;
    }

    @Override // android.app.Application
    public void onCreate() {
        super.onCreate();
        OpenFeintSettings settings = new OpenFeintSettings("Fruit Ninja", "7rJ4RGXLEkwDnRr9QuNIQ", "B8DmWmQ4pX3aHCtYIpu6g8rWBEkY29mlQkDjUcprKE", "76174");
        OpenFeint.initialize(this, settings, new OpenFeintDelegate() { // from class: com.halfbrick.mortar.OpenFeintApplication.1
        });
        Notification.setDelegate(new Notification.Delegate() { // from class: com.halfbrick.mortar.OpenFeintApplication.2
            @Override // com.openfeint.api.Notification.Delegate
            public boolean canShowNotification(Notification notification) {
                Log.i("halfbrick.Mortar", "Can Show Notification?");
                return NativeGameLib.canShowNotification();
            }

            @Override // com.openfeint.api.Notification.Delegate
            public void displayNotification(Notification notification) {
                String txt = notification.getText();
                Notification.Category cat = notification.getCategory();
                Log.i("halfbrick.Mortar", "Notification Category" + cat);
                int notCat = 0;
                switch (AnonymousClass4.$SwitchMap$com$openfeint$api$Notification$Category[cat.ordinal()]) {
                    case JsonWriteContext.STATUS_OK_AFTER_COMMA /* 1 */:
                        notCat = 6;
                        break;
                    case JsonWriteContext.STATUS_OK_AFTER_COLON /* 2 */:
                        notCat = 3;
                        break;
                    case JsonWriteContext.STATUS_OK_AFTER_SPACE /* 3 */:
                        notCat = 2;
                        break;
                    case JsonWriteContext.STATUS_EXPECT_VALUE /* 4 */:
                        notCat = 4;
                        break;
                    case JsonWriteContext.STATUS_EXPECT_NAME /* 5 */:
                        notCat = 5;
                        break;
                    case 6:
                        notCat = 2;
                        break;
                    case 7:
                        notCat = 0;
                        break;
                    case 8:
                        notCat = 8;
                        break;
                    case 9:
                        notCat = 7;
                        break;
                }
                Notification.Type tp = notification.getType();
                Log.i("halfbrick.Mortar", "Notification Type" + tp);
                switch (AnonymousClass4.$SwitchMap$com$openfeint$api$Notification$Type[tp.ordinal()]) {
                    case JsonWriteContext.STATUS_OK_AFTER_COMMA /* 1 */:
                    case JsonWriteContext.STATUS_OK_AFTER_COLON /* 2 */:
                    case JsonWriteContext.STATUS_OK_AFTER_SPACE /* 3 */:
                        notCat = 0;
                        break;
                }
                Log.i("halfbrick.Mortar", "Display Notification: " + txt);
                NativeGameLib.displayNotification(txt, notCat);
            }
        });
        this.mTimer = new Timer();
        this.mTimer.schedule(new TimerTask() { // from class: com.halfbrick.mortar.OpenFeintApplication.3
            ServerTimestamp.GetCB mCallback = new ServerTimestamp.GetCB() { // from class: com.halfbrick.mortar.OpenFeintApplication.3.1
                @Override // com.openfeint.api.resource.ServerTimestamp.GetCB
                public void onSuccess(ServerTimestamp currentTime) {
                    OpenFeintApplication.SetServerTime(currentTime);
                }
            };

            @Override // java.util.TimerTask, java.lang.Runnable
            public void run() {
                ServerTimestamp.get(this.mCallback);
            }
        }, 0L, 900000L);
    }

    /* renamed from: com.halfbrick.mortar.OpenFeintApplication$4, reason: invalid class name */
    static /* synthetic */ class AnonymousClass4 {
        static final /* synthetic */ int[] $SwitchMap$com$openfeint$api$Notification$Category;
        static final /* synthetic */ int[] $SwitchMap$com$openfeint$api$Notification$Type = new int[Notification.Type.values().length];

        static {
            try {
                $SwitchMap$com$openfeint$api$Notification$Type[Notification.Type.NetworkOffline.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$openfeint$api$Notification$Type[Notification.Type.Error.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$openfeint$api$Notification$Type[Notification.Type.UserPresenceOffline.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            $SwitchMap$com$openfeint$api$Notification$Category = new int[Notification.Category.values().length];
            try {
                $SwitchMap$com$openfeint$api$Notification$Category[Notification.Category.Achievement.ordinal()] = 1;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$openfeint$api$Notification$Category[Notification.Category.Challenge.ordinal()] = 2;
            } catch (NoSuchFieldError e5) {
            }
            try {
                $SwitchMap$com$openfeint$api$Notification$Category[Notification.Category.Foreground.ordinal()] = 3;
            } catch (NoSuchFieldError e6) {
            }
            try {
                $SwitchMap$com$openfeint$api$Notification$Category[Notification.Category.HighScore.ordinal()] = 4;
            } catch (NoSuchFieldError e7) {
            }
            try {
                $SwitchMap$com$openfeint$api$Notification$Category[Notification.Category.Leaderboard.ordinal()] = 5;
            } catch (NoSuchFieldError e8) {
            }
            try {
                $SwitchMap$com$openfeint$api$Notification$Category[Notification.Category.Login.ordinal()] = 6;
            } catch (NoSuchFieldError e9) {
            }
            try {
                $SwitchMap$com$openfeint$api$Notification$Category[Notification.Category.Multiplayer.ordinal()] = 7;
            } catch (NoSuchFieldError e10) {
            }
            try {
                $SwitchMap$com$openfeint$api$Notification$Category[Notification.Category.Presence.ordinal()] = 8;
            } catch (NoSuchFieldError e11) {
            }
            try {
                $SwitchMap$com$openfeint$api$Notification$Category[Notification.Category.SocialNotification.ordinal()] = 9;
            } catch (NoSuchFieldError e12) {
            }
        }
    }

    public static class LeaderboardGetScoresCB_Native extends Leaderboard.GetScoresCB {
        private long nativePtr;

        private native void native_RecievedScores(List<Score> list);

        private native void native_ReleaseNative();

        public LeaderboardGetScoresCB_Native() {
            Log.i("halfbrick.Mortar", "Created java class: LeaderboardGetScoresCB_Native");
        }

        protected void finalize() {
            synchronized (NativeGameLib.GetSyncObj()) {
                native_ReleaseNative();
            }
        }

        @Override // com.openfeint.api.resource.Leaderboard.GetScoresCB
        public void onSuccess(List<Score> scores) {
            synchronized (NativeGameLib.GetSyncObj()) {
                native_RecievedScores(scores);
            }
        }

        @Override // com.openfeint.internal.APICallback
        public void onFailure(String exceptionMessage) {
            super.onFailure(exceptionMessage);
            synchronized (NativeGameLib.GetSyncObj()) {
                Log.e("halfbrick.Mortar", "LeaderboardGetScoresCB_Native: Failed to retrieve scores");
            }
        }
    }

    public static class UserGetFriendsCB_Native extends User.GetFriendsCB {
        private long nativePtr;

        private native void native_RecievedFriends(List<User> list);

        private native void native_ReleaseNative();

        public UserGetFriendsCB_Native() {
            Log.i("halfbrick.Mortar", "Created java class: UserGetFriendsCB_Native");
        }

        protected void finalize() {
            synchronized (NativeGameLib.GetSyncObj()) {
                native_ReleaseNative();
            }
        }

        @Override // com.openfeint.api.resource.User.GetFriendsCB
        public void onSuccess(List<User> friends) {
            synchronized (NativeGameLib.GetSyncObj()) {
                native_RecievedFriends(friends);
            }
        }

        @Override // com.openfeint.internal.APICallback
        public void onFailure(String exceptionMessage) {
            super.onFailure(exceptionMessage);
            synchronized (NativeGameLib.GetSyncObj()) {
                Log.e("halfbrick.Mortar", "UserGetFriendsCB_Native: Failed to retrieve friends!");
            }
        }
    }
}
