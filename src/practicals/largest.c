/*
Write a program (largest.c) that takes three integers from the user 
and uses if-else-if logic to find and print the largest of the three.
*/

// all digits are the same print the number or statement that they are the same?
// what's the size of each digit?

#include <stdio.h>


int main(void) {
    int number1, number2, number3;

    printf("Please provide 3 integers separated by a space (123 3 10).\n");
    
    if (scanf(" %d %d %d", &number1, &number2, &number3) != 3){
        fprintf(stderr, "Incorrect input.\n");
    }

    if ((number1 > number2) && number1 > number3) {
        printf("The largest number is %d!\n", number1);
    } else if ((number2 > number1) && number2 > number3) {
        printf("The largest number is %d!\n", number2);
    } else if ((number3 > number1) && number3 > number2) {
        printf("The largest number is %d!\n", number3);
    } else {
        printf("All numbers are the same: %d, %d, %d\n", number1, number2, number3);
    }
}
