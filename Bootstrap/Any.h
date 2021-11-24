#ifndef ANY_H
#define ANY_H

struct RefOfAny {

    const void * any;
};

struct MutableRefOfAny {

    void * any;
};

///

struct AllocOfAny {

    const struct RefOfAny reference;
};

struct MutableAllocOfAny {

    struct MutableRefOfAny reference;
};

#endif