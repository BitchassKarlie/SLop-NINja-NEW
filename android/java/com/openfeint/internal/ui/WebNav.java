package com.openfeint.internal.ui;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.content.res.Configuration;
import android.net.Uri;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.animation.AlphaAnimation;
import android.webkit.JsResult;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.ProgressBar;
import android.widget.Toast;
import com.halfbrick.fruitninja.R;
import com.openfeint.api.OpenFeintDelegate;
import com.openfeint.api.resource.Score;
import com.openfeint.api.resource.User;
import com.openfeint.api.ui.Dashboard;
import com.openfeint.internal.ImagePicker;
import com.openfeint.internal.JsonResourceParser;
import com.openfeint.internal.OpenFeintInternal;
import com.openfeint.internal.Util;
import com.openfeint.internal.request.IRawRequestDelegate;
import com.openfeint.internal.resource.ScoreBlobDelegate;
import java.io.StringReader;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.codehaus.jackson.JsonFactory;
import org.codehaus.jackson.JsonParser;
import org.json.JSONArray;
import org.json.JSONObject;

/* loaded from: classes.dex */
public class WebNav extends Activity {
    protected static final int REQUEST_CODE_NATIVE_BROWSER = 25565;
    protected static final String TAG = "WebUI";
    ActionHandler mActionHandler;
    Dialog mLaunchLoadingView;
    private WebView mWebView;
    private WebNavClient mWebViewClient;
    protected int pageStackCount;
    boolean mIsFrameworkLoaded = false;
    boolean mIsVisible = false;
    private boolean mShouldRefreshOnResume = true;
    protected ArrayList<String> mPreloadConsoleOutput = new ArrayList<>();
    private Map<String, String> mNativeBrowserParameters = null;

    /* JADX INFO: Access modifiers changed from: private */
    public ImagePicker createImagePicker() {
        return new ImagePicker(this, "/xp/users/" + OpenFeintInternal.getInstance().getCurrentUser().resourceID() + "/profile_picture", 152);
    }

    @Override // android.app.Activity
    protected void onSaveInstanceState(Bundle outState) {
        OpenFeintInternal.saveInstanceState(outState);
    }

    @Override // android.app.Activity
    protected void onRestoreInstanceState(Bundle inState) {
        OpenFeintInternal.restoreInstanceState(inState);
    }

    public ActionHandler getActionHandler() {
        return this.mActionHandler;
    }

    public Dialog getLaunchLoadingView() {
        return this.mLaunchLoadingView;
    }

    protected void setFrameworkLoaded(boolean value) {
        this.mIsFrameworkLoaded = value;
    }

