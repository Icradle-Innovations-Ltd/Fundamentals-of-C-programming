#include <stdio.h>

int main() {
    int first = 10; // Declare and initialize first variable
    int second = 20; // Declare and initialize second variable

    printf("Value of first: %d\n", first);
    printf("Value of second: %d\n", second);

    if (first == second) { 
        printf("%s\n", "First == Second"); 
    } else {
        printf("%s\n", "First != Second");
    }

    return 0;
}
/*
 * This program demonstrates basic variable declaration, initialization,
 * printing, and conditional statements in C.
 *
 * 1. The program starts by including the standard input/output library.
 *
 * 2. In the main function:
 *    a. Two integer variables, 'first' and 'second', are declared and initialized.
 *    b. The values of these variables are printed to the console.
 *    c. An if-else statement compares the two variables:
 *       - If they are equal, it prints "First == Second"
 *       - If they are not equal, it prints "First != Second"
 *
 * 3. The program uses the printf function to output text and variable values.
 *
 * 4. The if-else statement demonstrates basic conditional logic.
 *
 * 5. The program returns 0, indicating successful execution.
 *
 * This code serves as a simple example of working with variables,
 * conditional statements, and basic output in C.
 */
