
#include <stdio.h>

int main() {
    // Declare variables
    int age;
    char name[50];

    // Prompt user for name
    printf("Enter your name: ");
    // Read user input for name
    fgets(name, sizeof(name), stdin);

    // Remove newline character from name input
    name[strcspn(name, "\n")] = 0;

    // Prompt user for age
    printf("Enter your age: ");
    // Read user input for age
    scanf("%d", &age);

    // Display the input information
    printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}
