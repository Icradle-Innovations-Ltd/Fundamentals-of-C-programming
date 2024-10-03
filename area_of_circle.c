#include <stdio.h>
#define PI 3.14159f  // Use float constant for PI

int main() {
    float radius, area;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Output the result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