    @Override // android.app.Activity
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Util.setOrientation(this);
        setContentView(R.layout.of_webnav);
        OpenFeintInternal.log(TAG, "--- WebUI Bootup ---");
        this.pageStackCount = 0;
        this.mWebView = (WebView) findViewById(R.id.webview);
        this.mWebView.getSettings().setJavaScriptEnabled(true);
        this.mWebView.setScrollBarStyle(33554432);
        this.mWebView.getSettings().setCacheMode(2);
        this.mLaunchLoadingView = new Dialog(this, R.style.OFLoading);
        this.mLaunchLoadingView.setOnCancelListener(new DialogInterface.OnCancelListener() { // from class: com.openfeint.internal.ui.WebNav.1
            @Override // android.content.DialogInterface.OnCancelListener
            public void onCancel(DialogInterface dialog) {
                WebNav.this.finish();
            }
        });
        this.mLaunchLoadingView.setCancelable(true);
        this.mLaunchLoadingView.setContentView(R.layout.of_native_loader);
        ProgressBar progress = (ProgressBar) this.mLaunchLoadingView.findViewById(R.id.progress);
        progress.setIndeterminate(true);
        progress.setIndeterminateDrawable(OpenFeintInternal.getInstance().getContext().getResources().getDrawable(R.drawable.of_native_loader_progress));
        this.mLaunchLoadingView.show();
        this.mActionHandler = createActionHandler(this);
        this.mWebViewClient = new WebNavClient(this.mActionHandler);
        this.mWebView.setWebViewClient(this.mWebViewClient);
        this.mWebView.setWebChromeClient(new WebNavChromeClient());
        this.mWebView.addJavascriptInterface(new Object() { // from class: com.openfeint.internal.ui.WebNav.2
            public void action(final String actionUri) {
                WebNav.this.runOnUiThread(new Runnable() { // from class: com.openfeint.internal.ui.WebNav.2.1
                    @Override // java.lang.Runnable
                    public void run() throws IllegalAccessException, IllegalArgumentException, InvocationTargetException {
                        WebNav.this.getActionHandler().dispatch(Uri.parse(actionUri));
                    }
                });
            }

            public void frameworkLoaded() {
                WebNav.this.setFrameworkLoaded(true);
            }
        }, "NativeInterface");
        String path = initialContentPath();
        if (path.contains("?")) {
            path = path.split("\\?")[0];
        }
        if (!path.endsWith(".json")) {
            path = path + ".json";
        }
        WebViewCache.prioritize(path);
        load(false);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void load(final boolean reload) {
        WebViewCache.trackPath("index.html", new WebViewCacheCallback() { // from class: com.openfeint.internal.ui.WebNav.3
            @Override // com.openfeint.internal.ui.WebViewCacheCallback
            public void pathLoaded(String itemPath) {
                if (WebNav.this.mWebView != null) {
                    String url = WebViewCache.getItemUri(itemPath);
                    OpenFeintInternal.log(WebNav.TAG, "Loading URL: " + url);
                    if (reload) {
                        WebNav.this.mWebView.reload();
                    } else {
                        WebNav.this.mWebView.loadUrl(url);
                    }
                }
            }
        });
    }

    private static final String jsQuotedStringLiteral(String unquotedString) {
        return unquotedString == null ? "''" : "'" + unquotedString.replace("\\", "\\\\").replace("'", "\\'") + "'";
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        User localUser = OpenFeintInternal.getInstance().getCurrentUser();
        if (localUser != null && this.mIsFrameworkLoaded) {
            executeJavascript(String.format("if (OF.user) { OF.user.name = %s; OF.user.id = '%s'; }", jsQuotedStringLiteral(localUser.name), localUser.resourceID()));
            if (this.mShouldRefreshOnResume) {
                executeJavascript("if (OF.page) OF.refresh();");
            }
        }
        this.mShouldRefreshOnResume = true;
    }

