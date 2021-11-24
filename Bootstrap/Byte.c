#include "Byte.h"

const struct OptionalByte initNilByte() {

    const struct OptionalByte optionalByte = {none, '\0'};

    ///

    return optionalByte;
}

const struct OptionalByte initOptionalByte(
    const char byte) {

    const struct OptionalByte optionalByte = {some, byte};

    ///

    return optionalByte;
}

///

struct MutableOptionalByte initMutableNilByte() {

    struct MutableOptionalByte mutableOptionalByte = {none, '\0'};

    ///

    return mutableOptionalByte;
}

struct MutableOptionalByte initMutableOptionalByte(
    const char byte) {

    struct MutableOptionalByte mutableOptionalByte = {some, byte};

    ///

    return mutableOptionalByte;
}

///

const struct SpanOfBytes initSpanOfBytes(
    const char * bytes,
    const size_t lengthInBytes,
    const size_t limitInBytes) {

    const struct SpanOfBytes spanOfBytes = {bytes, lengthInBytes, limitInBytes};

    ///

    return spanOfBytes;
}

///

struct MutableSpanOfBytes initMutableSpanOfBytes(
    char * bytes,
    const size_t lengthInBytes,
    const size_t limitInBytes) {

    struct MutableSpanOfBytes mutableSpanOfBytes = {bytes, lengthInBytes, limitInBytes};

    ///

    return mutableSpanOfBytes;
}