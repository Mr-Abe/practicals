/*
Positive, Negative, or Zero: Write a program that takes an integer from the user and, 
using relational operators and if statements, prints "The number is positive," 
"The number is negative," or "The number is zero."
*/

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number to have me confirm if it is positive, negative, or zero: ");
    scanf(" %d", &num);

    if (num > 0) printf("%d is positive!", num);
    else if (num < 0) printf("%d is negative!", num);
    else printf("Number entered is 0");

    return 0;
}