/*
ASCII Value: Write a program that takes a single character from the user (scanf(" %c", &ch);) 
and prints its ASCII integer value. (Note the space before %c in scanf—this is a common trick 
to consume whitespace).
*/

#include <stdio.h>

int main(void) {
    char single_char;
    
    printf("Press any single key and I will return the ASCII value: ");
    scanf(" %c", &single_char);

    printf("The key %c has an ASCII value of: %d\n", single_char, (int)single_char);

    return 0;
}
