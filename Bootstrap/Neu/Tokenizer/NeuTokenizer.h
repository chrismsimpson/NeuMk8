#ifndef NEU_TOKENIZER_H
#define NEU_TOKENIZER_H

struct NeuTokenizer {

};

///

extern struct NeuTokenizer initNeuTokenizer();

///

extern void neuTokenizerMaybeNextFunc(
    struct NeuTokenizer * tokenizer);

#endif