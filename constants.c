// this program will print circumference of a circle
#include <stdio.h>
#define PI 3.14

int main() {
    float rad;
    printf("Enter radius: ");
    scanf("%f", &rad);
    
    float circumference = 2 * PI * rad;
    
    printf("The circumference is %.2f\n", circumference);
    
    return 0;
}

