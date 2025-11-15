/*
 * control.c
 * Day 3: Exploring control flow (if/else) and operators.
 */
#include <stdio.h>
#include <ctype.h>

int main() {
   int num;
    
    // We get user input for the first time.
    // scanf reads formatted input from the terminal.
    // &num means "the memory address of num"
    printf("Enter an integer: ");
    scanf("%d", &num);

    // --- Part 1: Arithmetic Operator (%) ---
    // We use modulus to check for even/odd.
    // If num % 2 has a remainder of 0, it's even.
    
    // --- Part 2: Relational Operator (==) ---
    // '==' asks the question: "is the left side equal to the right side?"
    
    // --- Part 3: Control Flow (if/else) ---
    // 'if' executes the {} block only if the condition in () is true (1).
    if ( (num % 2) == 0 ) {
        printf("%d is an even number.\n", num);
    } else {
        // 'else' runs if the 'if' condition was false (0).
        printf("%d is an odd number.\n", num);
    }
    
     // --- Part 4: Logical Operators (&&, ||) ---
    // Let's check if the number is in a specific range.
    
    // This if-else-if chain checks conditions one by one
    // until one is true, then it stops.
    
    if (num > 0 && num < 100) {
        printf("%d is positive AND less than 100.\n", num);
    } 
    else if (num < 0) {
        printf("%d is a negative number.\n", num);
    }
    else if (num == 0) {
        printf("%d is zero.\n", num);
    }
    else {
        // The 'else' block is the catch-all.
        // It runs if *none* of the previous conditions were true.
        printf("%d is 100 or greater.\n", num);
    }

    // --- Part 5: The 'switch' statement ---
    // 'switch' is a clean way to handle multiple '==' checks
    // against a single integer or char variable.
    
    char grade;
    
    // Note the space before %c. This is a common trick
    // to make scanf skip any leftover newline/whitespace
    // from the previous scanf("%d", &num).
    printf("\nEnter a letter grade (A, B, C, D, F): ");
    if (scanf(" %c", &grade) != 1) {
        fprintf(stderr, "Input error\n");
        return 1;
    }

    // normalize input
    grade = toupper((unsigned char)grade);
    
    switch (grade) {
        case 'A': // Checks if (grade == 'A')
            printf("Excellent!\n");
            break; // 'break' is CRITICAL. It exits the switch.

        case 'B': // Checks if (grade == 'B')
            printf("Good job.\n");
            break;

        case 'C': // Checks if (grade == 'C')
            printf("You passed.\n");
            break;

        // You can stack cases
        case 'D':
        case 'F':
            printf("You did not pass. Please see the instructor.\n");
            break;

        default:
            // 'default' is the 'else' block for a switch.
            // It runs if no other case matches.
            printf("Invalid grade entered.\n");
    }

    return 0;
}
