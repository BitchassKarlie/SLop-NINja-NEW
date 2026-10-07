package com.openfeint.internal.ui;

import android.content.Context;
import android.database.Cursor;
import android.database.SQLException;
import android.database.sqlite.SQLiteDatabase;
import android.os.Environment;
import android.os.Handler;
import android.os.Message;
import com.openfeint.internal.OpenFeintInternal;
import com.openfeint.internal.Util;
import com.openfeint.internal.db.DB;
import com.openfeint.internal.request.BaseRequest;
import com.openfeint.internal.request.CacheRequest;
import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.URI;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.parsers.SAXParser;
import javax.xml.parsers.SAXParserFactory;
import org.xml.sax.Attributes;
import org.xml.sax.InputSource;
import org.xml.sax.SAXException;
import org.xml.sax.XMLReader;
import org.xml.sax.helpers.DefaultHandler;

/* loaded from: classes.dex */
public class WebViewCache {
    private static final String ManifestRequestKey = "manifest";
    private static final String OPENFEINT_ROOT = "openfeint";
    static final String TAG = "WebViewCache";
    private static final String WEBUI = "webui";
    static final int kClientManifestReady = 2;
    static final int kDataLoaded = 1;
    static final int kServerManifestReady = 0;
    static boolean loadingFinished = false;
    public static String manifestPrefixOverride;
    private static String rootPath;
    private static String rootUri;
    static WebViewCache sInstance;
    public static URI serverOverride;
    Context appContext;
    Map<String, String> clientManifest;
    WebViewCacheCallback delegate;
    ManifestData serverManifest;
    final URI serverURI = getServerURI();
    Set<PathAndCallback> trackedPaths = new HashSet();
    Map<String, ItemAndCallback> trackedItems = new HashMap();
    Set<String> pathsToLoad = new HashSet();
    Set<String> prioritizedPaths = new HashSet();
    Handler mHandler = new Handler() { // from class: com.openfeint.internal.ui.WebViewCache.3
        @Override // android.os.Handler
        public void dispatchMessage(Message msg) throws SQLException {
            switch (msg.what) {
                case 0:
                    OpenFeintInternal.log(WebViewCache.TAG, "kServerManifestReady");
                    WebViewCache.this.serverManifest = (ManifestData) msg.obj;
                    WebViewCache.this.triggerUpdates();
                    break;
                case 1:
                    WebViewCache.this.finishItem((String) msg.obj, msg.arg1 > 0);
                    break;
                case 2:
                    WebViewCache.this.clientManifest = (Map) msg.obj;
                    WebViewCache.this.triggerUpdates();
                    break;
            }
        }
    };

    public static WebViewCache initialize(Context context) {
        sInstance = new WebViewCache(context);
        return sInstance;
    }

    public static void prioritize(String path) {
        sInstance.prioritizeInner(path);
    }

    public static boolean trackPath(String path, WebViewCacheCallback cb) {
        return sInstance.trackPathInner(path, cb);
    }

    public static boolean isLoaded(String path) {
        return sInstance.isLoadedInner(path);
    }

    public final void setRootUriSdcard(File path) throws IOException {
        final File webui = new File(path, WEBUI);
        boolean copyDefault = !webui.exists();
        if (copyDefault) {
            File noMedia = new File(path, ".nomedia");
            try {
                noMedia.createNewFile();
            } catch (IOException e) {
            }
            if (!webui.mkdirs()) {
                setRootUriInternal();
                return;
            }
        }
        rootPath = webui.getAbsolutePath() + "/";
        rootUri = "file://" + rootPath;
        if (copyDefault) {
            final File baseDir = this.appContext.getFilesDir();
            final File inPhoneWebui = new File(baseDir, WEBUI);
            if (inPhoneWebui.isDirectory()) {
                try {
                    Util.copyFile(this.appContext.getDatabasePath(DB.DBNAME), new File(webui, DB.DBNAME));
                } catch (IOException e2) {
                }
            }
            Thread t = new Thread(new Runnable() { // from class: com.openfeint.internal.ui.WebViewCache.1
                @Override // java.lang.Runnable
                public void run() {
                    try {
                        if (inPhoneWebui.isDirectory()) {
                            Util.copyDirectory(inPhoneWebui, webui);
                            WebViewCache.this.deleteAll();
                            OpenFeintInternal.log(WebViewCache.TAG, "copy in phone data finish");
                            WebViewCache.this.clientManifestReady();
                        } else {
                            OpenFeintInternal.log(WebViewCache.TAG, "copy from asset");
                            WebViewCache.this.copyDefaultBackground(baseDir);
                        }
                    } catch (IOException e3) {
                        OpenFeintInternal.log(WebViewCache.TAG, e3.getMessage());
                        WebViewCache.this.setRootUriInternal();
                    }
                }
            });
            t.start();
            return;
        }
        clientManifestReady();
        deleteAll();
    }

