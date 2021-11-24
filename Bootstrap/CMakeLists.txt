project (main)

add_executable(
    main
    Byte.c
    Character.c
    Common.c
    main.c
    Neu/Parser/NeuParser.c
    Neu/Tokenizer/NeuTokenizer.c
    Neu/Tokens/NeuToken.c
    Scanning/ByteScanner.c
    Scanning/UnicodeScanner.c
)