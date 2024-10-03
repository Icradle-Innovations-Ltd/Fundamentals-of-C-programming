
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100 // Define the maximum length of the string

int main() {
    char input[MAX_LENGTH]; // Declare a character array to store the input string
    int length; // Variable to store the length of the string

    // Prompt the user to enter a string
    printf("Enter a string (max %d characters): ", MAX_LENGTH - 1);
    
    // Read the input string from the user
    fgets(input, MAX_LENGTH, stdin);

    // Remove the newline character if present
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    // Calculate the length of the input string
    length = strlen(input);

    // Print the length of the string
    printf("The length of the string is: %d\n", length);

    // Check if the string exceeds the maximum length
    if (length == MAX_LENGTH - 1) {
        printf("Warning: The input may have been truncated.\n");
    }

    return 0;
}
