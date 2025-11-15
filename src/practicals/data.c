/*
 * data.c
 * Day 2: Exploring variables, data types, and operators.
 */
#include <stdio.h>

int main(void) {
    // 1. DECLARATION AND INITIALIZATION
    
    // 'age' is declared as an 'int' and initialized with the value 30.
    int age = 30; 
    
    // 'pi' is declared as a 'float' and initialized.
    // The 'f' at the end tells the compiler this is a float literal.
    float pi = 3.14159f; 
    
    // 'grade' is declared as a 'char' and initialized.
    // Note the single quotes ('') for characters.
    char grade = 'A';

    // A 'char' is just... a small integer! It's the ASCII value.
    // 'grade_value' will store the integer value of 'A', which is 65.
    int grade_value = grade;

    // 2. PRINTING WITH FORMAT SPECIFIERS
    // We use "format specifiers" to tell printf what type to expect.
    // %d = int (decimal)
    // %f = float
    // %c = char
    printf("--- Part 1: Variables ---\n");
    printf("Int 'age': %d\n", age);
    printf("Float 'pi': %f\n", pi);
    printf("We can limit float precision: %.2f\n", pi); // "%.2f" = 2 decimal places
    printf("Char 'grade': %c\n", grade);
    printf("'grade' as an int (ASCII): %d\n", grade_value);
    
    // 3. USING SIZEOF
    // %lu = "long unsigned int", which is what sizeof returns.
    printf("\n--- Part 2: Sizes (in bytes) ---\n");
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of variable 'grade': %lu bytes\n", sizeof(grade));

     // --- Part 3: Arithmetic Operators ---
    printf("\n--- Part 3: Arithmetic ---\n");
    int a = 10;
    int b = 3;

    printf("%d + %d = %d\n", a, b, a + b); // Addition
    printf("%d - %d = %d\n", a, b, a - b); // Subtraction
    printf("%d * %d = %d\n", a, b, a * b); // Multiplication

    // THE INTEGER DIVISION TRAP!
    // An 'int' / 'int' MUST produce an 'int'.
    // The compiler *truncates* (chops off) the decimal.
    printf("%d / %d = %d\n", a, b, a / b); // 10 / 3 = 3, not 3.333

    // The Modulus operator (%) gives the REMAINDER of a division.
    printf("%d %% %d = %d\n", a, b, a % b); // 10 % 3 = 1 (10 / 3 is 3 with 1 left over)

    // How to get the *real* answer?
    // We must use floats!
    float fa = 10.0f;
    float fb = 3.0f;
    printf("%.1f / %.1f = %f\n", fa, fb, fa / fb); // 10.0 / 3.0 = 3.333333

    // You can also "cast" an int to a float temporarily.
    float cast_result = (float)a / b;
    printf("(float)a / b = %f\n", cast_result);

    // --- Part 4: Relational & Logical Operators ---
    // These let us make decisions.
    printf("\n--- Part 4: Logic ---\n");
    
    int x = 5;
    int y = 10;

    // Relational Operators: <, >, ==, !=, <=, >=
    printf("Is x < y? %d\n", x < y);   // 1 (true)
    printf("Is x == y? %d\n", x == y);  // 0 (false)
    printf("Is x != y? %d\n", x != y);  // 1 (true)

    // Logical Operators: && (AND), || (OR), ! (NOT)
    // (x < 10) is true (1)
    // (y > 5) is true (1)
    printf("Is (x < 10) AND (y > 5)? %d\n", (x < 10) && (y > 5)); // 1 && 1 = 1 (true)
    
    // (x == 5) is true (1)
    // (y == 5) is false (0)
    printf("Is (x == 5) OR (y == 5)? %d\n", (x == 5) || (y == 5)); // 1 || 0 = 1 (true)

    // ! (NOT) inverts the value.
    printf("Is NOT (x == 5)? %d\n", !(x == 5)); // !(true) = 0 (false)


    return 0;
}
