package com.openfeint.internal.request;

import com.openfeint.api.OpenFeintSettings;
import com.openfeint.internal.OpenFeintInternal;
import com.openfeint.internal.request.multipart.ByteArrayPartSource;
import com.openfeint.internal.request.multipart.FilePart;
import com.openfeint.internal.request.multipart.PartSource;
import com.openfeint.internal.resource.BlobUploadParameters;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.util.zip.DeflaterOutputStream;
import org.codehaus.jackson.impl.JsonWriteContext;

/* loaded from: classes.dex */
public class CompressedBlobPostRequest extends BlobPostRequest {
    public static final byte[] MagicHeader = "OFZLHDR0".getBytes();
    String mFilename;
    BlobUploadParameters mParameters;
    byte mUncompressedData;

    public enum CompressionMethod {
        Default,
        Uncompressed,
        LegacyHeaderless
    }

    public CompressedBlobPostRequest(BlobUploadParameters parameters, String filename, byte[] uncompressedData) {
        super(parameters, _makePartSource(filename, uncompressedData), FilePart.DEFAULT_CONTENT_TYPE);
    }

    public static CompressionMethod compressionMethod() {
        String s = (String) OpenFeintInternal.getInstance().getSettings().get(OpenFeintSettings.SettingCloudStorageCompressionStrategy);
        if (s == null) {
            return CompressionMethod.Default;
        }
        if (s.equals(OpenFeintSettings.CloudStorageCompressionStrategyLegacyHeaderlessCompression)) {
            return CompressionMethod.LegacyHeaderless;
        }
        if (s.equals(OpenFeintSettings.CloudStorageCompressionStrategyNoCompression)) {
            return CompressionMethod.Uncompressed;
        }
        return CompressionMethod.Default;
    }

    private static byte[] _compress(byte[] data) throws IOException {
        ByteArrayOutputStream baos = new ByteArrayOutputStream();
        DeflaterOutputStream dos = new DeflaterOutputStream(baos);
        dos.write(data);
        dos.close();
        return baos.toByteArray();
    }

    private static byte[] integerToLittleEndianByteArray(int i) {
        byte[] rv = {(byte) (i >> 0), (byte) (i >> 8), (byte) (i >> 16), (byte) (i >> 24)};
        return rv;
    }

    private static PartSource _makePartSource(String filename, byte[] uncompressedData) {
        byte[] uploadData = uncompressedData;
        try {
            switch (AnonymousClass1.$SwitchMap$com$openfeint$internal$request$CompressedBlobPostRequest$CompressionMethod[compressionMethod().ordinal()]) {
                case JsonWriteContext.STATUS_OK_AFTER_COMMA /* 1 */:
                    byte[] tenativeData = _compress(uncompressedData);
                    byte[] uncompressedSize = integerToLittleEndianByteArray(uncompressedData.length);
                    int compressedLength = tenativeData.length + MagicHeader.length + uncompressedSize.length;
                    if (compressedLength < uncompressedData.length) {
                        uploadData = new byte[compressedLength];
                        System.arraycopy(MagicHeader, 0, uploadData, 0, MagicHeader.length);
                        System.arraycopy(uncompressedSize, 0, uploadData, MagicHeader.length, uncompressedSize.length);
                        System.arraycopy(tenativeData, 0, uploadData, MagicHeader.length + 4, tenativeData.length);
                        break;
                    }
                    break;
                case JsonWriteContext.STATUS_OK_AFTER_COLON /* 2 */:
                    uploadData = _compress(uncompressedData);
                    break;
            }
            return new ByteArrayPartSource(filename, uploadData);
        } catch (IOException e) {
            return null;
        }
    }

    /* renamed from: com.openfeint.internal.request.CompressedBlobPostRequest$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$openfeint$internal$request$CompressedBlobPostRequest$CompressionMethod = new int[CompressionMethod.values().length];

        static {
            try {
                $SwitchMap$com$openfeint$internal$request$CompressedBlobPostRequest$CompressionMethod[CompressionMethod.Default.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$openfeint$internal$request$CompressedBlobPostRequest$CompressionMethod[CompressionMethod.LegacyHeaderless.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
        }
    }
}
