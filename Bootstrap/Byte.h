#ifndef BYTE_H
#define BYTE_H

#include <stdio.h>

#include "Option.h"

struct OptionalByte {

    const enum Option option;

    ///

    const char byte;
};

struct MutableOptionalByte {

    enum Option option;

    ///

    char byte;
};

///

struct SpanOfBytes {

    const char * bytes;

    const size_t lengthInBytes;

    const size_t limitInBytes;
};

struct MutableSpanOfBytes {

    char * bytes;

    size_t lengthInBytes;

    const size_t limitInBytes;
};

///

extern const struct OptionalByte initNilByte();

extern const struct OptionalByte initOptionalByte(
    const char byte);

///

extern struct MutableOptionalByte initMutableNilByte();

extern struct MutableOptionalByte initMutableOptionalByte(
    const char byte);

///

extern const struct SpanOfBytes initSpanOfBytes(
    const char * bytes,
    const size_t lengthInBytes,
    const size_t limitInBytes);

///

extern struct MutableSpanOfBytes initMutableSpanOfBytes(
    char * bytes,
    const size_t lengthInBytes,
    const size_t limitInBytes);

#endif