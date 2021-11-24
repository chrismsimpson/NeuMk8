#ifndef UNICODE_SCANNER_H
#define UNICODE_SCANNER_H

#include <stdio.h>

#include "ByteScanner.h"

struct UnicodeScanner {

    struct ByteScanner byteScanner;
};

///

extern struct UnicodeScanner initUnicodeScanner(
    const char * bytes,
    const size_t lengthInBytes);

extern struct UnicodeScanner initUnicodeScannerWithByteScanner(
    struct ByteScanner byteScanner);

///

extern const u_int8_t unicodeScannerPeekSize(
    struct UnicodeScanner * unicodeScanner);

#endif