#include <stdio.h>

#include "Any.h"
#include "Common.h"

#include "Neu/Parser/NeuParser.h"
#include "Neu/Tokenizer/NeuTokenizer.h"

int main() {

    printf("hello foo!\n");

    ///

    struct NeuTokenizer tokenizer = initNeuTokenizer();

    neuTokenizerMaybeNextFunc(&tokenizer);

    ///

    
}

// int main() {

//     // fatalError("foo");

//     printf("hello foo!\n");

//     struct NeuParser parser = initNeuParser();

//     neuParserParseSourceFile(&parser);

//     return 0;
// }