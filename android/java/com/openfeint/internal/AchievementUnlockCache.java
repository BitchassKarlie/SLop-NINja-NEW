package com.openfeint.internal;

import java.util.HashMap;

/* loaded from: classes.dex */
public class AchievementUnlockCache {
    private static HashMap<String, Boolean> cache;

    public static boolean isUnlocked(String achievementId) {
        if (cache == null) {
            cache = new HashMap<>();
        }
        Boolean bool = cache.get(achievementId);
        return bool != null && bool.booleanValue();
    }

    public static void markAsUnlocked(String achievementId) {
        if (cache == null) {
            cache = new HashMap<>();
        }
        cache.put(achievementId, new Boolean(true));
    }

    public static void reset() {
        if (cache == null) {
            cache = new HashMap<>();
        }
        cache.clear();
    }
}
