package org.fruitnative.reconstruction;

import org.libsdl.app.SDLActivity;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;

public class FruitActivity extends SDLActivity {
    @Override protected String[] getLibraries() { return new String[] {"SDL2", "main"}; }

    // The recovered loaders use ordinary files, so unpack APK assets before native main.
    @Override protected String[] getArguments() {
        File assets = new File(getFilesDir(), "assets");
        try {
            copyTree("original", new File(assets, "original"));
            copyTree("config", new File(assets, "config"));
        } catch (IOException error) {
            throw new IllegalStateException("Unable to unpack game assets", error);
        }
        return new String[] {"--assets", assets.getAbsolutePath(),
                             "--save-dir", new File(getFilesDir(), "saves").getAbsolutePath()};
    }

    private void copyTree(String source, File destination) throws IOException {
        String[] children = getAssets().list(source);
        if (children != null && children.length > 0) {
            if (!destination.isDirectory() && !destination.mkdirs())
                throw new IOException("Cannot create " + destination);
            for (String child : children)
                copyTree(source + "/" + child, new File(destination, child));
        } else {
            try (InputStream input = getAssets().open(source);
                 FileOutputStream output = new FileOutputStream(destination)) {
                byte[] buffer = new byte[65536];
                int count;
                while ((count = input.read(buffer)) != -1) output.write(buffer, 0, count);
            }
        }
    }
}
