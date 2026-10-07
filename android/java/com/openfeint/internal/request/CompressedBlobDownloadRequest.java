package com.openfeint.internal.request;

import com.halfbrick.fruitninja.R;
import com.openfeint.internal.OpenFeintInternal;
import com.openfeint.internal.Util;
import com.openfeint.internal.request.CompressedBlobPostRequest;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.zip.InflaterInputStream;
import org.codehaus.jackson.impl.JsonWriteContext;

/* loaded from: classes.dex */
public abstract class CompressedBlobDownloadRequest extends DownloadRequest {
    protected abstract void onSuccessDecompress(byte[] bArr);

    /* renamed from: com.openfeint.internal.request.CompressedBlobDownloadRequest$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$openfeint$internal$request$CompressedBlobPostRequest$CompressionMethod = new int[CompressedBlobPostRequest.CompressionMethod.values().length];

        static {
            try {
                $SwitchMap$com$openfeint$internal$request$CompressedBlobPostRequest$CompressionMethod[CompressedBlobPostRequest.CompressionMethod.Default.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$openfeint$internal$request$CompressedBlobPostRequest$CompressionMethod[CompressedBlobPostRequest.CompressionMethod.LegacyHeaderless.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
        }
    }

    @Override // com.openfeint.internal.request.DownloadRequest
    protected final void onSuccess(byte[] body) {
        try {
            switch (AnonymousClass1.$SwitchMap$com$openfeint$internal$request$CompressedBlobPostRequest$CompressionMethod[CompressedBlobPostRequest.compressionMethod().ordinal()]) {
                case JsonWriteContext.STATUS_OK_AFTER_COMMA /* 1 */:
                    int i = 0;
                    if (CompressedBlobPostRequest.MagicHeader.length < body.length) {
                        while (i < CompressedBlobPostRequest.MagicHeader.length && CompressedBlobPostRequest.MagicHeader[i] == body[i]) {
                            i++;
                        }
                    }
                    if (i == CompressedBlobPostRequest.MagicHeader.length) {
                        int skip = CompressedBlobPostRequest.MagicHeader.length + 4;
                        ByteArrayInputStream postHeaderStream = new ByteArrayInputStream(body, skip, body.length - skip);
                        InputStream decompressedStream = new InflaterInputStream(postHeaderStream);
                        body = Util.toByteArray(decompressedStream);
                        break;
                    }
                    break;
                case JsonWriteContext.STATUS_OK_AFTER_COLON /* 2 */:
                    body = Util.toByteArray(new InflaterInputStream(new ByteArrayInputStream(body)));
                    break;
            }
            onSuccessDecompress(body);
        } catch (IOException e) {
            onFailure(OpenFeintInternal.getRString(R.string.of_io_exception_on_download));
        }
    }
}
