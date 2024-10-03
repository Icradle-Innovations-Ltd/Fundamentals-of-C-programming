#include <stdio.h>

int main() {
    int age;
    float height;
    char initial;
    
    // Accept user input
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    
    printf("Enter your first name initial: ");
    scanf(" %c", &initial);
    
    // Use increment and decrement
    int next_year_age = age + 1;
    int last_year_age = age - 1;
    
    // Print results
    printf("\nResults:\n");
    printf("Your age: %d\n", age);
    printf("Your age next year: %d\n", next_year_age);
    printf("Your age last year: %d\n", last_year_age);
    printf("Your height: %.2f meters\n", height);
    printf("Your initial: %c\n", initial);
    
    // Demonstrate increment and decrement
    printf("\nDemonstrating increment and decrement:\n");
    printf("Original age: %d\n", age);
    printf("Age after increment: %d\n", ++age);
    printf("Age after decrement: %d\n", --age);

    return 0;
}
