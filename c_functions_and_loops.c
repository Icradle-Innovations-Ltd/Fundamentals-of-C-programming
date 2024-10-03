#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void greet(char *name);
int add(int a, int b);
float multiply(float a, float b);
void printArray(int arr[], int size);
int factorial(int n);

int main() {
    // Main function - entry point of the program
    printf("Welcome to the C Functions and Loops Demo!\n\n");

    // Calling a function with a string argument
    greet("Alice");

    // Calling a function with integer arguments and storing the result
    int sum = add(5, 3);
    printf("Sum of 5 and 3 is: %d\n", sum);

    // Calling a function with float arguments
    float product = multiply(2.5, 3.0);
    printf("Product of 2.5 and 3.0 is: %.2f\n", product);

    // Array example
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Array contents: ");
    printArray(numbers, size);

    // For loop example
    printf("\nCounting from 1 to 5 using a for loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop example
    printf("\nCounting down from 5 to 1 using a while loop:\n");
    int count = 5;
    while (count > 0) {
        printf("%d ", count);
        count--;
    }
    printf("\n");

    // Do-while loop example
    printf("\nPrinting even numbers from 2 to 10 using a do-while loop:\n");
    int num = 2;
    do {
        printf("%d ", num);
        num += 2;
    } while (num <= 10);
    printf("\n");

    // Recursive function example
    int n = 5;
    printf("\nFactorial of %d is: %d\n", n, factorial(n));

    return 0;
}

// Function to greet a person
void greet(char *name) {
    printf("Hello, %s!\n", name);
}

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to multiply two floats
float multiply(float a, float b) {
    return a * b;
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// This file is named c_functions_and_loops.c
// It appears to be empty or the selected code block does not contain any actual code.

// In C programming, this file would typically contain:
// 1. Function definitions
// 2. Loop structures (like for, while, or do-while loops)
// 3. Possibly some global variable declarations

// Since there's no code provided, we can't offer specific comments.
// However, here's a general structure of what you might expect in a C file:

// #include statements for necessary header files
// #include <stdio.h>

// Function prototypes (if any)
// void someFunction(int parameter);

// Global variable declarations (if any)
// int globalVar = 0;

// Main function (entry point of the program)
// int main() {
//     // Code block
//     return 0;
// }

// Other function definitions
// void someFunction(int parameter) {
//     // Function body
// }

// Note: This is just a template. Actual content would depend on the specific
// requirements of the program being written.
