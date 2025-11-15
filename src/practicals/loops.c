/*
 * loops.c
 * Day 4: Exploring repetition with loops (while, for, do-while).
 */
#include <stdio.h>

int main(void) {
    
    // --- Part 1: The 'while' loop ---
    // A 'while' loop needs 3 parts:
    // 1. INITIALIZATION: A counter variable
    int i = 5000;
    
    printf("Starting 'while' loop countdown:\n");
    
    // 2. CONDITION: The loop runs as long as this is true
    while (i > 0) {
        printf("... %d\n", i);
        
        // 3. UPDATE: We must change the variable
        //    to eventually make the condition false.
        i = i - 1; // or i--
    }
    // Once i becomes 0, the (i > 0) condition is false,
    // and the program continues here.
    
    printf("Blast off!\n\n");
    
      // --- Part 2: The 'for' loop ---
    // The 'for' loop combines initialization, condition, and update
    // all in one line. This is the most common loop for counting.
    
    printf("Starting 'for' loop countdown:\n");
    
    //  (  1. INIT  ; 2. CONDITION ; 3. UPDATE )
    for (int j = 5; j > 0; j = j - 1) {
        // 2. The CONDITION (j > 0) is checked *before* each run.
        printf("... %d\n", j);
        // 3. The UPDATE (j = j - 1) runs *after* each run.
    }
    // 1. The INIT (int j = 5) runs *only once* at the very beginning.
    
    printf("Blast off again!\n\n");

    return 0;
}
