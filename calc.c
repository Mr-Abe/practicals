/*
Simple Calculator: Write a program (calc.c) that takes two integers and a character 
(+, -, *, /, %) and uses a switch statement to print the correct result. 
Challenge: How do you handle division by zero?
*/

#include <stdio.h>

int main (void){
    int num1, num2;
    double result;
    char operator;

    printf("Enter two integers and a character (+, -, *, /, %%): ");

    if(scanf("%d %d %c", &num1, &num2, &operator) !=3) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("The result of %d + %d equals: %f\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("The result of %d - %d equals: %f\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("The result of %d * %d equals: %.0f\n", num1, num2, result);
        break;
    case '/':
        if (num2 != 0) {
            result = (double)num1 / (double)num2;
            printf("The result of %d / %d equals: %.2f\n", num1, num2, result);
        } else {
            fprintf(stderr, "Error: Division by zero\n");
            return 1;
        }
        break;
    case '%':
        if (num2 != 0) {
            int mod = num1 % num2;
            printf("The result of %d %% %d equals: %d\n", num1, num2, mod);
        } else {
            fprintf(stderr, "Error: Division by zero (modulus)\n");
            return 1;
        }
        break;
    default:
        fprintf(stderr, "Unknown operator: %c\n", operator);
        return 1;
    }
}
