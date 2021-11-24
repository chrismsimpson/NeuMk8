
#include "ByteScanner.h"

static const char byteScannerPeek(
    struct ByteScanner * byteScanner);

static void byteScannerPeekLength(
    struct ByteScanner * byteScanner,
    char * buffer,
    const size_t length);

///

struct ByteScanner initByteScanner(
    const char * bytes,
    const size_t lengthInBytes) {

    return initByteScannerWithSpanOfBytes(initSpanOfBytes(bytes, lengthInBytes, lengthInBytes));
}

struct ByteScanner initByteScannerWithSpanOfBytes(
    const struct SpanOfBytes spanOfBytes) {

    struct ByteScanner byteScanner = {spanOfBytes, 0, 1, 1};

    ///

    return byteScanner;
}

///

const bool byteScannerIsAtEof(
    struct ByteScanner * byteScanner) {

    return byteScanner->position > byteScanner->spanOfBytes.lengthInBytes;
}

///

const struct OptionalByte byteScannerMaybePeek(
    struct ByteScanner * byteScanner) {

    if (byteScannerIsAtEof(byteScanner)) {

        return initNilByte();
    }

    ///

    return initOptionalByte(byteScannerPeek(byteScanner));
}

///

const char byteScannerPeek(
    struct ByteScanner * byteScanner) {

    char buffer;

    byteScannerPeekLength(byteScanner, &buffer, 1);

    return buffer;
}

void byteScannerPeekLength(
    struct ByteScanner * byteScanner,
    char * buffer,
    const size_t length) {

    strncpy(buffer, &byteScanner->spanOfBytes.bytes[byteScanner->position], length);
}
