#include <stdio.h>

int main() {
    // Variable declarations for the sides of the trapezium
    float sideA, sideB, sideC, sideD, circumference;
    
    // Input the lengths of the four sides
    printf("Enter the length of side A: ");
    scanf("%f", &sideA);
    
    printf("Enter the length of side B: ");
    scanf("%f", &sideB);
    
    printf("Enter the length of side C: ");
    scanf("%f", &sideC);
    
    printf("Enter the length of side D: ");
    scanf("%f", &sideD);
    
    // Calculate the circumference (perimeter)
    circumference = sideA + sideB + sideC + sideD;
    
    // Output the result
    printf("The circumference of the trapezium is: %.2f\n", circumference);
    
    return 0; // Indicate that the program ended successfully
}
