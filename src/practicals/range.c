/*
In-Range: Write a program that takes an integer and prints 1 (true) if 
it's between 1 and 100 (inclusive) and 0 (false) otherwise. Use logical operators.
*/

#include <stdio.h>

int main(void) {
    int number;

    printf("Enter any whole number: ");
    scanf(" %d", &number);

    printf("%d is between 1 and 100 (1=true, 0=false): %d\n", number, (number <= 100 && number >=1));

    return 0;
}
