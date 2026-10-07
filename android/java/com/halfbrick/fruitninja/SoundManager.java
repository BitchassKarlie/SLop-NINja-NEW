package com.halfbrick.fruitninja;

import android.content.Context;
import android.content.res.AssetFileDescriptor;
import android.content.res.AssetManager;
import android.media.AudioTrack;
import android.media.MediaPlayer;
import android.util.Log;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import org.xml.sax.SAXException;

/* loaded from: classes.dex */
public class SoundManager {
    private static int audioIndexer = 0;
    private static AudioLoaderThread mAudioLoader;
    private static Context mContext;

    public interface IActiveSound {
        boolean isPaused();

        boolean isPlaying();

        boolean isStopped();

        void pause();

        void play();

        void play(float f, float f2);

        void release();

        void setStereoVolume(float f, float f2);

        void stop();
    }

    public interface ISoundFile {
        int BitDepth();

        int Channels();

        String Debug_getName();

        void Debug_setName(String str);

        int Frequency();

        int LoopBack();

        byte[] PCMData();

        int SampleCount();
    }

    public static void initSounds(Context theContext) {
        mContext = theContext;
        mAudioLoader = new AudioLoaderThread();
        mAudioLoader.start();
    }

    public static void InitialiseInternal() {
    }

    public static void DestroyInternal() {
    }

    public static void SetMusicVolume(float volume) {
        mAudioLoader.SetMusicVolume(volume);
    }

    public static void SetSFXVolume(float volume) {
        mAudioLoader.SetSFXVolume(volume);
    }

    public static IActiveSound SFXPlayInternal(String filename, int flags, short note, int pitch) {
        return mAudioLoader.PlaySFX(filename);
    }

    public static IActiveSound SFXPlayInternal(int soundHash, int flags, short note, int pitch) {
        return null;
    }

    public static void SongPlay(String songTitle) {
        mAudioLoader.PlaySong(songTitle);
    }

    public static void Update(float dt) {
    }

    public static void AutoPause() throws IllegalStateException {
        if (mAudioLoader != null) {
            mAudioLoader.AutoPause();
        }
    }

    public static void AutoResume() throws IllegalStateException {
        if (mAudioLoader != null) {
            mAudioLoader.AutoResume();
        }
    }

    public static int ReadInt(FileInputStream stream) throws IOException {
        byte[] bytes = new byte[4];
        stream.read(bytes);
        return ((bytes[0] & 255) << 0) | ((bytes[1] & 255) << 8) | ((bytes[2] & 255) << 16) | ((bytes[3] & 255) << 24);
    }

    private static class MusicDesc {
        public Track[] mTracks;

        private MusicDesc() {
        }

        public static MusicDesc Load(String filename) throws SAXException, IOException {
            DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance();
            factory.setIgnoringComments(true);
            factory.setValidating(false);
            try {
                AssetManager assets = SoundManager.mContext.getAssets();
                Document doc = factory.newDocumentBuilder().parse(assets.open(filename));
                return ParseRoot(doc.getDocumentElement());
            } catch (IOException except) {
                Log.e("halfbrick.Mortar.Sound", "IOException: " + except.getMessage());
                return null;
            } catch (ParserConfigurationException except2) {
                Log.e("halfbrick.Mortar.Sound", "ParserConfigurationException: " + except2.getMessage());
                return null;
            } catch (SAXException except3) {
                Log.e("halfbrick.Mortar.Sound", "SAXException: " + except3.getMessage());
                return null;
            }
        }

        private static MusicDesc ParseRoot(Element rootElem) {
            MusicDesc desc = new MusicDesc();
            NodeList tracks = rootElem.getElementsByTagName("track");
            desc.mTracks = new Track[tracks.getLength()];
            for (int i = 0; i < tracks.getLength(); i++) {
                Node trackNode = tracks.item(i);
                desc.mTracks[i] = ParseTrack((Element) trackNode);
            }
            return desc;
        }

