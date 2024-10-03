// A for loop is used when we know how many times a block of code needs to be executed and the loop control variable
// ?can be initialized in one place.

#include <stdio.h>

int main() {
    int i;

    // Initialize i to 0, then keep printing the value of i until it reaches 5.
    for (i = 0; i < 100; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

    // Demonstrate a for loop with a different increment
    printf("Counting by 2s:\n");
    for (i = 0; i <= 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    // Demonstrate a for loop counting backwards
    printf("Countdown:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    // Demonstrate a for loop with multiple variables
    printf("Multiple variables in for loop:\n");
    int j;
    for (i = 0, j = 5; i < 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }

    // Demonstrate an infinite for loop (with a break condition)
    printf("Infinite loop with break:\n");
    for (;;) {
        printf("%d ", i);
        i++;
        if (i > 10) break;
    }
    printf("\n");

    return 0;
