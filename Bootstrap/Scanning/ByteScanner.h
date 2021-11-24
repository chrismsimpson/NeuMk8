#ifndef BYTE_SCANNER_H
#define BYTE_SCANNER_H

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "../Byte.h"

struct ByteScanner {

    const struct SpanOfBytes spanOfBytes;


    ///

    size_t position;

    size_t lineNumber;

    size_t column;
};

///

extern struct ByteScanner initByteScanner(
    const char * bytes,
    const size_t lengthInBytes);

extern struct ByteScanner initByteScannerWithSpanOfBytes(
    const struct SpanOfBytes spanOfBytes);

///

extern const bool byteScannerIsAtEof(
    struct ByteScanner * byteScanner);

///

extern const struct OptionalByte byteScannerMaybePeek(
    struct ByteScanner * byteScanner);


#endif