    public final void setRootUriInternal() {
        OpenFeintInternal.log(TAG, "can't use sdcard");
        final File baseDir = this.appContext.getFilesDir();
        File rootDir = new File(baseDir, WEBUI);
        rootPath = rootDir.getAbsolutePath() + "/";
        rootUri = "file://" + rootPath;
        File inPhoneWebui = new File(baseDir, WEBUI);
        boolean hasInPhoneData = inPhoneWebui.isDirectory();
        if (!hasInPhoneData) {
            Thread t = new Thread(new Runnable() { // from class: com.openfeint.internal.ui.WebViewCache.2
                @Override // java.lang.Runnable
                public void run() throws IOException {
                    WebViewCache.this.copyDefaultBackground(baseDir);
                }
            });
            t.start();
        } else {
            clientManifestReady();
        }
    }

    public static final String getItemUri(String itemPath) {
        return rootUri + itemPath;
    }

    public static void start() {
        sInstance.sync();
    }

    private static class ManifestItem {
        public Set<String> dependentObjects;
        public String hash;
        public String path;

        ManifestItem(String _path, String _hash) {
            this.path = _path;
            this.hash = _hash;
            this.dependentObjects = new HashSet();
        }

        ManifestItem(ManifestItem item) {
            this.path = item.path;
            this.dependentObjects = new HashSet(item.dependentObjects);
        }
    }

    private static class ManifestData {
        Set<String> globals = new HashSet();
        Map<String, ManifestItem> objects = new HashMap();

        ManifestData(byte[] stm) throws Exception {
            Exception e;
            ManifestItem item;
            String path;
            try {
                InputStreamReader reader = new InputStreamReader(new ByteArrayInputStream(stm));
                BufferedReader buffered = new BufferedReader(reader, 8192);
                ManifestItem item2 = null;
                while (true) {
                    try {
                        String line = buffered.readLine();
                        if (line != null) {
                            String line2 = line.trim();
                            if (line2.length() != 0) {
                                switch (line2.charAt(0)) {
                                    case '#':
                                        item = item2;
                                        item2 = item;
                                        break;
                                    case '-':
                                        if (item2 != null) {
                                            item2.dependentObjects.add(line2.substring(1).trim());
                                            item = item2;
                                            item2 = item;
                                            break;
                                        } else {
                                            throw new Exception("Manifest Syntax Error: Dependency without an item");
                                        }
                                    default:
                                        String[] pieces = line2.split(" ");
                                        if (pieces.length >= 2) {
                                            if (pieces[0].charAt(0) == '@') {
                                                path = pieces[0].substring(1);
                                                this.globals.add(path);
                                            } else {
                                                path = pieces[0];
                                            }
                                            item = new ManifestItem(path, pieces[1]);
                                            this.objects.put(path, item);
                                            item2 = item;
                                            break;
                                        } else {
                                            throw new Exception("Manifest Syntax Error: Extra items in line");
                                        }
                                }
                            }
                        } else {
                            return;
                        }
                    } catch (Exception e2) {
                        e = e2;
                        throw new Exception(e);
                    }
                }
            } catch (Exception e3) {
                e = e3;
            }
        }
    }

    private static class ItemAndCallback {
        public final WebViewCacheCallback callback;
        public final ManifestItem item;

        public ItemAndCallback(ManifestItem _item, WebViewCacheCallback _cb) {
            this.item = _item;
            this.callback = _cb;
        }
    }

    private static class PathAndCallback {
        public final WebViewCacheCallback callback;
        public final String path;

        public PathAndCallback(String _path, WebViewCacheCallback _cb) {
            this.path = _path;
            this.callback = _cb;
        }
    }