    @Override // android.app.Activity
    public void onStop() {
        super.onStop();
        dismissDialog();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void dismissDialog() {
        if (this.mLaunchLoadingView.isShowing()) {
            this.mLaunchLoadingView.dismiss();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showDialog() {
        if (!this.mLaunchLoadingView.isShowing()) {
            this.mLaunchLoadingView.show();
        }
    }

    @Override // android.app.Activity, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration newConfig) {
        String orientationString;
        super.onConfigurationChanged(newConfig);
        if (newConfig.orientation == 2) {
            orientationString = "landscape";
        } else {
            orientationString = "portrait";
        }
        executeJavascript(String.format("OF.setOrientation('%s');", orientationString));
    }

    public void loadInitialContent() {
        String path = initialContentPath();
        if (path.contains("?")) {
            path = path.split("\\?")[0];
        }
        if (!path.endsWith(".json")) {
            path = path + ".json";
        }
        WebViewCache.trackPath(path, new WebViewCacheCallback() { // from class: com.openfeint.internal.ui.WebNav.4
            @Override // com.openfeint.internal.ui.WebViewCacheCallback
            public void pathLoaded(String itemPath) {
                WebNav.this.executeJavascript("OF.navigateToUrl('" + WebNav.this.initialContentPath() + "')");
            }
        });
    }

    protected ActionHandler createActionHandler(WebNav webNav) {
        return new ActionHandler(webNav);
    }

    protected String initialContentPath() {
        String contentPath = getIntent().getStringExtra("content_path");
        if (contentPath == null) {
            throw new RuntimeException("WebNav intent requires extra value 'content_path'");
        }
        return contentPath;
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        if (keyCode == 84) {
            executeJavascript(String.format("OF.menu('%s')", "search"));
            return true;
        }
        if (keyCode == 4 && this.pageStackCount > 1) {
            executeJavascript("OF.goBack()");
            return true;
        }
        return super.onKeyDown(keyCode, event);
    }

    public void executeJavascript(String js) {
        if (this.mWebView != null) {
            this.mWebView.loadUrl("javascript:" + js);
        }
    }

    public void fade(boolean toVisible) {
        if (this.mWebView != null && this.mIsVisible != toVisible) {
            this.mIsVisible = toVisible;
            AlphaAnimation anim = new AlphaAnimation(toVisible ? 0.0f : 1.0f, toVisible ? 1.0f : 0.0f);
            anim.setDuration(toVisible ? 200L : 0L);
            anim.setFillAfter(true);
            this.mWebView.startAnimation(anim);
            if (this.mWebView.getVisibility() == 4) {
                this.mWebView.setVisibility(0);
            }
        }
    }

    private class WebNavClient extends WebViewClient {
        ActionHandler mActionHandler;

        public WebNavClient(ActionHandler anActionHandler) {
            this.mActionHandler = anActionHandler;
        }

        @Override // android.webkit.WebViewClient
        public boolean shouldOverrideUrlLoading(WebView view, String stringUrl) throws IllegalAccessException, IllegalArgumentException, InvocationTargetException {
            Uri uri = Uri.parse(stringUrl);
            if (uri.getScheme().equals("http") || uri.getScheme().equals("https")) {
                view.loadUrl(stringUrl);
                return true;
            }
            if (uri.getScheme().equals("openfeint")) {
                this.mActionHandler.dispatch(uri);
                return true;
            }
            OpenFeintInternal.log(WebNav.TAG, "UNHANDLED PROTOCOL: " + uri.getScheme());
            return true;
        }

        @Override // android.webkit.WebViewClient
        public void onReceivedError(WebView view, int errorCode, String description, String failingUrl) {
            this.mActionHandler.hideLoader(null);
        }

        @Override // android.webkit.WebViewClient
        public void onPageFinished(WebView view, String url) {
            if (WebNav.this.mIsFrameworkLoaded) {
                loadInitialContent();
            } else {
                recover();
                new AlertDialog.Builder(view.getContext()).setMessage(OpenFeintInternal.getRString(R.string.of_crash_report_query)).setNegativeButton(OpenFeintInternal.getRString(R.string.of_no), new DialogInterface.OnClickListener() { // from class: com.openfeint.internal.ui.WebNav.WebNavClient.2
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialog, int which) {
                        WebNav.this.finish();
                    }
                }).setPositiveButton(OpenFeintInternal.getRString(R.string.of_yes), new DialogInterface.OnClickListener() { // from class: com.openfeint.internal.ui.WebNav.WebNavClient.1
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialog, int which) {
                        WebNavClient.this.submitCrashReport();
                    }
                }).show();
            }
        }

        private void recover() {
            if (WebViewCache.recover()) {
                WebNav.this.load(true);
            } else {
                WebNav.this.finish();
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void submitCrashReport() {
            Map<String, Object> crashReport = new HashMap<>();
            crashReport.put("console", new JSONArray((Collection) WebNav.this.mPreloadConsoleOutput));
            JSONObject json = new JSONObject(crashReport);
            Map<String, Object> params = new HashMap<>();
            params.put("crash_report", json.toString());
            OpenFeintInternal.genericRequest("/webui/crash_report", "POST", params, null, null);
        }

        public void loadInitialContent() {
            OpenFeintInternal of = OpenFeintInternal.getInstance();
            User localUser = of.getCurrentUser();
            int orientation = WebNav.this.getResources().getConfiguration().orientation;
            HashMap<String, Object> user = new HashMap<>();
            if (localUser != null) {
                user.put("id", localUser.resourceID());
                user.put("name", localUser.name);
            }
            HashMap<String, Object> game = new HashMap<>();
            game.put("id", of.getAppID());
            game.put("name", of.getAppName());
            game.put("version", of.getAppVersion());
            Map<String, Object> device = OpenFeintInternal.getInstance().getDeviceParams();
            HashMap<String, Object> config = new HashMap<>();
            config.put("platform", "android");
            config.put("clientVersion", of.getOFVersion());
            config.put("hasNativeInterface", true);
            config.put("dpi", Util.getDpiName(WebNav.this));
            config.put("locale", WebNav.this.getResources().getConfiguration().locale.toString());
            config.put("user", new JSONObject(user));
            config.put("game", new JSONObject(game));
            config.put("device", new JSONObject(device));
            config.put("actions", new JSONArray((Collection) WebNav.this.getActionHandler().getActionList()));
            config.put("orientation", orientation == 2 ? "landscape" : "portrait");
            config.put("serverUrl", of.getServerUrl());
            JSONObject json = new JSONObject(config);
            WebNav.this.executeJavascript(String.format("OF.init.clientBoot(%s)", json.toString()));
            this.mActionHandler.mWebNav.loadInitialContent();
        }
    }

    private class WebNavChromeClient extends WebChromeClient {
        private WebNavChromeClient() {
        }

        @Override // android.webkit.WebChromeClient
        public boolean onJsAlert(WebView view, String url, String message, final JsResult result) {
            new AlertDialog.Builder(view.getContext()).setMessage(message).setNegativeButton(OpenFeintInternal.getRString(R.string.of_ok), new DialogInterface.OnClickListener() { // from class: com.openfeint.internal.ui.WebNav.WebNavChromeClient.2
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialog, int which) {
                    result.cancel();
                }
            }).setOnCancelListener(new DialogInterface.OnCancelListener() { // from class: com.openfeint.internal.ui.WebNav.WebNavChromeClient.1
                @Override // android.content.DialogInterface.OnCancelListener
                public void onCancel(DialogInterface dialog) {
                    result.cancel();
                }
            }).show();
            return true;
        }

        @Override // android.webkit.WebChromeClient
        public boolean onJsConfirm(WebView view, String url, String message, final JsResult result) {
            new AlertDialog.Builder(view.getContext()).setMessage(message).setPositiveButton(OpenFeintInternal.getRString(R.string.of_ok), new DialogInterface.OnClickListener() { // from class: com.openfeint.internal.ui.WebNav.WebNavChromeClient.5
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialog, int which) {
                    result.confirm();
                }
            }).setNegativeButton(OpenFeintInternal.getRString(R.string.of_cancel), new DialogInterface.OnClickListener() { // from class: com.openfeint.internal.ui.WebNav.WebNavChromeClient.4
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialog, int which) {
                    result.cancel();
                }
            }).setOnCancelListener(new DialogInterface.OnCancelListener() { // from class: com.openfeint.internal.ui.WebNav.WebNavChromeClient.3
                @Override // android.content.DialogInterface.OnCancelListener
                public void onCancel(DialogInterface dialog) {
                    result.cancel();
                }
            }).show();
            return true;
        }

