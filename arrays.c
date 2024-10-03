#include <stdio.h>

int main() {
    // 1. One-dimensional numeric array
    // Declaring an integer array of size 5
    int numArray[5] = {10, 20, 30, 40, 50};  // Elements initialized
    printf("One-dimensional numeric array:\n");
    
    // Accessing array elements using index (or subscript)
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d is %d\n", i, numArray[i]);
    }
    
    // 2. Multidimensional array (Two-dimensional array)
    // Declaring a 2x3 array (2 rows, 3 columns)
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printf("\nTwo-dimensional array (matrix):\n");
    
    // Accessing elements in the two-dimensional array using row and column indices
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            printf("Element at [%d][%d] is %d\n", row, col, matrix[row][col]);
        }
    }
    
    // 3. Character array (String)
    // Declaring a character array (string)
    char name[] = "Learn C";  // Automatically null-terminated
    printf("\nCharacter array (string): %s\n", name);
    
    // Modifying a character array
    name[0] = 'l';  // Changing first character
    printf("Modified character array: %s\n", name);
    
    return 0;
}
