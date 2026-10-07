package com.openfeint.internal;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.content.res.XmlResourceParser;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.provider.Settings;
import android.util.DisplayMetrics;
import android.util.Log;
import com.halfbrick.fruitninja.R;
import com.openfeint.api.Notification;
import com.openfeint.api.OpenFeintDelegate;
import com.openfeint.api.OpenFeintSettings;
import com.openfeint.api.resource.CurrentUser;
import com.openfeint.api.resource.User;
import com.openfeint.internal.SyncedStore;
import com.openfeint.internal.db.DB;
import com.openfeint.internal.notifications.SimpleNotification;
import com.openfeint.internal.notifications.TwoLineNotification;
import com.openfeint.internal.request.BaseRequest;
import com.openfeint.internal.request.BlobPostRequest;
import com.openfeint.internal.request.Client;
import com.openfeint.internal.request.GenericRequest;
import com.openfeint.internal.request.IRawRequestDelegate;
import com.openfeint.internal.request.JSONRequest;
import com.openfeint.internal.request.OrderedArgList;
import com.openfeint.internal.request.RawRequest;
import com.openfeint.internal.request.multipart.ByteArrayPartSource;
import com.openfeint.internal.request.multipart.FilePartSource;
import com.openfeint.internal.request.multipart.PartSource;
import com.openfeint.internal.resource.BlobUploadParameters;
import com.openfeint.internal.resource.ServerException;
import com.openfeint.internal.ui.IntroFlow;
import com.openfeint.internal.ui.WebViewCache;
import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Properties;
import java.util.Random;
import org.apache.commons.codec.binary.Hex;
import org.apache.http.impl.client.AbstractHttpClient;
import org.codehaus.jackson.JsonFactory;
import org.codehaus.jackson.JsonParser;

/* loaded from: classes.dex */
public class OpenFeintInternal {
    private static final boolean DEVELOPMENT_LOGGING_ENABLED = false;
    private static final String TAG = "OpenFeint";
    private static OpenFeintInternal sInstance;
    Analytics analytics;
    String mAppVersion;
    private boolean mApproved;
    private boolean mBanned;
    Client mClient;
    private Context mContext;
    private boolean mCreatingDeviceSession;
    private CurrentUser mCurrentUser;
    private boolean mCurrentlyLoggingIn;
    private boolean mDeclined;
    OpenFeintDelegate mDelegate;
    private boolean mDeserializedAlready;
    private boolean mDeviceSessionCreated;
    Properties mInternalProperties;
    private LoginDelegate mLoginDelegate;
    Handler mMainThreadHandler;
    private Runnable mPostDeviceSessionRunnable;
    private Runnable mPostLoginRunnable;
    private SyncedStore mPrefs;
    private List<Runnable> mQueuedPostDeviceSessionRunnables;
    private List<Runnable> mQueuedPostLoginRunnables;
    String mServerUrl;
    OpenFeintSettings mSettings;
    String mUDID;

    public interface LoginDelegate {
        void login(User user);
    }

    public void setLoginDelegate(LoginDelegate delegate) {
        this.mLoginDelegate = delegate;
    }

    private void _saveInstanceState(Bundle outState) {
        if (this.mCurrentUser != null) {
            outState.putString("mCurrentUser", this.mCurrentUser.generate());
        }
        if (this.mClient != null) {
            this.mClient.saveInstanceState(outState);
        }
        outState.putBoolean("mCurrentlyLoggingIn", this.mCurrentlyLoggingIn);
        outState.putBoolean("mCreatingDeviceSession", this.mCreatingDeviceSession);
        outState.putBoolean("mDeviceSessionCreated", this.mDeviceSessionCreated);
        outState.putBoolean("mBanned", this.mBanned);
        outState.putBoolean("mApproved", this.mApproved);
        outState.putBoolean("mDeclined", this.mDeclined);
    }

    private void _restoreInstanceState(Bundle inState) {
        if (!this.mDeserializedAlready && inState != null) {
            this.mCurrentUser = (CurrentUser) userFromString(inState.getString("mCurrentUser"));
            if (this.mClient != null) {
                this.mClient.restoreInstanceState(inState);
            }
            this.mCurrentlyLoggingIn = inState.getBoolean("mCurrentlyLoggingIn");
            this.mCreatingDeviceSession = inState.getBoolean("mCreatingDeviceSession");
            this.mDeviceSessionCreated = inState.getBoolean("mDeviceSessionCreated");
            this.mBanned = inState.getBoolean("mBanned");
            this.mApproved = inState.getBoolean("mApproved");
            this.mDeclined = inState.getBoolean("mDeclined");
            this.mDeserializedAlready = true;
        }
    }

