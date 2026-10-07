package com.openfeint.api;

import com.openfeint.internal.OpenFeintInternal;
import java.util.HashMap;
import java.util.Map;
import java.util.Properties;

/* loaded from: classes.dex */
public class OpenFeintSettings {
    public static final String CloudStorageCompressionStrategyDefault = "CloudStorageCompressionStrategyDefault";
    public static final String CloudStorageCompressionStrategyLegacyHeaderlessCompression = "CloudStorageCompressionStrategyLegacyHeaderlessCompression";
    public static final String CloudStorageCompressionStrategyNoCompression = "CloudStorageCompressionStrategyNoCompression";
    public static final String RequestedOrientation = "RequestedOrientation";
    public static final String SettingCloudStorageCompressionStrategy = "SettingCloudStorageCompressionStrategy";
    public String id;
    public String key;
    public String name;
    public String secret;
    public Map<String, Object> settings;

    public OpenFeintSettings(String _name, String _key, String _secret, String _id) {
        this.name = _name;
        this.key = _key;
        this.secret = _secret;
        this.id = _id;
        this.settings = new HashMap();
    }

    public OpenFeintSettings(String _name, String _key, String _secret, String _id, Map<String, Object> _settings) {
        this.name = _name;
        this.key = _key;
        this.secret = _secret;
        this.id = _id;
        this.settings = _settings;
    }

    public void applyOverrides(Properties settings) {
        if (settings != null) {
            String property = settings.getProperty("app-id");
            if (property != null) {
                this.id = property;
            }
            String property2 = settings.getProperty("game-name");
            if (property2 != null) {
                this.name = property2;
            }
            String property3 = settings.getProperty("app-key");
            if (property3 != null) {
                this.key = property3;
            }
            String property4 = settings.getProperty("app-secret");
            if (property4 != null) {
                this.secret = property4;
            }
        }
    }

    public void verify() {
        String verificationError = null;
        if (this.key == null) {
            verificationError = OpenFeintInternal.getRString(com.halfbrick.fruitninja.R.string.of_key_cannot_be_null);
        } else if (this.secret == null) {
            verificationError = OpenFeintInternal.getRString(com.halfbrick.fruitninja.R.string.of_secret_cannot_be_null);
        } else if (this.id == null) {
            verificationError = OpenFeintInternal.getRString(com.halfbrick.fruitninja.R.string.of_id_cannot_be_null);
        } else if (this.name == null) {
            verificationError = OpenFeintInternal.getRString(com.halfbrick.fruitninja.R.string.of_name_cannot_be_null);
        }
        if (verificationError != null) {
            OpenFeintInternal.log("OpenFeintSettings", verificationError);
            OpenFeintInternal.getInstance().displayErrorDialog(verificationError);
        }
    }
}