    private boolean trackPathInner(String path, WebViewCacheCallback cb) {
        if (loadingFinished) {
            cb.pathLoaded(path);
            return false;
        }
        if (this.serverManifest == null) {
            cb.onTrackingNeeded();
            this.trackedPaths.add(new PathAndCallback(path, cb));
            return true;
        }
        ManifestItem loadedItem = this.serverManifest.objects.get(path);
        if (loadedItem != null) {
            cb.onTrackingNeeded();
            ManifestItem newItem = new ManifestItem(loadedItem);
            newItem.dependentObjects.retainAll(this.pathsToLoad);
            this.trackedItems.put(path, new ItemAndCallback(newItem, cb));
            return true;
        }
        cb.pathLoaded(path);
        return false;
    }

    private boolean isLoadedInner(String path) {
        return this.serverManifest == null ? loadingFinished : !this.pathsToLoad.contains(path);
    }

    private WebViewCache(Context _appContext) throws IOException {
        this.appContext = _appContext;
        updateExternalStorageState();
    }

    private void updateExternalStorageState() throws IOException {
        String state = Environment.getExternalStorageState();
        if ("mounted".equals(state)) {
            File sdcard = Environment.getExternalStorageDirectory();
            File feintRoot = new File(sdcard, OPENFEINT_ROOT);
            setRootUriSdcard(feintRoot);
        } else {
            OpenFeintInternal.log(TAG, state);
            setRootUriInternal();
        }
    }

    private void sync() {
        OpenFeintInternal.log(TAG, "--- WebViewCache Sync ---");
        ManifestRequest req = new ManifestRequest(ManifestRequestKey);
        req.launch();
    }

    private class ManifestRequest extends CacheRequest {
        public ManifestRequest(String key) {
            super(key);
        }

        @Override // com.openfeint.internal.request.BaseRequest
        public boolean signed() {
            return false;
        }

        @Override // com.openfeint.internal.request.BaseRequest
        public String path() {
            return WebViewCache.getManifestPath(WebViewCache.this.appContext);
        }

