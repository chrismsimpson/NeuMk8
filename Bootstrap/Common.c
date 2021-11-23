#include "Common.h"

void fatalError() {
    
    printf("fatal error\n");

    exit(1);
}

void fatalErrorWithMessage(
    const char * message) {
    
    printf("fatal error: %s\n", message);

    exit(1);
}