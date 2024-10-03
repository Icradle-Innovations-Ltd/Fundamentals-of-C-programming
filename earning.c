#include <stdio.h>

int main() {
    // Declare a variable to store the earnings
    float earnings;

    // Prompt the user to input their earnings
    printf("Enter your total earnings: ");
    scanf("%f", &earnings); // Read the input and store it in the earnings variable

    // Print out the earnings
    printf("You have earned: %.2f\n", earnings);

    return 0;
}