        @Override // android.webkit.WebChromeClient
        public void onConsoleMessage(String message, int lineNumber, String sourceID) {
            if (!WebNav.this.mIsFrameworkLoaded) {
                String line = String.format("%s at %s:%d)", message, sourceID, Integer.valueOf(lineNumber));
                WebNav.this.mPreloadConsoleOutput.add(line);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    public class ActionHandler {
        List<String> mActionList = new ArrayList();
        WebNav mWebNav;

        protected List<String> getActionList() {
            return this.mActionList;
        }

        public ActionHandler(WebNav webNav) {
            this.mWebNav = webNav;
            populateActionList(this.mActionList);
        }

        protected void populateActionList(List<String> actionList) {
            actionList.add("log");
            actionList.add("apiRequest");
            actionList.add("contentLoaded");
            actionList.add("startLoading");
            actionList.add("back");
            actionList.add("showLoader");
            actionList.add("hideLoader");
            actionList.add("alert");
            actionList.add("dismiss");
            actionList.add("openMarket");
            actionList.add("isApplicationInstalled");
            actionList.add("openYoutubePlayer");
            actionList.add("profilePicture");
            actionList.add("openBrowser");
            actionList.add("downloadBlob");
            actionList.add("dashboard");
        }

        public void dispatch(Uri uri) throws IllegalAccessException, IllegalArgumentException, InvocationTargetException {
            if (uri.getHost().equals("action")) {
                Map<String, Object> options = parseQueryString(uri);
                String actionName = uri.getPath().replaceFirst("/", "");
                if (!actionName.equals("log")) {
                    Map<String, Object> escapedOptions = new HashMap<>(options);
                    String params = (String) options.get("params");
                    if (params != null && params.contains("password")) {
                        escapedOptions.put("params", "---FILTERED---");
                    }
                    OpenFeintInternal.log(WebNav.TAG, "ACTION: " + actionName + " " + escapedOptions.toString());
                }
                if (this.mActionList.contains(actionName)) {
                    try {
                        getClass().getMethod(actionName, Map.class).invoke(this, options);
                        return;
                    } catch (NoSuchMethodException e) {
                        OpenFeintInternal.log(WebNav.TAG, "mActionList contains this method, but it is not implemented: " + actionName);
                        return;
                    } catch (Exception e2) {
                        OpenFeintInternal.log(WebNav.TAG, "Unhandled Exception: " + e2.toString() + "   " + e2.getCause());
                        return;
                    }
                }
                OpenFeintInternal.log(WebNav.TAG, "UNHANDLED ACTION: " + actionName);
                return;
            }
            OpenFeintInternal.log(WebNav.TAG, "UNHANDLED MESSAGE TYPE: " + uri.getHost());
        }

        private Map<String, Object> parseQueryString(Uri uri) {
            return parseQueryString(uri.getEncodedQuery());
        }

        private Map<String, Object> parseQueryString(String queryString) {
            Map<String, Object> options = new HashMap<>();
            if (queryString != null) {
                String[] pairs = queryString.split("&");
                for (String stringPair : pairs) {
                    String[] pair = stringPair.split("=");
                    if (pair.length == 2) {
                        options.put(pair[0], Uri.decode(pair[1]));
                    } else {
                        options.put(pair[0], null);
                    }
                }
            }
            return options;
        }

        public void apiRequest(Map<String, String> options) {
            final String requestID = options.get("request_id");
            Map<String, Object> params = parseQueryString(options.get("params"));
            Map<String, Object> httpParams = parseQueryString(options.get("httpParams"));
            OpenFeintInternal.genericRequest(options.get("path"), options.get("method"), params, httpParams, new IRawRequestDelegate() { // from class: com.openfeint.internal.ui.WebNav.ActionHandler.1
                @Override // com.openfeint.internal.request.IRawRequestDelegate
                public void onResponse(int statusCode, String responseBody) {
                    String response = responseBody.trim();
                    if (response.length() == 0) {
                        response = "{}";
                    }
                    String js = String.format("OF.api.completeRequest(\"%s\", \"%d\", %s)", requestID, Integer.valueOf(statusCode), response);
                    ActionHandler.this.mWebNav.executeJavascript(js);
                }
            });
        }

        public void contentLoaded(Map<String, String> options) {
            if (options.get("keepLoader") == null || !options.get("keepLoader").equals("true")) {
                hideLoader(null);
                WebNav.this.setTitle(options.get("title"));
            }
            this.mWebNav.fade(true);
            WebNav.this.dismissDialog();
        }

        public void startLoading(Map<String, String> options) {
            this.mWebNav.fade(false);
            showLoader(null);
            WebViewCache.trackPath(options.get("path"), new WebViewCacheCallback() { // from class: com.openfeint.internal.ui.WebNav.ActionHandler.2
                @Override // com.openfeint.internal.ui.WebViewCacheCallback
                public void pathLoaded(String itemPath) {
                    WebNav.this.executeJavascript("OF.navigateToUrlCallback()");
                }

                @Override // com.openfeint.internal.ui.WebViewCacheCallback
                public void onTrackingNeeded() {
                    WebNav.this.showDialog();
                }
            });
            this.mWebNav.pageStackCount++;
        }

        public void back(Map<String, String> options) {
            this.mWebNav.fade(false);
            String root = options.get("root");
            if (root != null && !root.equals("false")) {
                this.mWebNav.pageStackCount = 1;
            }
            if (this.mWebNav.pageStackCount > 1) {
                this.mWebNav.pageStackCount--;
            }
        }

        public void showLoader(Map<String, String> options) {
        }

        public void hideLoader(Map<String, String> options) {
        }

        public void log(Map<String, String> options) {
            String message = options.get("message");
            if (message != null) {
                OpenFeintInternal.log(WebNav.TAG, "WEBLOG: " + options.get("message"));
            }
        }

        public void alert(Map<String, String> options) {
            AlertDialog.Builder builder = new AlertDialog.Builder(this.mWebNav);
            builder.setTitle(options.get("title"));
            builder.setMessage(options.get("message"));
            builder.setNegativeButton(OpenFeintInternal.getRString(R.string.of_ok), (DialogInterface.OnClickListener) null);
            builder.show();
        }

        public void dismiss(Map<String, String> options) {
            WebNav.this.finish();
        }

        public void openMarket(Map<String, String> options) {
            String packageName = options.get("package_name");
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse("market://details?id=" + packageName));
            this.mWebNav.startActivity(intent);
        }

        public void isApplicationInstalled(Map<String, String> options) {
            boolean installed = false;
            PackageManager manager = this.mWebNav.getPackageManager();
            List<ApplicationInfo> installedApps = manager.getInstalledApplications(0);
            String searchString = options.get("package_name");
            for (ApplicationInfo info : installedApps) {
                if (info.packageName.equals(searchString)) {
                    installed = true;
                }
            }
            WebNav webNav = WebNav.this;
            Object[] objArr = new Object[2];
            objArr[0] = options.get("callback");
            objArr[1] = installed ? "true" : "false";
            webNav.executeJavascript(String.format("%s(%s)", objArr));
        }

        public void openYoutubePlayer(Map<String, String> options) {
            String videoID = options.get("video_id");
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse("vnd.youtube:" + videoID));
            List<ResolveInfo> list = WebNav.this.getPackageManager().queryIntentActivities(intent, 65536);
            if (list.size() == 0) {
                Toast.makeText(this.mWebNav, OpenFeintInternal.getRString(R.string.of_no_video), 0).show();
            } else {
                this.mWebNav.startActivity(intent);
            }
        }

        public final void profilePicture(Map<String, String> options) {
            WebNav.this.createImagePicker().show();
        }

        public void openBrowser(Map<String, String> options) {
            Intent browserIntent = new Intent(this.mWebNav, (Class<?>) NativeBrowser.class);
            WebNav.this.mNativeBrowserParameters = new HashMap();
            String[] arr$ = {"src", "callback", "on_cancel", "on_failure", "timeout"};
            for (String arg : arr$) {
                String val = options.get(arg);
                if (val != null) {
                    WebNav.this.mNativeBrowserParameters.put(arg, val);
                    browserIntent.putExtra(NativeBrowser.INTENT_ARG_PREFIX + arg, val);
                }
            }
            WebNav.this.startActivityForResult(browserIntent, WebNav.REQUEST_CODE_NATIVE_BROWSER);
        }

        public void downloadBlob(Map<String, String> options) {
            String scoreJSON = options.get("score");
            final String onError = options.get("onError");
            final String onSuccess = options.get("onSuccess");
            try {
                JsonFactory jsonFactory = new JsonFactory();
                JsonParser jp = jsonFactory.createJsonParser(new StringReader(scoreJSON));
                JsonResourceParser jrp = new JsonResourceParser(jp);
                Object scoreObject = jrp.parse();
                if (scoreObject != null && (scoreObject instanceof Score)) {
                    final Score score = (Score) scoreObject;
                    score.downloadBlob(new Score.DownloadBlobCB() { // from class: com.openfeint.internal.ui.WebNav.ActionHandler.3
                        @Override // com.openfeint.api.resource.Score.DownloadBlobCB
                        public void onSuccess() {
                            if (onSuccess != null) {
                                WebNav.this.executeJavascript(String.format("%s()", onSuccess));
                            }
                            ScoreBlobDelegate.notifyBlobDownloaded(score);
                        }

                        @Override // com.openfeint.internal.APICallback
                        public void onFailure(String exceptionMessage) {
                            if (onError != null) {
                                WebNav.this.executeJavascript(String.format("%s(%s)", onError, exceptionMessage));
                            }
                        }
                    });
                }
            } catch (Exception e) {
                if (onError != null) {
                    WebNav.this.executeJavascript(String.format("%s(%s)", onError, e.getLocalizedMessage()));
                }
            }
        }

        public void dashboard(Map<String, String> options) {
            OpenFeintInternal.getInstance().login();
            Dashboard.open();
        }
    }

