#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // argc holds the number of arguments
    printf("You gave me %d arguments:\n", argc);

    // Let's loop through them and print them out.
    // 'argv' is an array, and arrays in C are 0-indexed.
    for (int i = 0; i < argc; i++) {
        printf("  Argument %d: %s\n", i, argv[i]);
    }

    // Note: argv[0] is *always* the name of the program itself!

    if (argc > 1) {
        printf("Your first *real* argument was: %s\n", argv[1]);
        return 0; // Success
    } else {
        printf("Try running me again with more arguments!\n");
        printf("Example: ./hello test 123\n");
        return 1; // '1' is a code for "general error"
    }
}
