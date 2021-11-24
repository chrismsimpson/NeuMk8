#include "UnicodeScanner.h"

struct UnicodeScanner initUnicodeScanner(
    const char * bytes,
    const size_t lengthInBytes) {

    struct ByteScanner byteScanner = initByteScanner(bytes, lengthInBytes);

    ///

    return initUnicodeScannerWithByteScanner(byteScanner);
}

struct UnicodeScanner initUnicodeScannerWithByteScanner(
    struct ByteScanner byteScanner) {

    struct UnicodeScanner unicodeScanner = {byteScanner};

    ///

    return unicodeScanner;
}

///

const u_int8_t unicodeScannerPeekSize(
    struct UnicodeScanner * unicodeScanner) {

    const struct OptionalByte b = byteScannerMaybePeek(&unicodeScanner->byteScanner);

    if (b.option == none) {

        return 0;
    }
    else {

        u_int8_t nib = (b.byte >> 4) & 0xF;

        switch (nib) {

        case 15:
            return 4;

        case 14:
            return 3;

        case 12:
            return 2;
        
        default:
            return 1;
        }
    }
}