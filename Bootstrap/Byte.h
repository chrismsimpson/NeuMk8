#ifndef BYTE_H
#define BYTE_H

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

#endif