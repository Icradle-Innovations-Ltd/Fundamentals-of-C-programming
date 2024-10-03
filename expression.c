#include <stdio.h>

int main() {
    float z, y, p;

    // Initialize z with an initial value
    printf("Enter initial value for z: ");
    scanf("%f", &z);

    // Get values for y and p
    printf("Enter value for y: ");
    scanf("%f", &y);

    printf("Enter value for p: ");
    scanf("%f", &p);

    // Calculate z = z + y + p
    z = z + y + p;

    // Print the result
    printf("The result of z = z + y + p is: %.2f\n", z);

    return 0;
}