        private static String ParseString(Node node) {
            try {
                return node.getChildNodes().item(0).getNodeValue().toString();
            } catch (NullPointerException e) {
                return null;
            }
        }

        private static Track ParseTrack(Element trackElem) {
            String filename;
            String filename2 = ParseString(trackElem.getElementsByTagName("fileName").item(0));
            String name = ParseString(trackElem.getElementsByTagName("name").item(0)).toLowerCase();
            String loopPoint = ParseString(trackElem.getElementsByTagName("loopPoint").item(0));
            if (filename2 != null) {
                filename = "music/" + filename2.toLowerCase().replace(".caf", ".ogg");
            } else {
                filename = "music/" + name + ".ogg";
            }
            Track track = new Track();
            track.filename = filename;
            track.name = name;
            track.loopPoint = loopPoint != null ? Integer.parseInt(loopPoint) : 0;
            return track;
        }

        public Track getTrackInfo(String songname) {
            String songname2 = songname.toLowerCase();
            Track[] arr$ = this.mTracks;
            for (Track track : arr$) {
                if (track.name.equals(songname2)) {
                    return track;
                }
            }
            return null;
        }

        public static class Track {
            public String filename;
            public int loopPoint;
            public String name;

            public String toString() {
                return "track {" + this.filename + ", " + this.name + ", " + this.loopPoint + "}";
            }

            public AssetFileDescriptor getFd() throws IOException {
                return SoundManager.mContext.getAssets().openFd(this.filename);
            }
        }
    }

    private static class AudioLoaderThread extends Thread {
        protected MusicDesc mMusicInfo;
        protected LinkedList<ActiveSound> mUsedSFXTracks;
        protected float mSFXVolume = 1.0f;
        protected float mMusicVolume = 1.0f;
        protected boolean mAutoPaused = false;
        protected boolean mMusicWasAutoPause = false;
        protected List<ActiveSound> mAutoPausedSounds = null;
        protected MediaPlayer mMusicPlayer = new MediaPlayer();
        protected Map<String, ISoundFile> mSoundMap = new TreeMap();

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() throws IOException {
            Log.i("halfbrick.Mortar.Sound", "Native Media stream sample rate: " + AudioTrack.getNativeOutputSampleRate(3));
            this.mUsedSFXTracks = new LinkedList<>();
            synchronized (this.mMusicPlayer) {
                this.mMusicInfo = MusicDesc.Load("xml/musicdesc.xml");
                this.mMusicPlayer.notifyAll();
            }
            registerAudio("sound", this.mSoundMap);
        }

        protected static class ActiveSound implements IActiveSound {
            protected SoundLooper mLooper;
            protected AudioLoaderThread mParent;
            protected ISoundFile mSound;
            protected AudioTrack mTrack = null;
            protected float mLeftVolume = 1.0f;
            protected float mRightVolume = 1.0f;
            protected int mPausePosition = -1;

            public ActiveSound(ISoundFile createFrom, AudioLoaderThread parent) {
                this.mParent = parent;
                this.mSound = createFrom;
            }

            public ISoundFile getSound() {
                return this.mSound;
            }

            public boolean isValid() {
                return (this.mTrack == null || this.mTrack.getState() == 0) ? false : true;
            }

            private boolean CreateTrack() throws IllegalStateException {
                if (!isValid()) {
                    byte[] PCMData = this.mSound.PCMData();
                    int bitDepth = this.mSound.BitDepth() == 16 ? 2 : 3;
                    int channelConfig = this.mSound.Channels() == 1 ? 2 : 3;
                    int minBufferSize = AudioTrack.getMinBufferSize(this.mSound.Frequency(), channelConfig, bitDepth);
                    int targetBufferSize = ((PCMData.length / minBufferSize) + 1) * minBufferSize;
                    this.mTrack = new AudioTrack(3, this.mSound.Frequency(), channelConfig, bitDepth, targetBufferSize, 1);
                    if (!isValid()) {
                        this.mTrack.release();
                        this.mTrack = null;
                        return false;
                    }
                    this.mTrack.play();
                    this.mTrack.pause();
                    this.mTrack.setPlaybackHeadPosition(0);
                    this.mTrack.write(PCMData, 0, PCMData.length);
                    if (this.mSound.LoopBack() >= 0) {
                        this.mLooper = new SoundLooper(this);
                        this.mTrack.setPlaybackPositionUpdateListener(this.mLooper);
                        this.mTrack.setNotificationMarkerPosition(this.mSound.SampleCount());
                    }
                }
                return true;
            }

