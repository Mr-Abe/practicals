/*
 * hello.c
 * My first C program.
 * This is a multi-line comment.
 */

// This is a single-line comment. We use them to explain our code.
#include <stdio.h>

/*
 * The 'main' function is the entry point.
 * Every C program must have exactly one 'main' function.
 * The OS calls this function to start your program.
 */
int main(int argc, char *argv[]) {
    
    // printf is a function from stdio.h that "prints formatted" text to the terminal.
    printf("Hello, world!\n\n");

    // '\n' is an "escape character" that means "new line".
    // Try removing it and see what happens!

    // 'return 0' signals to the OS that the program finished successfully.
    // '0' is the standard code for "success". changing it to another number indicates an error in terminal.
    return 0;
}