    @Override // android.app.Activity
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (this.mNativeBrowserParameters != null && requestCode == REQUEST_CODE_NATIVE_BROWSER) {
            if (resultCode != 0) {
                this.mShouldRefreshOnResume = false;
                if (data.getBooleanExtra("com.openfeint.internal.ui.NativeBrowser.argument.failed", false)) {
                    String cb = this.mNativeBrowserParameters.get("on_failure");
                    if (cb != null) {
                        int code = data.getIntExtra("com.openfeint.internal.ui.NativeBrowser.argument.failure_code", 0);
                        String desc = data.getStringExtra("com.openfeint.internal.ui.NativeBrowser.argument.failure_desc");
                        executeJavascript(String.format("%s(%d, %s)", cb, Integer.valueOf(code), jsQuotedStringLiteral(desc)));
                    }
                } else {
                    String cb2 = this.mNativeBrowserParameters.get("callback");
                    if (cb2 != null) {
                        String rv = data.getStringExtra("com.openfeint.internal.ui.NativeBrowser.argument.result");
                        Object[] objArr = new Object[2];
                        objArr[0] = cb2;
                        objArr[1] = rv != null ? rv : "";
                        executeJavascript(String.format("%s(%s)", objArr));
                    }
                }
            } else {
                String cb3 = this.mNativeBrowserParameters.get("on_cancel");
                if (cb3 != null) {
                    executeJavascript(String.format("%s()", cb3));
                }
            }
            this.mNativeBrowserParameters = null;
            return;
        }
        if (requestCode == 10009) {
            ImagePicker ip = createImagePicker();
            ip.onActivityResult(requestCode, resultCode, data);
        }
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        OpenFeintDelegate d = OpenFeintInternal.getInstance().getDelegate();
        if (d != null) {
            if (hasFocus) {
                d.onDashboardAppear();
            } else {
                d.onDashboardDisappear();
            }
        }
    }

    @Override // android.app.Activity
    public void onDestroy() {
        this.mWebView.destroy();
        this.mWebView = null;
        super.onDestroy();
    }
}