    public static void saveInstanceState(Bundle outState) {
        getInstance()._saveInstanceState(outState);
    }

    public static void restoreInstanceState(Bundle inState) {
        getInstance()._restoreInstanceState(inState);
    }

    public static OpenFeintInternal getInstance() {
        return sInstance;
    }

    public OpenFeintDelegate getDelegate() {
        return this.mDelegate;
    }

    public AbstractHttpClient getClient() {
        return this.mClient;
    }

    public SyncedStore getPrefs() {
        if (this.mPrefs == null) {
            this.mPrefs = new SyncedStore(getContext());
        }
        return this.mPrefs;
    }

    private void saveUser(SyncedStore.Editor e, User u) {
        e.putString("last_logged_in_user", u.generate());
    }

    private void clearUser(SyncedStore.Editor e) {
        e.remove("last_logged_in_user");
    }

    private User loadUser() {
        SyncedStore.Reader r = getPrefs().read();
        try {
            String urep = r.getString("last_logged_in_user", null);
            r.complete();
            return userFromString(urep);
        } catch (Throwable th) {
            r.complete();
            throw th;
        }
    }

    private static User userFromString(String urep) {
        if (urep == null) {
            return null;
        }
        try {
            JsonFactory jsonFactory = new JsonFactory();
            JsonParser jp = jsonFactory.createJsonParser(new ByteArrayInputStream(urep.getBytes()));
            JsonResourceParser jrp = new JsonResourceParser(jp);
            Object responseBody = jrp.parse();
            if (responseBody != null && (responseBody instanceof User)) {
                return (User) responseBody;
            }
        } catch (IOException e) {
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void userLoggedIn(User loggedInUser) {
        this.mCurrentUser = new CurrentUser();
        this.mCurrentUser.shallowCopyAncestorType(loggedInUser);
        SyncedStore.Editor e = getPrefs().edit();
        try {
            e.putString("last_logged_in_server", getServerUrl());
            saveUserApproval(e);
            saveUser(e, loggedInUser);
            e.commit();
            if (this.mDelegate != null) {
                this.mDelegate.userLoggedIn(this.mCurrentUser);
            }
            if (this.mLoginDelegate != null) {
                this.mLoginDelegate.login(this.mCurrentUser);
            }
            getAnalytics().markSessionOpen(true);
            AchievementUnlockCache.reset();
        } catch (Throwable th) {
            e.commit();
            throw th;
        }
    }

    private void userLoggedOut() {
        User previousLocalUser = this.mCurrentUser;
        this.mCurrentUser = null;
        this.mDeviceSessionCreated = false;
        clearPrefs();
        if (this.mDelegate != null) {
            this.mDelegate.userLoggedOut(previousLocalUser);
        }
        getAnalytics().markSessionClose();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void clearPrefs() {
        SyncedStore.Editor e = getPrefs().edit();
        try {
            e.remove("last_logged_in_server");
            e.remove("last_logged_in_user_name");
            clearUser(e);
        } finally {
            e.commit();
        }
    }

    public void createUser(String userName, String email, String password, String passwordConfirmation, IRawRequestDelegate delegate) {
        OrderedArgList bootstrapArgs = new OrderedArgList();
        bootstrapArgs.put("platform", "android");
        bootstrapArgs.put("of-version", getOFVersion());
        bootstrapArgs.put("app-version", getAppVersion());
        bootstrapArgs.put("user[name]", userName);
        bootstrapArgs.put("user[http_basic_credential_attributes][email]", email);
        bootstrapArgs.put("user[http_basic_credential_attributes][password]", password);
        bootstrapArgs.put("user[http_basic_credential_attributes][password_confirmation]", passwordConfirmation);
        RawRequest userCreate = new RawRequest(bootstrapArgs) { // from class: com.openfeint.internal.OpenFeintInternal.1
            @Override // com.openfeint.internal.request.BaseRequest
            public String method() {
                return "POST";
            }

            @Override // com.openfeint.internal.request.BaseRequest
            public String path() {
                return "/xp/users.json";
            }

            @Override // com.openfeint.internal.request.JSONRequest
            public void onSuccess(Object responseBody) {
                OpenFeintInternal.this.userLoggedIn((User) responseBody);
            }
        };
        userCreate.setDelegate(delegate);
        _makeRequest(userCreate);
    }

    public static String getModelString() {
        return "p(" + Build.PRODUCT + ")/m(" + Build.MODEL + ")";
    }

    public static String getOSVersionString() {
        return "v" + Build.VERSION.RELEASE + " (" + Build.VERSION.INCREMENTAL + ")";
    }

    public static String getScreenInfo() {
        DisplayMetrics metrics = Util.getDisplayMetrics();
        return String.format("%dx%d (%f dpi)", Integer.valueOf(metrics.widthPixels), Integer.valueOf(metrics.heightPixels), Float.valueOf(metrics.density));
    }

    /* JADX WARN: Code restructure failed: missing block: B:7:0x0020, code lost:
    
        r1 = r3.split(":")[1].trim();
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String getProcessorInfo() {
        String family = "unknown";
        try {
            String[] arr$ = cat("/proc/cpuinfo").split("\n");
            int len$ = arr$.length;
            int i$ = 0;
            while (true) {
                if (i$ >= len$) {
                    break;
                }
                String l = arr$[i$];
                if (l.startsWith("Processor\t")) {
                    break;
                }
                i$++;
            }
        } catch (Exception e) {
        }
        return String.format("family(%s) min(%s) max(%s)", family, cat("/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq").split("\n")[0], cat("/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq").split("\n")[0]);
    }

    private static String cat(String filename) throws IOException {
        try {
            FileInputStream f = new FileInputStream(filename);
            BufferedReader br = new BufferedReader(new InputStreamReader(f), 8192);
            StringBuilder sb = new StringBuilder();
            while (true) {
                String line = br.readLine();
                if (line != null) {
                    sb.append(line + "\n");
                } else {
                    br.close();
                    return sb.toString();
                }
            }
        } catch (Exception e) {
            return "unknown";
        }
    }

    public Map<String, Object> getDeviceParams() {
        HashMap<String, Object> device = new HashMap<>();
        device.put("identifier", getUDID());
        device.put("hardware", getModelString());
        device.put("os", getOSVersionString());
        device.put("screen_resolution", getScreenInfo());
        device.put("processor", getProcessorInfo());
        return device;
    }

    public void createDeviceSession() {
        if (!this.mCreatingDeviceSession && !this.mDeviceSessionCreated) {
            HashMap<String, Object> argMap = new HashMap<>();
            argMap.put("platform", "android");
            argMap.put("device", getDeviceParams());
            OrderedArgList args = new OrderedArgList(argMap);
            this.mCreatingDeviceSession = true;
            RawRequest deviceSession = new RawRequest(args) { // from class: com.openfeint.internal.OpenFeintInternal.2
                @Override // com.openfeint.internal.request.BaseRequest
                public String method() {
                    return "POST";
                }

                @Override // com.openfeint.internal.request.BaseRequest
                public String path() {
                    return "/xp/devices";
                }

                @Override // com.openfeint.internal.request.BaseRequest
                public boolean needsDeviceSession() {
                    return false;
                }

                @Override // com.openfeint.internal.request.JSONRequest
                public void onResponse(int responseCode, Object responseBody) throws Resources.NotFoundException {
                    OpenFeintInternal.this.mCreatingDeviceSession = false;
                    if (200 > responseCode || responseCode >= 300) {
                        OpenFeintInternal.this.showOfflineNotification(responseCode, responseBody);
                    } else {
                        OpenFeintInternal.this.mDeviceSessionCreated = true;
                        if (OpenFeintInternal.this.mPostDeviceSessionRunnable != null) {
                            OpenFeintInternal.log(TAG, "Launching post-device-session runnable now.");
                            OpenFeintInternal.this.mMainThreadHandler.post(OpenFeintInternal.this.mPostDeviceSessionRunnable);
                        }
                    }
                    if (OpenFeintInternal.this.mQueuedPostDeviceSessionRunnables != null) {
                        for (Runnable r : OpenFeintInternal.this.mQueuedPostDeviceSessionRunnables) {
                            OpenFeintInternal.this.mMainThreadHandler.post(r);
                        }
                    }
                    OpenFeintInternal.this.mPostDeviceSessionRunnable = null;
                    OpenFeintInternal.this.mQueuedPostDeviceSessionRunnables = null;
                    OpenFeintInternal.this.mPostLoginRunnable = null;
                }
            };
            _makeRequest(deviceSession);
        }
    }

    public final void runOnUiThread(Runnable action) {
        this.mMainThreadHandler.post(action);
    }

    public void loginUser(final String userName, final String password, final String userID, final IRawRequestDelegate delegate) {
        if (!checkBan()) {
            if (this.mCreatingDeviceSession || !this.mDeviceSessionCreated) {
                if (!this.mCreatingDeviceSession) {
                    createDeviceSession();
                }
                log(TAG, "No device session yet - queueing login.");
                this.mPostDeviceSessionRunnable = new Runnable() { // from class: com.openfeint.internal.OpenFeintInternal.3
                    @Override // java.lang.Runnable
                    public void run() {
                        OpenFeintInternal.this.loginUser(userName, password, userID, delegate);
                    }
                };
                return;
            }
            boolean allowToast = true;
            OrderedArgList bootstrapArgs = new OrderedArgList();
            bootstrapArgs.put("platform", "android");
            if (userName != null && password != null) {
                bootstrapArgs.put("login", userName);
                bootstrapArgs.put("password", password);
                allowToast = false;
            }
            if (userID != null && password != null) {
                bootstrapArgs.put("user_id", userID);
                bootstrapArgs.put("password", password);
                allowToast = false;
            }
            bootstrapArgs.put("of-version", getOFVersion());
            bootstrapArgs.put("app-version", getAppVersion());
            this.mCurrentlyLoggingIn = true;
            final boolean finalToast = allowToast;
            RawRequest userLogin = new RawRequest(bootstrapArgs) { // from class: com.openfeint.internal.OpenFeintInternal.4
                @Override // com.openfeint.internal.request.BaseRequest
                public String method() {
                    return "POST";
                }

                @Override // com.openfeint.internal.request.BaseRequest
                public String path() {
                    return "/xp/sessions.json";
                }

                @Override // com.openfeint.internal.request.JSONRequest
                public void onResponse(int responseCode, Object responseBody) throws Resources.NotFoundException {
                    OpenFeintInternal.this.mCurrentlyLoggingIn = false;
                    if (200 <= responseCode && responseCode < 300) {
                        OpenFeintInternal.this.userLoggedIn((User) responseBody);
                        if (OpenFeintInternal.this.mPostLoginRunnable != null) {
                            OpenFeintInternal.log(TAG, "Launching post-login runnable now.");
                            OpenFeintInternal.this.mMainThreadHandler.post(OpenFeintInternal.this.mPostLoginRunnable);
                        }
                    } else if (finalToast) {
                        OpenFeintInternal.this.showOfflineNotification(responseCode, responseBody);
                    }
                    if (OpenFeintInternal.this.mQueuedPostLoginRunnables != null) {
                        for (Runnable r : OpenFeintInternal.this.mQueuedPostLoginRunnables) {
                            OpenFeintInternal.this.mMainThreadHandler.post(r);
                        }
                    }
                    OpenFeintInternal.this.mPostLoginRunnable = null;
                    OpenFeintInternal.this.mQueuedPostLoginRunnables = null;
                }
            };
            userLogin.setDelegate(delegate);
            _makeRequest(userLogin);
        }
    }

    public void submitIntent(final Intent intent) {
        this.mDeclined = false;
        Runnable r = new Runnable() { // from class: com.openfeint.internal.OpenFeintInternal.5
            @Override // java.lang.Runnable
            public void run() {
                intent.addFlags(268435456);
                OpenFeintInternal.this.getContext().startActivity(intent);
            }
        };
        if (!isUserLoggedIn()) {
            log(TAG, "Not logged in yet - queueing intent " + intent.toString() + " for now.");
            this.mPostLoginRunnable = r;
            if (!currentlyLoggingIn()) {
                login();
                return;
            }
            return;
        }
        this.mMainThreadHandler.post(r);
    }

    public void logoutUser(IRawRequestDelegate delegate) {
        OrderedArgList bootstrapArgs = new OrderedArgList();
        bootstrapArgs.put("platform", "android");
        RawRequest userLogout = new RawRequest(bootstrapArgs) { // from class: com.openfeint.internal.OpenFeintInternal.6
            @Override // com.openfeint.internal.request.BaseRequest
            public String method() {
                return "DELETE";
            }

            @Override // com.openfeint.internal.request.BaseRequest
            public String path() {
                return "/xp/sessions.json";
            }
        };
        userLogout.setDelegate(delegate);
        _makeRequest(userLogout);
        userLoggedOut();
    }

    public static void genericRequest(String path, String method, Map<String, Object> args, Map<String, Object> httpParams, IRawRequestDelegate delegate) {
        makeRequest(new GenericRequest(path, method, args, httpParams, delegate));
    }

    public void userApprovedFeint() throws Resources.NotFoundException {
        this.mApproved = true;
        this.mDeclined = false;
        SyncedStore.Editor e = getPrefs().edit();
        try {
            saveUserApproval(e);
            e.commit();
            launchIntroFlow();
        } catch (Throwable th) {
            e.commit();
            throw th;
        }
    }

    private void saveUserApproval(SyncedStore.Editor e) {
        e.remove(getContext().getPackageName() + ".of_declined");
    }

    public void userDeclinedFeint() {
        this.mApproved = false;
        this.mDeclined = true;
        SyncedStore.Editor e = getPrefs().edit();
        try {
            e.putString(getContext().getPackageName() + ".of_declined", "sadly");
        } finally {
            e.commit();
        }
    }

    public boolean currentlyLoggingIn() {
        return this.mCurrentlyLoggingIn || this.mCreatingDeviceSession;
    }

    public CurrentUser getCurrentUser() {
        return this.mCurrentUser;
    }

    public boolean isUserLoggedIn() {
        return getCurrentUser() != null;
    }

    public String getUDID() {
        if (this.mUDID == null) {
            this.mUDID = findUDID();
        }
        return this.mUDID;
    }

    public Properties getInternalProperties() {
        return this.mInternalProperties;
    }

    public String getServerUrl() {
        if (this.mServerUrl == null) {
            String raw = getInternalProperties().getProperty("server-url").toLowerCase().trim();
            if (raw.endsWith("/")) {
                this.mServerUrl = raw.substring(0, raw.length() - 1);
            } else {
                this.mServerUrl = raw;
            }
        }
        return this.mServerUrl;
    }

    public String getOFVersion() {
        return getInternalProperties().getProperty("of-version");
    }

    public String getAppName() {
        return this.mSettings.name;
    }

    public String getAppID() {
        return this.mSettings.id;
    }

    public Map<String, Object> getSettings() {
        return this.mSettings.settings;
    }

    public String getAppVersion() throws PackageManager.NameNotFoundException {
        if (this.mAppVersion == null) {
            Context c = getContext();
            try {
                PackageInfo p = c.getPackageManager().getPackageInfo(c.getPackageName(), 0);
                this.mAppVersion = p.versionName;
            } catch (Exception e) {
                this.mAppVersion = "1.0";
            }
        }
        return this.mAppVersion;
    }

    public Context getContext() {
        return this.mContext;
    }

    public void displayErrorDialog(final CharSequence errorMessage) {
        this.mMainThreadHandler.post(new Runnable() { // from class: com.openfeint.internal.OpenFeintInternal.7
            @Override // java.lang.Runnable
            public void run() {
                new AlertDialog.Builder(OpenFeintInternal.this.getContext()).setMessage(errorMessage).setNegativeButton(OpenFeintInternal.getRString(R.string.of_ok), (DialogInterface.OnClickListener) null).show();
            }
        });
    }

    private String findUDID() {
        String androidID = Settings.Secure.getString(getContext().getContentResolver(), "android_id");
        if (androidID != null && !androidID.equals("9774d56d682e549c")) {
            return "android-id-" + androidID;
        }
        SyncedStore.Reader r = getPrefs().read();
        try {
            String androidID2 = r.getString("udid", null);
            if (androidID2 == null) {
                byte[] randomBytes = new byte[16];
                new Random().nextBytes(randomBytes);
                androidID2 = "android-emu-" + new String(Hex.encodeHex(randomBytes)).replace("\r\n", "");
                SyncedStore.Editor e = getPrefs().edit();
                try {
                    e.putString("udid", androidID2);
                } finally {
                    e.commit();
                }
            }
            return androidID2;
        } finally {
            r.complete();
        }
    }

    public static void makeRequest(BaseRequest req) {
        OpenFeintInternal ofi = getInstance();
        if (ofi == null) {
            ServerException e = new ServerException();
            e.exceptionClass = "NoFeint";
            e.message = "OpenFeint has not been initialized.";
            req.onResponse(0, e.generate().getBytes());
            return;
        }
        ofi._makeRequest(req);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void _makeRequest(final BaseRequest req) {
        if (!isUserLoggedIn() && req.wantsLogin() && lastLoggedInUser() != null && isFeintServerReachable()) {
            login();
            if (this.mQueuedPostLoginRunnables == null) {
                this.mQueuedPostLoginRunnables = new ArrayList();
            }
            this.mQueuedPostLoginRunnables.add(new Runnable() { // from class: com.openfeint.internal.OpenFeintInternal.8
                @Override // java.lang.Runnable
                public void run() {
                    OpenFeintInternal.this.mClient.makeRequest(req);
                }
            });
            return;
        }
        if (!this.mDeviceSessionCreated && req.needsDeviceSession()) {
            createDeviceSession();
            if (this.mQueuedPostDeviceSessionRunnables == null) {
                this.mQueuedPostDeviceSessionRunnables = new ArrayList();
            }
            this.mQueuedPostDeviceSessionRunnables.add(new Runnable() { // from class: com.openfeint.internal.OpenFeintInternal.9
                @Override // java.lang.Runnable
                public void run() {
                    OpenFeintInternal.this.mClient.makeRequest(req);
                }
            });
            return;
        }
        this.mClient.makeRequest(req);
    }

    public void uploadFile(String xpApiPath, String filePath, String contentType, IRawRequestDelegate delegate) {
        String fileName = filePath;
        try {
            String[] parts = filePath.split("/");
            if (parts.length > 0) {
                fileName = parts[parts.length - 1];
            }
            uploadFile(xpApiPath, new FilePartSource(fileName, new File(filePath)), contentType, delegate);
        } catch (FileNotFoundException e) {
            ServerException fakeServerException = new ServerException();
            fakeServerException.exceptionClass = "FileNotFound";
            fakeServerException.message = "Couldn't open the file '" + filePath + "'.";
            delegate.onResponse(0, fakeServerException.generate());
        }
    }

    public void uploadFile(String xpApiPath, String fileName, byte[] fileData, String contentType, IRawRequestDelegate delegate) {
        uploadFile(xpApiPath, new ByteArrayPartSource(fileName, fileData), contentType, delegate);
    }

    public void uploadFile(final String xpApiPath, final PartSource partSource, final String contentType, final IRawRequestDelegate delegate) {
        JSONRequest xpRequest = new JSONRequest() { // from class: com.openfeint.internal.OpenFeintInternal.10
            @Override // com.openfeint.internal.request.BaseRequest
            public boolean wantsLogin() {
                return true;
            }

            @Override // com.openfeint.internal.request.BaseRequest
            public String method() {
                return "POST";
            }

            @Override // com.openfeint.internal.request.BaseRequest
            public String path() {
                return xpApiPath;
            }

            @Override // com.openfeint.internal.request.JSONRequest
            public void onSuccess(Object responseBody) {
                BlobPostRequest bp = new BlobPostRequest((BlobUploadParameters) responseBody, partSource, contentType);
                bp.setDelegate(delegate);
                OpenFeintInternal.this._makeRequest(bp);
            }
        };
        _makeRequest(xpRequest);
    }

    public int getResource(String resourceName) {
        String packageName = getContext().getPackageName();
        return getContext().getResources().getIdentifier(resourceName, null, packageName);
    }

    public static String getRString(int id) {
        OpenFeintInternal ofi = getInstance();
        Context ctx = ofi.getContext();
        return ctx.getResources().getString(id);
    }

    public static void initializeWithoutLoggingIn(Context ctx, OpenFeintSettings settings, OpenFeintDelegate delegate) {
        if (validateManifest(ctx)) {
            if (sInstance == null) {
                sInstance = new OpenFeintInternal(settings, ctx);
            }
            sInstance.mDelegate = delegate;
            if (!sInstance.mDeclined) {
                sInstance.createDeviceSession();
            }
        }
    }

    public static void initialize(Context ctx, OpenFeintSettings settings, OpenFeintDelegate delegate) {
        initializeWithoutLoggingIn(ctx, settings, delegate);
        OpenFeintInternal ofi = getInstance();
        if (ofi != null) {
            ofi.login();
        }
    }

    public void setDelegate(OpenFeintDelegate delegate) {
        this.mDelegate = delegate;
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x0059, code lost:
    
        if (r0 != false) goto L17;
     */
    /* JADX WARN: Code restructure failed: missing block: B:15:0x005b, code lost:
    
        android.util.Log.v(com.openfeint.internal.OpenFeintInternal.TAG, java.lang.String.format("Couldn't find ActivityInfo for %s.\nPlease consult README.txt for the correct configuration.", r7));
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0072, code lost:
    
        r4 = r4 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:?, code lost:
    
        return false;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static boolean validateManifest(Context appContext) throws PackageManager.NameNotFoundException {
        boolean victory;
        boolean victory2;
        PackageManager packageManager = appContext.getPackageManager();
        try {
            PackageInfo packageInfo = packageManager.getPackageInfo(appContext.getPackageName(), 4097);
            String[] neededActivityInfo = {"com.openfeint.api.ui.Dashboard", "com.openfeint.internal.ui.IntroFlow", "com.openfeint.internal.ui.Settings", "com.openfeint.internal.ui.NativeBrowser"};
            int len$ = neededActivityInfo.length;
            int i$ = 0;
            while (i$ < len$) {
                String n = neededActivityInfo[i$];
                ActivityInfo[] arr$ = packageInfo.activities;
                int len$2 = arr$.length;
                int i$2 = 0;
                while (true) {
                    if (i$2 >= len$2) {
                        victory2 = false;
                        break;
                    }
                    ActivityInfo ai = arr$[i$2];
                    if (!ai.name.equals(n)) {
                        i$2++;
                    } else {
                        if (ai.configChanges != 160) {
                            Log.v(TAG, String.format("ActivityInfo for %s has the wrong configChanges.\nPlease consult README.txt for the correct configuration.", n));
                            return false;
                        }
                        victory2 = true;
                    }
                }
            }
            String[] neededPermissionInfo = {"android.permission.INTERNET"};
            for (String n2 : neededPermissionInfo) {
                String[] arr$2 = packageInfo.requestedPermissions;
                int len$3 = arr$2.length;
                int i$3 = 0;
                while (true) {
                    if (i$3 >= len$3) {
                        victory = false;
                        break;
                    }
                    String p = arr$2[i$3];
                    if (!p.equals(n2)) {
                        i$3++;
                    } else {
                        victory = true;
                        break;
                    }
                }
                if (!victory) {
                    Log.v(TAG, String.format("Permission '%s' not requested in manifest..\nPlease consult README.txt for the correct configuration.", n2));
                    return false;
                }
                if (appContext.getPackageManager().checkPermission(n2, appContext.getPackageName()) != 0) {
                    return false;
                }
            }
            return true;
        } catch (PackageManager.NameNotFoundException e) {
            Log.v(TAG, String.format("Couldn't find PackageInfo for %s.\nPlease initialize OF with an Activity that lives in your root package.", appContext.getPackageName()));
            return false;
        }
    }

    private OpenFeintInternal(OpenFeintSettings settings, Context ctx) throws Resources.NotFoundException {
        sInstance = this;
        this.mContext = ctx;
        this.mSettings = settings;
        SyncedStore.Reader r = getPrefs().read();
        try {
            this.mDeclined = r.getString(new StringBuilder().append(getContext().getPackageName()).append(".of_declined").toString(), null) != null;
            r.complete();
            this.mMainThreadHandler = new Handler();
            this.mInternalProperties = new Properties();
            this.mInternalProperties.put("server-url", "https://api.openfeint.com");
            this.mInternalProperties.put("of-version", "1.6.1");
            loadPropertiesFromXMLResource(this.mInternalProperties, getResource("@xml/openfeint_internal_settings"));
            Log.i(TAG, "Using OpenFeint version " + this.mInternalProperties.get("of-version") + " (" + this.mInternalProperties.get("server-url") + ")");
            Properties appProperties = new Properties();
            loadPropertiesFromXMLResource(appProperties, getResource("@xml/openfeint_app_settings"));
            this.mSettings.applyOverrides(appProperties);
            this.mSettings.verify();
            this.mClient = new Client(this.mSettings.key, this.mSettings.secret, getPrefs());
            Util.moveWebCache(ctx);
            WebViewCache.initialize(ctx);
            DB.createDB(ctx);
            WebViewCache.start();
            this.analytics = new Analytics();
        } catch (Throwable th) {
            r.complete();
            throw th;
        }
    }

    public Analytics getAnalytics() {
        return this.analytics;
    }

    public String getUserName() {
        User user = getCurrentUser();
        if (user != null) {
            return user.name;
        }
        User user2 = lastLoggedInUser();
        if (user2 != null) {
            return user2.name;
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final User lastLoggedInUser() {
        User savedUser = loadUser();
        SyncedStore.Reader r = getPrefs().read();
        try {
            URL saved = new URL(getServerUrl());
            URL loaded = new URL(r.getString("last_logged_in_server", ""));
            if (savedUser != null) {
                if (saved.equals(loaded)) {
                    return savedUser;
                }
            }
        } catch (MalformedURLException e) {
        } finally {
            r.complete();
        }
        return null;
    }

    public void login() {
        Runnable r = new Runnable() { // from class: com.openfeint.internal.OpenFeintInternal.11
            @Override // java.lang.Runnable
            public void run() throws Resources.NotFoundException {
                if (!OpenFeintInternal.this.mDeclined && !OpenFeintInternal.this.mCurrentlyLoggingIn && !OpenFeintInternal.this.isUserLoggedIn()) {
                    OpenFeintInternal.this.mDeserializedAlready = true;
                    final User savedUser = OpenFeintInternal.this.lastLoggedInUser();
                    if (savedUser == null) {
                        OpenFeintInternal.log(OpenFeintInternal.TAG, "No last user, launch intro flow");
                        OpenFeintInternal.this.clearPrefs();
                        OpenFeintInternal.this.launchIntroFlow();
                    } else {
                        OpenFeintInternal.log(OpenFeintInternal.TAG, "Logging in last known user: " + savedUser.name);
                        OpenFeintInternal.this.loginUser(null, null, null, new IRawRequestDelegate() { // from class: com.openfeint.internal.OpenFeintInternal.11.1
                            @Override // com.openfeint.internal.request.IRawRequestDelegate
                            public void onResponse(int responseCode, String responseBody) throws Resources.NotFoundException {
                                if (200 > responseCode || responseCode >= 300) {
                                    if (403 == responseCode) {
                                        OpenFeintInternal.this.mBanned = true;
                                        return;
                                    } else {
                                        OpenFeintInternal.this.launchIntroFlow();
                                        return;
                                    }
                                }
                                SimpleNotification.show("Welcome back " + savedUser.name);
                            }
                        });
                    }
                }
            }
        };
        this.mMainThreadHandler.post(r);
    }

    private boolean checkBan() {
        if (!this.mBanned) {
            return false;
        }
        displayErrorDialog(getContext().getText(R.string.of_banned_dialog));
        return true;
    }

    public void launchIntroFlow() throws Resources.NotFoundException {
        if (!checkBan()) {
            if (isFeintServerReachable()) {
                OpenFeintDelegate d = getDelegate();
                if (this.mApproved || d == null || !d.showCustomApprovalFlow(getContext())) {
                    Runnable r = new Runnable() { // from class: com.openfeint.internal.OpenFeintInternal.12
                        @Override // java.lang.Runnable
                        public void run() {
                            Intent i = new Intent(OpenFeintInternal.this.getContext(), (Class<?>) IntroFlow.class);
                            if (OpenFeintInternal.this.mApproved) {
                                i.putExtra("content_name", "index?preapproved=true");
                            }
                            i.addFlags(268435456);
                            OpenFeintInternal.this.getContext().startActivity(i);
                        }
                    };
                    if (this.mCreatingDeviceSession || !this.mDeviceSessionCreated) {
                        if (!this.mCreatingDeviceSession) {
                            createDeviceSession();
                        }
                        this.mPostDeviceSessionRunnable = r;
                        return;
                    }
                    r.run();
                    return;
                }
                return;
            }
            showOfflineNotification(0, "");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showOfflineNotification(int httpCode, Object responseBody) throws Resources.NotFoundException {
        Resources r = getContext().getResources();
        String serverMessage = r.getString(R.string.of_offline_notification_line2);
        if (httpCode != 0) {
            if (403 == httpCode) {
                this.mBanned = true;
            }
            if (responseBody instanceof ServerException) {
                serverMessage = ((ServerException) responseBody).message;
            }
        }
        TwoLineNotification.show(r.getString(R.string.of_offline_notification), serverMessage, Notification.Category.Foreground, Notification.Type.NetworkOffline);
        log("Reachability", "Unable to launch IntroFlow because: " + serverMessage);
    }

    private void loadPropertiesFromXMLResource(Properties defaults, int resourceID) throws Resources.NotFoundException {
        XmlResourceParser xml = null;
        try {
            xml = getContext().getResources().getXml(resourceID);
        } catch (Exception e) {
        }
        if (xml != null) {
            String k = null;
            try {
                int eventType = xml.getEventType();
                while (xml.getEventType() != 1) {
                    if (eventType == 2) {
                        k = xml.getName();
                    } else if (xml.getEventType() == 4) {
                        defaults.setProperty(k, xml.getText());
                    }
                    xml.next();
                    eventType = xml.getEventType();
                }
                xml.close();
            } catch (Exception e2) {
                throw new RuntimeException(e2);
            }
        }
    }

    public boolean isFeintServerReachable() {
        ConnectivityManager conMan = (ConnectivityManager) getContext().getSystemService("connectivity");
        NetworkInfo activeNetwork = conMan.getActiveNetworkInfo();
        return activeNetwork != null && activeNetwork.isConnected();
    }

    public static void log(String tag, String message) {
    }
}
