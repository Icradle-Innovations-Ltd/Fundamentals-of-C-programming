#include <stdio.h>
#include <math.h>

int main() {
    int a = 10, b = 3;
    double x = 4.5, y = 2.0;

    printf("Basic arithmetic operations:\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    printf("\nIncrement and Decrement:\n");
    printf("a++ = %d\n", a++);
    printf("++a = %d\n", ++a);
    printf("b-- = %d\n", b--);
    printf("--b = %d\n", --b);

    printf("\nFloating-point operations:\n");
    printf("x + y = %.2f\n", x + y);
    printf("x - y = %.2f\n", x - y);
    printf("x * y = %.2f\n", x * y);
    printf("x / y = %.2f\n", x / y);

    printf("\nMath library functions:\n");
    printf("Square root of %.1f = %.2f\n", x, sqrt(x));
    printf("%.1f raised to power %.1f = %.2f\n", x, y, pow(x, y));
    printf("Sine of %.1f radians = %.2f\n", x, sin(x));
    printf("Cosine of %.1f radians = %.2f\n", x, cos(x));

    return 0;
}