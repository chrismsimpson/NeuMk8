project (main)

add_executable(
    main
    Byte.c
    Common.c
    main.c
    Neu/Parser/NeuParser.c
    Neu/Tokenizer/NeuTokenizer.c
    Neu/Tokens/NeuToken.c
    Scanning/ByteScanner.c
)