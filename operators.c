#include <stdio.h>
#include <math.h>

int main() {
    int a = 5, b = 3, c = 2;
    float x = 2.5, y = 1.7;
    double result;

    result = (((a++ * b--) / (float)c) + pow(x, y)) * (10 % 3) - 
             (a > b ? a : b) + (x < y && a != c) * 5 + 
             ((x + y) / 2) * (a & b | c ^ 2) + 
             sqrt(fabs(sin(x) * cos(y)));

    printf("The result of the complex expression is: %f\n", result);

    return 0;
}
