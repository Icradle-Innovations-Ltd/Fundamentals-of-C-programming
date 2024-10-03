
#include <stdio.h>

#define SIZE 5

int main() {
    int numbers[SIZE];
    int i;

    // Initialize the array
    printf("Enter %d integers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    // Print the array
    printf("The array contains:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Calculate the sum of array elements
    int sum = 0;
    for (i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }
    printf("Sum of array elements: %d\n", sum);

    // Find the maximum element
    int max = numbers[0];
    for (i = 1; i < SIZE; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("Maximum element: %d\n", max);

    return 0;
}


/*
 * Arrays in C:
 * - An array is a collection of elements of the same data type.
 * - Arrays provide a way to store multiple values in a single variable.
 * - Elements in an array are stored in contiguous memory locations.
 * - Array indices start at 0 and go up to (size - 1).
 * - Arrays can be one-dimensional, two-dimensional, or multi-dimensional.
 * - The size of an array is fixed once it is declared.
 * - Arrays can be initialized at declaration or element by element.
 * - Accessing array elements is done using the array name and index: array[index].
 * - Arrays can be passed to functions as arguments.
 * - The name of an array acts as a pointer to its first element.
 */
