package com.openfeint.internal;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.OutputStream;
import java.io.StreamCorruptedException;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.concurrent.locks.ReentrantReadWriteLock;

/* loaded from: classes.dex */
public class SyncedStore {
    private static final String FILENAME = "of_prefs";
    private static final String TAG = "DistributedPrefs";
    private Context mContext;
    private HashMap<String, String> mMap = new HashMap<>();
    private ReentrantReadWriteLock mLock = new ReentrantReadWriteLock();

    public class Editor {
        public Editor() {
        }

        public void putString(String k, String v) {
            SyncedStore.this.mMap.put(k, v);
        }

        public void remove(String k) {
            SyncedStore.this.mMap.remove(k);
        }

        public Set<String> keySet() {
            return new HashSet(SyncedStore.this.mMap.keySet());
        }

        public void commit() {
            SyncedStore.this.save();
            SyncedStore.this.mLock.writeLock().unlock();
        }
    }

    Editor edit() {
        this.mLock.writeLock().lock();
        return new Editor();
    }

    public class Reader {
        public Reader() {
        }

        public String getString(String k, String defValue) {
            String rv = (String) SyncedStore.this.mMap.get(k);
            return rv != null ? rv : defValue;
        }

        public Set<String> keySet() {
            return SyncedStore.this.mMap.keySet();
        }

        public void complete() {
            SyncedStore.this.mLock.readLock().unlock();
        }
    }

    Reader read() {
        this.mLock.readLock().lock();
        return new Reader();
    }

    public SyncedStore(Context c) throws Throwable {
        this.mContext = c;
        load();
    }

    public void load() throws Throwable {
        this.mMap = null;
        boolean mustSaveAfterLoad = false;
        long start = System.currentTimeMillis();
        File myStore = this.mContext.getFileStreamPath(FILENAME);
        this.mLock.writeLock().lock();
        try {
            PackageManager packageManager = this.mContext.getPackageManager();
            List<ApplicationInfo> apps = packageManager.getInstalledApplications(0);
            ApplicationInfo myInfo = null;
            Iterator i$ = apps.iterator();
            while (true) {
                if (!i$.hasNext()) {
                    break;
                }
                ApplicationInfo ai = i$.next();
                if (ai.packageName.equals(this.mContext.getPackageName())) {
                    myInfo = ai;
                    break;
                }
            }
            String myStoreCPath = myStore.getCanonicalPath();
            if (myInfo != null && myStoreCPath.startsWith(myInfo.dataDir)) {
                String underDataDir = myStoreCPath.substring(myInfo.dataDir.length());
                Iterator i$2 = apps.iterator();
                while (i$2.hasNext()) {
                    File otherStore = new File(i$2.next().dataDir, underDataDir);
                    if (myStore.lastModified() < otherStore.lastModified()) {
                        mustSaveAfterLoad = true;
                        myStore = otherStore;
                    }
                }
                this.mMap = mapFromStore(myStore);
            }
            if (this.mMap == null) {
                this.mMap = new HashMap<>();
            }
        } catch (IOException e) {
            OpenFeintInternal.log(TAG, "broken");
        } finally {
            this.mLock.writeLock().unlock();
        }
        if (mustSaveAfterLoad) {
            save();
        }
        long elapsed = System.currentTimeMillis() - start;
        OpenFeintInternal.log(TAG, "Loading prefs took " + new Long(elapsed).toString() + " millis");
    }