            private void playInternal() throws IllegalStateException {
                UpdateVolume();
                this.mTrack.play();
                this.mPausePosition = -1;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.IActiveSound
            public void play() throws IllegalStateException {
                if (CreateTrack()) {
                    playInternal();
                }
            }

            @Override // com.halfbrick.fruitninja.SoundManager.IActiveSound
            public void play(float leftVolume, float rightVolume) throws IllegalStateException {
                if (CreateTrack()) {
                    this.mLeftVolume = leftVolume;
                    this.mRightVolume = rightVolume;
                    playInternal();
                }
            }

            public void resume() throws IllegalStateException {
                if (this.mPausePosition >= 0) {
                    if (CreateTrack()) {
                        this.mTrack.setPlaybackHeadPosition(this.mPausePosition);
                        this.mTrack.play();
                    }
                    this.mPausePosition = -1;
                }
            }

            @Override // com.halfbrick.fruitninja.SoundManager.IActiveSound
            public void pause() throws IllegalStateException {
                if (isPlaying()) {
                    this.mTrack.pause();
                    this.mPausePosition = this.mTrack.getPlaybackHeadPosition();
                }
            }

            @Override // com.halfbrick.fruitninja.SoundManager.IActiveSound
            public void stop() throws IllegalStateException {
                if (!isStopped()) {
                    this.mTrack.stop();
                }
                this.mPausePosition = -1;
            }

            public void UpdateVolume() {
                if (isValid()) {
                    this.mTrack.setStereoVolume(this.mLeftVolume * this.mParent.mSFXVolume, this.mRightVolume * this.mParent.mSFXVolume);
                }
            }

            @Override // com.halfbrick.fruitninja.SoundManager.IActiveSound
            public void setStereoVolume(float leftVolume, float rightVolume) {
                if (this.mLeftVolume != leftVolume || this.mRightVolume != rightVolume) {
                    this.mLeftVolume = leftVolume;
                    this.mRightVolume = rightVolume;
                    UpdateVolume();
                }
            }

            @Override // com.halfbrick.fruitninja.SoundManager.IActiveSound
            public boolean isPlaying() {
                return isValid() && this.mTrack.getPlayState() == 3;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.IActiveSound
            public boolean isPaused() {
                return isValid() && this.mTrack.getPlayState() == 2;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.IActiveSound
            public boolean isStopped() {
                return !isValid() || this.mTrack.getPlayState() == 1 || (this.mSound.LoopBack() < 0 && this.mTrack.getPlaybackHeadPosition() >= this.mSound.SampleCount());
            }

            @Override // com.halfbrick.fruitninja.SoundManager.IActiveSound
            public void release() {
                if (this.mTrack != null) {
                    this.mTrack.release();
                    this.mTrack = null;
                }
            }

            private static class SoundLooper implements AudioTrack.OnPlaybackPositionUpdateListener {
                ActiveSound mParent;

                public SoundLooper(ActiveSound parent) {
                    this.mParent = parent;
                }

                @Override // android.media.AudioTrack.OnPlaybackPositionUpdateListener
                public void onMarkerReached(AudioTrack track) throws IllegalStateException {
                    track.getPlaybackHeadPosition();
                    this.mParent.mSound.PCMData();
                    track.pause();
                    track.setPlaybackHeadPosition(this.mParent.mSound.LoopBack());
                    track.setNotificationMarkerPosition(this.mParent.mSound.SampleCount());
                    track.play();
                }

                @Override // android.media.AudioTrack.OnPlaybackPositionUpdateListener
                public void onPeriodicNotification(AudioTrack track) {
                }
            }
        }

        protected static class OggSound implements ISoundFile {
            protected int bitDepth;
            protected int channels;
            protected byte[] data;
            protected int freq;
            protected int loopbackSample = -1;
            protected String mName;
            protected int sampleCount;

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public String Debug_getName() {
                return this.mName;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public void Debug_setName(String newName) {
                this.mName = newName;
            }

            protected OggSound() {
            }

            public static OggSound LoadFromMemory(byte[] encodedData) {
                AudioDecoderStream decoder = AudioDecoderStream.createDecoderStream(encodedData);
                if (decoder != null) {
                    try {
                        try {
                            OggSound sound = new OggSound();
                            sound.channels = decoder.channels();
                            sound.freq = decoder.sampleRate();
                            sound.bitDepth = 16;
                            sound.sampleCount = (int) decoder.lengthPCM();
                            int maxSize = ((sound.bitDepth * sound.sampleCount) * sound.channels) / 8;
                            sound.data = new byte[maxSize];
                            int totalRead = 0;
                            do {
                                int amountRead = (int) decoder.read(sound.data, totalRead, maxSize - totalRead);
                                totalRead += amountRead;
                                if (amountRead <= 0) {
                                    break;
                                }
                            } while (totalRead < maxSize);
                            for (int i = 0; i < decoder.getCommentCount(); i++) {
                                String comment = decoder.getComment(i).trim();
                                String[] keyValuePair = comment.split("[ \t]*=[ \t]*", 2);
                                if (keyValuePair.length > 1) {
                                    if (keyValuePair[0].equalsIgnoreCase("LOOPSAMPLES")) {
                                        sound.loopbackSample = Integer.parseInt(keyValuePair[1]);
                                    } else {
                                        Log.v("halfbrick.Mortar.Sound", "Unrecognised user comment: " + comment);
                                    }
                                } else {
                                    Log.v("halfbrick.Mortar.Sound", "Unrecognised user comment: " + comment);
                                }
                            }
                            try {
                                decoder.release();
                            } catch (Exception error) {
                                Log.e("halfbrick.Mortar.Sound", "Failed to release audio decoder, reason: " + error.getMessage());
                            }
                            return sound;
                        } catch (Exception error2) {
                            Log.e("halfbrick.Mortar.Sound", "Failed to load audio, reason: " + error2.getMessage());
                            try {
                                decoder.release();
                            } catch (Exception error3) {
                                Log.e("halfbrick.Mortar.Sound", "Failed to release audio decoder, reason: " + error3.getMessage());
                            }
                            return null;
                        }
                    } catch (Throwable th) {
                        try {
                            decoder.release();
                            throw th;
                        } catch (Exception error4) {
                            Log.e("halfbrick.Mortar.Sound", "Failed to release audio decoder, reason: " + error4.getMessage());
                            throw th;
                        }
                    }
                }
                Log.e("halfbrick.Mortar.Sound", "Failed to create an audio decoder");
                return null;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public int Channels() {
                return this.channels;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public int Frequency() {
                return this.freq;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public int BitDepth() {
                return this.bitDepth;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public int SampleCount() {
                return this.sampleCount;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public int LoopBack() {
                return this.loopbackSample;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public byte[] PCMData() {
                return this.data;
            }
        }

        protected static class PCMSoundFileHeader {
            public int bitDepth;
            public int channels;
            public int freq;
            public int loopbackSample;
            public int sampleCount;

            protected PCMSoundFileHeader() {
            }

            public FileInputStream ReadInputStream(FileInputStream stream) throws IOException {
                this.channels = SoundManager.ReadInt(stream);
                this.freq = SoundManager.ReadInt(stream);
                this.bitDepth = SoundManager.ReadInt(stream);
                this.sampleCount = SoundManager.ReadInt(stream);
                this.loopbackSample = SoundManager.ReadInt(stream);
                return stream;
            }

            public int TotalStreamSize() {
                return (((this.sampleCount * this.bitDepth) * this.channels) + 7) / 8;
            }
        }

        protected static class PCMSound extends PCMSoundFileHeader implements ISoundFile {
            public byte[] data;
            protected String mName;

            protected PCMSound() {
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public String Debug_getName() {
                return this.mName;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public void Debug_setName(String newName) {
                this.mName = newName;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.AudioLoaderThread.PCMSoundFileHeader
            public FileInputStream ReadInputStream(FileInputStream stream) throws IOException {
                super.ReadInputStream(stream);
                this.data = new byte[TotalStreamSize()];
                stream.read(this.data);
                return stream;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public int Channels() {
                return this.channels;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public int Frequency() {
                return this.freq;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public int BitDepth() {
                return this.bitDepth;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public int SampleCount() {
                return this.sampleCount;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public int LoopBack() {
                if (this.loopbackSample > 0) {
                    return this.loopbackSample;
                }
                return -1;
            }

            @Override // com.halfbrick.fruitninja.SoundManager.ISoundFile
            public byte[] PCMData() {
                return this.data;
            }
        }

        /* JADX WARN: Removed duplicated region for block: B:12:0x0058 A[Catch: IOException -> 0x00e5, TRY_ENTER, TryCatch #2 {IOException -> 0x00e5, blocks: (B:2:0x0000, B:4:0x0011, B:12:0x0058, B:13:0x005b, B:29:0x00e4, B:33:0x0103, B:25:0x00af, B:14:0x005c, B:15:0x005f), top: B:41:0x0000, inners: #1 }] */
        /* JADX WARN: Removed duplicated region for block: B:33:0x0103 A[Catch: IOException -> 0x00e5, TRY_ENTER, TRY_LEAVE, TryCatch #2 {IOException -> 0x00e5, blocks: (B:2:0x0000, B:4:0x0011, B:12:0x0058, B:13:0x005b, B:29:0x00e4, B:33:0x0103, B:25:0x00af, B:14:0x005c, B:15:0x005f), top: B:41:0x0000, inners: #1 }] */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        protected static void registerAudio(String directory, Map<String, ISoundFile> addTo) throws IOException {
            String soundName;
            String soundName2;
            String soundName3;
            try {
                AssetManager assets = SoundManager.mContext.getAssets();
                String[] arr$ = assets.list(directory);
                for (String file : arr$) {
                    ISoundFile createdSound = null;
                    try {
                    } catch (IOException e) {
                        except = e;
                        soundName = null;
                    }
                    if (file.endsWith(".pcm")) {
                        AssetFileDescriptor fd = assets.openFd(directory + "/" + file);
                        String soundName4 = file.substring(0, file.length() - 4).toLowerCase();
                        PCMSound sound = new PCMSound();
                        sound.ReadInputStream(fd.createInputStream());
                        createdSound = sound;
                        soundName3 = soundName4;
                    } else if (file.endsWith(".ogg")) {
                        AssetFileDescriptor fd2 = assets.openFd(directory + "/" + file);
                        String soundName5 = file.substring(0, file.length() - 4).toLowerCase();
                        try {
                            FileInputStream inStream = fd2.createInputStream();
                            byte[] encodedData = new byte[(int) fd2.getDeclaredLength()];
                            inStream.read(encodedData);
                            createdSound = OggSound.LoadFromMemory(encodedData);
                            soundName3 = soundName5;
                        } catch (IOException e2) {
                            except = e2;
                            soundName = soundName5;
                            Log.e("halfbrick.Mortar.Sound", "Failed to load the sound file: " + directory + "/" + file + ", reason: " + except.getMessage());
                            soundName2 = soundName;
                            if (createdSound == null) {
                            }
                        }
                    }
                    soundName2 = soundName3;
                    if (createdSound == null) {
                        createdSound.Debug_setName(soundName2);
                        synchronized (addTo) {
                            addTo.put(soundName2, createdSound);
                        }
                    } else {
                        Log.e("halfbrick.Mortar.Sound", "Failed to load the sound file: " + directory + "/" + file);
                    }
                }
            } catch (IOException except) {
                Log.e("halfbrick.Mortar.Sound", "Failed to enumerate the sound files, reason: " + except.getMessage());
            }
        }

        public void AutoPause() throws IllegalStateException {
            synchronized (this.mMusicPlayer) {
                this.mAutoPaused = true;
                if (this.mMusicPlayer.isPlaying()) {
                    this.mMusicPlayer.stop();
                    this.mMusicWasAutoPause = true;
                } else {
                    this.mMusicWasAutoPause = false;
                }
            }
            if (!isAlive() && this.mAutoPausedSounds == null) {
                CleanStoppedTracks();
                this.mAutoPausedSounds = new ArrayList(this.mUsedSFXTracks.size());
                Iterator i$ = this.mUsedSFXTracks.iterator();
                while (i$.hasNext()) {
                    ActiveSound sound = i$.next();
                    if (sound.isPlaying()) {
                        sound.pause();
                        this.mAutoPausedSounds.add(sound);
                        Log.v("halfbrick.Mortar.Sound", "Pausing sound: " + sound.mSound.Debug_getName() + ", position: " + sound.mTrack.getPlaybackHeadPosition() + "/" + sound.mSound.SampleCount() + " " + ((sound.mTrack.getPlaybackHeadPosition() * 100.0f) / sound.mSound.SampleCount()) + "%");
                    }
                }
            }
        }

        public void AutoResume() throws IllegalStateException {
            synchronized (this.mMusicPlayer) {
                this.mAutoPaused = false;
                if (this.mMusicWasAutoPause) {
                    try {
                        this.mMusicPlayer.prepare();
                        this.mMusicPlayer.start();
                    } catch (IOException except) {
                        Log.e("halfbrick.Mortar.Sound", "Failed to restart music: " + except.getMessage());
                    }
                }
            }
            if (!isAlive() && this.mAutoPausedSounds != null) {
                for (ActiveSound sound : this.mAutoPausedSounds) {
                    sound.resume();
                    Log.v("halfbrick.Mortar.Sound", "Resuming sound: " + sound.mSound.Debug_getName() + ", position: " + sound.mTrack.getPlaybackHeadPosition() + "/" + sound.mSound.SampleCount() + " " + ((sound.mTrack.getPlaybackHeadPosition() * 100.0f) / sound.mSound.SampleCount()) + "%");
                }
                this.mMusicWasAutoPause = false;
                this.mAutoPausedSounds = null;
            }
        }

        void CleanStoppedTracks() {
            LinkedList<ActiveSound> newUsedList = new LinkedList<>();
            Iterator i$ = this.mUsedSFXTracks.iterator();
            while (i$.hasNext()) {
                ActiveSound track = i$.next();
                if (track.isStopped()) {
                    track.release();
                } else {
                    newUsedList.add(track);
                }
            }
            this.mUsedSFXTracks = newUsedList;
        }

        public IActiveSound PlaySFX(String filename) throws IllegalStateException {
            ISoundFile sound;
            synchronized (this.mSoundMap) {
                sound = this.mSoundMap.get(filename.toLowerCase());
            }
            if (sound == null) {
                Log.e("halfbrick.Mortar.Sound", "Couldn't find sfx:" + filename);
                return null;
            }
            CleanStoppedTracks();
            ActiveSound activeSound = new ActiveSound(sound, this);
            activeSound.play();
            if (!activeSound.isValid()) {
                return null;
            }
            this.mUsedSFXTracks.add(activeSound);
            return activeSound;
        }

        /* JADX WARN: Removed duplicated region for block: B:19:0x0069 A[Catch: all -> 0x0066, IOException -> 0x00ad, TRY_ENTER, TryCatch #3 {IOException -> 0x00ad, blocks: (B:7:0x001e, B:9:0x0026, B:19:0x0069, B:20:0x006f, B:29:0x00ac), top: B:40:0x001e, outer: #0 }] */
        /* JADX WARN: Removed duplicated region for block: B:9:0x0026 A[Catch: all -> 0x0066, IOException -> 0x00ad, TRY_LEAVE, TryCatch #3 {IOException -> 0x00ad, blocks: (B:7:0x001e, B:9:0x0026, B:19:0x0069, B:20:0x006f, B:29:0x00ac), top: B:40:0x001e, outer: #0 }] */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public void PlaySong(String songname) {
            MusicDesc.Track track;
            synchronized (this.mMusicPlayer) {
                if (this.mMusicInfo == null) {
                    try {
                        Log.i("halfbrick.Mortar.Sound", "Waiting for music player to be signaled!");
                        this.mMusicPlayer.wait();
                        Log.i("halfbrick.Mortar.Sound", "Music player was signaled!");
                        try {
                            track = this.mMusicInfo.getTrackInfo(songname);
                            if (track != null) {
                                Log.e("halfbrick.Mortar.Sound", "Failed to play the song: " + songname + ", reason: couldn't find song info! Please add it to \"xml/musicdesc.xml\"");
                                return;
                            }
                            AssetFileDescriptor fd = track.getFd();
                            synchronized (this.mMusicPlayer) {
                                this.mMusicPlayer.reset();
                                this.mMusicPlayer.setDataSource(fd.getFileDescriptor(), fd.getStartOffset(), fd.getLength());
                                this.mMusicPlayer.setVolume(this.mMusicVolume, this.mMusicVolume);
                                this.mMusicPlayer.setOnCompletionListener(new MusicCompleteListener(track));
                                if (!this.mAutoPaused) {
                                    this.mMusicPlayer.prepare();
                                    this.mMusicPlayer.start();
                                }
                            }
                            return;
                        } catch (IOException except) {
                            Log.e("halfbrick.Mortar.Sound", "Failed to play the song: " + songname + ", reason: " + except.getMessage());
                            return;
                        }
                    } catch (Exception except2) {
                        Log.e("halfbrick.Mortar.Sound", "AudioLoader initialization was interupted! Reason: " + except2.getMessage());
                        return;
                    }
                }
                track = this.mMusicInfo.getTrackInfo(songname);
                if (track != null) {
                }
            }
        }

        private static class MusicCompleteListener implements MediaPlayer.OnCompletionListener {
            private MusicDesc.Track mTrack;

            public MusicCompleteListener(MusicDesc.Track track) {
                this.mTrack = track;
            }

            @Override // android.media.MediaPlayer.OnCompletionListener
            public void onCompletion(MediaPlayer mp) throws IllegalStateException {
                mp.seekTo((this.mTrack.loopPoint * 1000) / 44100);
                Log.i("halfbrick.Mortar.Sound", "Restarting song at: " + mp.getCurrentPosition() + ", should be: " + ((this.mTrack.loopPoint * 1000) / 44100));
                mp.start();
            }
        }

        public void SetSFXVolume(float volume) {
            this.mSFXVolume = volume;
            if (isAlive()) {
                Log.i("halfbrick.Mortar.Sound", "Still loading audio...");
                return;
            }
            Iterator i$ = this.mUsedSFXTracks.iterator();
            while (i$.hasNext()) {
                ActiveSound track = i$.next();
                track.UpdateVolume();
            }
        }

        public void SetMusicVolume(float volume) {
            this.mMusicVolume = volume;
            synchronized (this.mMusicPlayer) {
                this.mMusicPlayer.setVolume(this.mMusicVolume, this.mMusicVolume);
            }
        }
    }
}