        /* JADX WARN: Removed duplicated region for block: B:13:0x0029  */
        /* JADX WARN: Removed duplicated region for block: B:8:0x0010  */
        @Override // com.openfeint.internal.request.BaseRequest
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public void onResponse(int responseCode, byte[] body) {
            Exception e;
            ManifestData data = null;
            if (responseCode == 200) {
                try {
                    ManifestData data2 = new ManifestData(body);
                    try {
                        super.on200Response();
                        data = data2;
                    } catch (Exception e2) {
                        e = e2;
                        data = data2;
                        OpenFeintInternal.log(WebViewCache.TAG, e.toString());
                        if (data != null) {
                        }
                    }
                } catch (Exception e3) {
                    e = e3;
                }
            }
            if (data != null) {
                WebViewCache.this.finishWithoutLoading();
            } else {
                Message msg = Message.obtain(WebViewCache.this.mHandler, 0, data);
                msg.sendToTarget();
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void deleteAll() {
        File baseDir = this.appContext.getFilesDir();
        File webui = new File(baseDir, WEBUI);
        Util.deleteFiles(webui);
        this.appContext.getDatabasePath(DB.DBNAME).delete();
    }

    private void gatherDefaultItems(String path, Set<String> items) throws IOException {
        try {
            String[] stuff = this.appContext.getAssets().list(path);
            for (String s : stuff) {
                String fullpath = path + "/" + s;
                try {
                    InputStream check = this.appContext.getAssets().open(fullpath);
                    items.add(fullpath);
                    check.close();
                } catch (IOException e) {
                    gatherDefaultItems(fullpath, items);
                }
            }
        } catch (IOException e2) {
            OpenFeintInternal.log(TAG, e2.toString());
        }
    }

    private void copySingleItem(File baseDir, String path) throws IOException {
        try {
            File filePath = new File(baseDir, path);
            InputStream inputStream = this.appContext.getAssets().open(path);
            DataInputStream reader = new DataInputStream(inputStream);
            filePath.getParentFile().mkdirs();
            FileOutputStream fileStream = new FileOutputStream(filePath);
            DataOutputStream writer = new DataOutputStream(fileStream);
            Util.copyStream(reader, writer);
        } catch (Exception e) {
            OpenFeintInternal.log(TAG, e.toString());
        }
    }

    private Set<String> stripUnused(Set<String> table) {
        String currentDpi = Util.getDpiName(this.appContext);
        String test = currentDpi.equals("mdpi") ? ".hdpi." : ".mdpi.";
        Set<String> reducedSet = new HashSet<>();
        for (String path : table) {
            if (!path.contains(test)) {
                reducedSet.add(path);
            }
        }
        return reducedSet;
    }

    private void copySpecific(File baseDir, String path, Set<String> items) throws IOException {
        if (items.contains(path)) {
            copySingleItem(baseDir, path);
            items.remove(path);
        }
    }

    private void copyDirectory(File baseDir, String root, Set<String> items) throws IOException {
        Set<String> dirItems = new HashSet<>();
        for (String path : items) {
            if (path.startsWith(root)) {
                dirItems.add(path);
            }
        }
        Iterator i$ = dirItems.iterator();
        while (i$.hasNext()) {
            copySpecific(baseDir, i$.next(), items);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void copyDefaultBackground(File baseDir) throws IOException {
        Set<String> defaultItems = new HashSet<>();
        gatherDefaultItems(WEBUI, defaultItems);
        Set<String> defaultItems2 = stripUnused(defaultItems);
        copySpecific(baseDir, "webui/manifest.plist", defaultItems2);
        copyDirectory(baseDir, "webui/javascripts/", defaultItems2);
        copyDirectory(baseDir, "webui/stylesheets/", defaultItems2);
        copyDirectory(baseDir, "webui/intro/", defaultItems2);
        if (Util.getDpiName(this.appContext).equals("mdpi")) {
            copySpecific(baseDir, "webui/images/space.grid.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/button.gray.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/button.gray.hit.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/button.green.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/button.green.hit.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/logo.small.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/header_bg.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/loading.spinner.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/input.text.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/frame.small.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/icon.leaf.gray.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/tab.divider.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/tab.active_indicator.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/logo.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/header_bg.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/loading.spinner.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/icon.user.male.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/intro.leaderboards.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/intro.friends.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/intro.achievements.mdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/intro.games.mdpi.png", defaultItems2);
        } else {
            copySpecific(baseDir, "webui/images/space.grid.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/button.gray.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/button.gray.hit.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/button.green.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/button.green.hit.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/logo.small.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/header_bg.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/loading.spinner.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/input.text.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/frame.small.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/icon.leaf.gray.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/tab.divider.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/tab.active_indicator.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/logo.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/header_bg.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/loading.spinner.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/icon.user.male.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/intro.leaderboards.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/intro.friends.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/intro.achievements.hdpi.png", defaultItems2);
            copySpecific(baseDir, "webui/images/intro.games.hdpi.png", defaultItems2);
        }
        clientManifestReady();
        for (String path : defaultItems2) {
            copySingleItem(baseDir, path);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void clientManifestReady() {
        Map obj = getDefaultClientManifest();
        if (obj != null) {
            Message msg = Message.obtain(this.mHandler, 2);
            msg.obj = obj;
            msg.sendToTarget();
        }
    }

    private class SaxHandler extends DefaultHandler {
        String key;
        String loadingString;
        Map<String, String> outputMap;

        private SaxHandler() {
            this.outputMap = new HashMap();
        }

        public Map<String, String> getOutputMap() {
            return this.outputMap;
        }

        @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
        public void startElement(String uri, String name, String qName, Attributes attr) {
            this.loadingString = "";
        }

        @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
        public void endElement(String uri, String name, String qName) throws SQLException {
            String clipped = name.trim();
            if (!clipped.equals("key")) {
                if (clipped.equals("string")) {
                    this.outputMap.put(this.key, this.loadingString);
                    DB.insertManifest(new String[]{this.key, this.loadingString});
                    return;
                }
                return;
            }
            this.key = this.loadingString;
        }

        @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
        public void characters(char[] ch, int start, int length) {
            this.loadingString = new String(ch).substring(start, start + length);
        }
    }

    static boolean recover() {
        return sInstance.recoverInternal();
    }

    boolean recoverInternal() {
        boolean success = DB.recover(this.appContext);
        this.serverManifest = null;
        if (success) {
            this.clientManifest = getDefaultClientManifestFromAsset();
            success = this.clientManifest != null;
        }
        loadingFinished = false;
        sync();
        return success;
    }

    private Map<String, String> getDefaultClientManifest() {
        Cursor result = null;
        SQLiteDatabase db = null;
        try {
            try {
                DB.createDB(this.appContext);
                db = DB.storeHelper.getReadableDatabase();
                result = db.rawQuery("SELECT * FROM manifest", null);
            } catch (Throwable th) {
                OpenFeintInternal.log(TAG, "Closing db.");
                try {
                    result.close();
                } catch (Exception e) {
                }
                try {
                    db.close();
                    throw th;
                } catch (Exception e2) {
                    throw th;
                }
            }
        } catch (Exception e3) {
            OpenFeintInternal.log(TAG, "SQLite exception. " + e3.toString());
            OpenFeintInternal.log(TAG, "Closing db.");
            try {
                result.close();
            } catch (Exception e4) {
            }
            try {
                db.close();
            } catch (Exception e5) {
            }
        }
        if (result.getCount() <= 0) {
            OpenFeintInternal.log(TAG, "Closing db.");
            try {
                result.close();
            } catch (Exception e6) {
            }
            try {
                db.close();
            } catch (Exception e7) {
            }
            return getDefaultClientManifestFromAsset();
        }
        Map<String, String> outManifest = new HashMap<>();
        result.moveToFirst();
        do {
            String path = result.getString(0);
            String hash = result.getString(1);
            outManifest.put(path, hash);
        } while (result.moveToNext());
        result.close();
        OpenFeintInternal.log(TAG, "create client Manifest from db");
        OpenFeintInternal.log(TAG, "Closing db.");
        try {
            result.close();
        } catch (Exception e8) {
        }
        try {
            db.close();
        } catch (Exception e9) {
        }
        return outManifest;
    }

    private Map<String, String> getDefaultClientManifestFromAsset() throws ParserConfigurationException, SAXException, IOException {
        File manifestFile = new File(rootPath, "manifest.plist");
        if (manifestFile.isFile()) {
            try {
                SAXParserFactory spf = SAXParserFactory.newInstance();
                SAXParser sp = spf.newSAXParser();
                XMLReader xr = sp.getXMLReader();
                SaxHandler handler = new SaxHandler();
                xr.setContentHandler(handler);
                InputStream inputStream = new FileInputStream(manifestFile.getPath());
                xr.parse(new InputSource(inputStream));
                return handler.getOutputMap();
            } catch (Exception e) {
                OpenFeintInternal.log(TAG, e.toString());
            }
        }
        return new HashMap();
    }

    private static final URI getServerURI() {
        try {
            return serverOverride != null ? serverOverride : new URI(OpenFeintInternal.getInstance().getServerUrl());
        } catch (Exception e) {
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String getManifestPath(Context ctx) {
        String prefix = manifestPrefixOverride != null ? manifestPrefixOverride : "/webui/manifest/android";
        return prefix + "." + Util.getDpiName(ctx);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void triggerUpdates() {
        ManifestItem item;
        OpenFeintInternal.log(TAG, "loadedManifest");
        if (this.serverManifest != null && this.clientManifest != null) {
            for (ManifestItem item2 : this.serverManifest.objects.values()) {
                if (!item2.hash.equals(this.clientManifest.get(item2.path))) {
                    this.pathsToLoad.add(item2.path);
                }
            }
            HashSet<String> removedPaths = new HashSet<>();
            for (PathAndCallback pathAndCb : this.trackedPaths) {
                if (!this.pathsToLoad.contains(pathAndCb.path)) {
                    pathAndCb.callback.pathLoaded(pathAndCb.path);
                    removedPaths.add(pathAndCb.path);
                } else {
                    ManifestItem newItem = new ManifestItem(this.serverManifest.objects.get(pathAndCb.path));
                    newItem.dependentObjects.retainAll(this.pathsToLoad);
                    this.trackedItems.put(pathAndCb.path, new ItemAndCallback(newItem, pathAndCb.callback));
                }
            }
            this.trackedPaths.clear();
            this.serverManifest.globals.retainAll(this.pathsToLoad);
            Set<String> priorityDependents = new HashSet<>();
            for (String path : this.prioritizedPaths) {
                if (this.pathsToLoad.contains(path) && (item = this.serverManifest.objects.get(path)) != null) {
                    priorityDependents.addAll(item.dependentObjects);
                }
            }
            priorityDependents.retainAll(this.pathsToLoad);
            this.prioritizedPaths.addAll(priorityDependents);
            loadNextItem();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void finishWithoutLoading() {
        OpenFeintInternal.log(TAG, "finishWithoutLoading");
        for (PathAndCallback pathAndCb : this.trackedPaths) {
            pathAndCb.callback.pathLoaded(pathAndCb.path);
        }
        this.trackedPaths.clear();
        finishLoading();
    }

    private void finishLoading() {
        loadingFinished = true;
    }

    private void loadNextItem() {
        String path;
        OpenFeintInternal.log(TAG, "loadNextItem");
        this.serverManifest.globals.retainAll(this.pathsToLoad);
        this.prioritizedPaths.retainAll(this.pathsToLoad);
        if (this.serverManifest.globals.size() > 0) {
            String path2 = this.serverManifest.globals.iterator().next();
            path = path2;
        } else if (this.prioritizedPaths.size() > 0) {
            String path3 = this.prioritizedPaths.iterator().next();
            path = path3;
        } else if (this.pathsToLoad.size() > 0) {
            String path4 = this.pathsToLoad.iterator().next();
            path = path4;
        } else {
            finishLoading();
            return;
        }
        final String finalPath = path;
        OpenFeintInternal.log(TAG, "Syncing item: " + finalPath);
        new BaseRequest() { // from class: com.openfeint.internal.ui.WebViewCache.4
            @Override // com.openfeint.internal.request.BaseRequest
            public boolean signed() {
                return false;
            }

            @Override // com.openfeint.internal.request.BaseRequest
            public String method() {
                return "GET";
            }

            @Override // com.openfeint.internal.request.BaseRequest
            public String path() {
                return "/webui/" + finalPath;
            }

            @Override // com.openfeint.internal.request.BaseRequest
            public void onResponse(int responseCode, byte[] body) {
                if (responseCode == 200) {
                    try {
                        Util.saveFile(body, WebViewCache.rootPath + finalPath);
                        Message msg = Message.obtain(WebViewCache.this.mHandler, 1, 1, 0, finalPath);
                        msg.sendToTarget();
                        return;
                    } catch (Exception e) {
                        Message msg2 = Message.obtain(WebViewCache.this.mHandler, 1, 0, 0, finalPath);
                        msg2.sendToTarget();
                        return;
                    }
                }
                Message msg3 = Message.obtain(WebViewCache.this.mHandler, 1, 0, 0, finalPath);
                msg3.sendToTarget();
            }
        }.launch();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void finishItem(String path, boolean succeeded) throws SQLException {
        String hashValue;
        if (this.serverManifest != null) {
            Iterator i$ = this.trackedItems.values().iterator();
            while (i$.hasNext()) {
                i$.next().item.dependentObjects.remove(path);
            }
            this.pathsToLoad.remove(path);
            this.serverManifest.globals.remove(path);
            this.prioritizedPaths.remove(path);
            if (this.serverManifest.globals.size() == 0) {
                HashSet<String> pathsToRemove = new HashSet<>();
                for (ItemAndCallback itemAndCb : this.trackedItems.values()) {
                    if (!this.pathsToLoad.contains(itemAndCb.item.path) && itemAndCb.item.dependentObjects.size() == 0) {
                        pathsToRemove.add(itemAndCb.item.path);
                        itemAndCb.callback.pathLoaded(itemAndCb.item.path);
                    }
                }
                Iterator i$2 = pathsToRemove.iterator();
                while (i$2.hasNext()) {
                    String removePath = i$2.next();
                    this.trackedItems.remove(removePath);
                }
            }
            if (succeeded) {
                hashValue = this.serverManifest.objects.get(path).hash;
            } else {
                hashValue = "FAILED";
            }
            this.clientManifest.put(path, hashValue);
            String[] params = {path, hashValue};
            DB.insertManifest(params);
            loadNextItem();
        }
    }

    private void prioritizeInner(String path) {
        ManifestItem item;
        if (!loadingFinished) {
            this.prioritizedPaths.add(path);
            if (this.serverManifest != null && (item = this.serverManifest.objects.get(path)) != null) {
                Set<String> loadingDependents = new HashSet<>(item.dependentObjects);
                loadingDependents.retainAll(this.pathsToLoad);
                this.prioritizedPaths.addAll(loadingDependents);
                OpenFeintInternal.log(TAG, "Prioritizing " + path + " deps:" + loadingDependents.toString());
            }
        }
    }
}