    private HashMap<String, String> mapFromStore(File myStore) throws Throwable {
        InputStream is;
        ObjectInputStream ois;
        Object o;
        InputStream is2 = null;
        ObjectInputStream ois2 = null;
        try {
            try {
                is = new FileInputStream(myStore);
                try {
                    ois = new ObjectInputStream(is);
                    try {
                        o = ois.readObject();
                    } catch (FileNotFoundException e) {
                        ois2 = ois;
                        is2 = is;
                        OpenFeintInternal.log(TAG, "Couldn't open of_prefs");
                        try {
                        } catch (IOException e2) {
                            OpenFeintInternal.log(TAG, "IOException while cleaning up");
                        }
                        if (ois2 == null) {
                            if (is2 != null) {
                                is2.close();
                            }
                            return null;
                        }
                        ois2.close();
                        return null;
                    } catch (StreamCorruptedException e3) {
                        ois2 = ois;
                        is2 = is;
                        OpenFeintInternal.log(TAG, "StreamCorruptedException");
                        try {
                        } catch (IOException e4) {
                            OpenFeintInternal.log(TAG, "IOException while cleaning up");
                        }
                        if (ois2 == null) {
                            if (is2 != null) {
                                is2.close();
                            }
                            return null;
                        }
                        ois2.close();
                        return null;
                    } catch (IOException e5) {
                        ois2 = ois;
                        is2 = is;
                        OpenFeintInternal.log(TAG, "IOException while reading");
                        try {
                        } catch (IOException e6) {
                            OpenFeintInternal.log(TAG, "IOException while cleaning up");
                        }
                        if (ois2 == null) {
                            if (is2 != null) {
                                is2.close();
                            }
                            return null;
                        }
                        ois2.close();
                        return null;
                    } catch (ClassNotFoundException e7) {
                        ois2 = ois;
                        is2 = is;
                        OpenFeintInternal.log(TAG, "ClassNotFoundException");
                        try {
                        } catch (IOException e8) {
                            OpenFeintInternal.log(TAG, "IOException while cleaning up");
                        }
                        if (ois2 == null) {
                            if (is2 != null) {
                                is2.close();
                            }
                            return null;
                        }
                        ois2.close();
                        return null;
                    } catch (Throwable th) {
                        th = th;
                        ois2 = ois;
                        is2 = is;
                        try {
                        } catch (IOException e9) {
                            OpenFeintInternal.log(TAG, "IOException while cleaning up");
                        }
                        if (ois2 == null) {
                            if (is2 != null) {
                                is2.close();
                            }
                            throw th;
                        }
                        ois2.close();
                        throw th;
                    }
                } catch (FileNotFoundException e10) {
                    is2 = is;
                } catch (StreamCorruptedException e11) {
                    is2 = is;
                } catch (IOException e12) {
                    is2 = is;
                } catch (ClassNotFoundException e13) {
                    is2 = is;
                } catch (Throwable th2) {
                    th = th2;
                    is2 = is;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        } catch (FileNotFoundException e14) {
        } catch (StreamCorruptedException e15) {
        } catch (IOException e16) {
        } catch (ClassNotFoundException e17) {
        }
        if (o != null && (o instanceof HashMap)) {
            HashMap<String, String> map = (HashMap) o;
            try {
            } catch (IOException e18) {
                OpenFeintInternal.log(TAG, "IOException while cleaning up");
            }
            if (ois == null) {
                if (is != null) {
                    is.close();
                }
                return map;
            }
            ois.close();
            return map;
        }
        try {
        } catch (IOException e19) {
            OpenFeintInternal.log(TAG, "IOException while cleaning up");
            ois2 = ois;
            is2 = is;
        }
        if (ois == null) {
            if (is != null) {
                is.close();
            }
            ois2 = ois;
            is2 = is;
            return null;
        }
        ois.close();
        ois2 = ois;
        is2 = is;
        return null;
    }

    public void save() throws Throwable {
        ObjectOutputStream oos;
        OutputStream os = null;
        ObjectOutputStream oos2 = null;
        this.mLock.readLock().lock();
        try {
            try {
                os = this.mContext.openFileOutput(FILENAME, 1);
                oos = new ObjectOutputStream(os);
            } catch (Throwable th) {
                th = th;
            }
        } catch (IOException e) {
        }
        try {
            oos.writeObject(this.mMap);
            try {
            } catch (IOException e2) {
                OpenFeintInternal.log(TAG, "IOException while cleaning up");
            } finally {
            }
        } catch (IOException e3) {
            oos2 = oos;
            OpenFeintInternal.log(TAG, "Couldn't open of_prefs for writing");
            try {
            } catch (IOException e4) {
                OpenFeintInternal.log(TAG, "IOException while cleaning up");
            } finally {
            }
            if (oos2 == null) {
                if (os != null) {
                    os.close();
                }
            }
            oos2.close();
        } catch (Throwable th2) {
            th = th2;
            oos2 = oos;
            try {
            } catch (IOException e5) {
                OpenFeintInternal.log(TAG, "IOException while cleaning up");
            } finally {
            }
            if (oos2 == null) {
                if (os != null) {
                    os.close();
                }
                throw th;
            }
            oos2.close();
            throw th;
        }
        if (oos == null) {
            if (os != null) {
                os.close();
            }
            this.mLock.readLock().unlock();
            oos2 = oos;
        }
        oos.close();
        this.mLock.readLock().unlock();
        oos2 = oos;
    }
}
