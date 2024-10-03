
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    // Integer types
    int integer = 42;
    short int shortInteger = 1000;
    long int longInteger = 1000000L;
    long long int longLongInteger = 1000000000LL;

    // Unsigned integer types
    unsigned int unsignedInteger = 4294967295U;
    unsigned short int unsignedShortInteger = 65535;
    unsigned long int unsignedLongInteger = 4294967295UL;
    unsigned long long int unsignedLongLongInteger = 18446744073709551615ULL;

    // Floating-point types
    float floatNumber = 3.14159f;
    double doubleNumber = 3.14159265358979323846;
    long double longDoubleNumber = 3.14159265358979323846L;

    // Print integer types
    printf("Integer: %d\n", integer);
    printf("Short Integer: %hd\n", shortInteger);
    printf("Long Integer: %ld\n", longInteger);
    printf("Long Long Integer: %lld\n", longLongInteger);

    // Print unsigned integer types
    printf("Unsigned Integer: %u\n", unsignedInteger);
    printf("Unsigned Short Integer: %hu\n", unsignedShortInteger);
    printf("Unsigned Long Integer: %lu\n", unsignedLongInteger);
    printf("Unsigned Long Long Integer: %llu\n", unsignedLongLongInteger);

    // Print floating-point types
    printf("Float: %f\n", floatNumber);
    printf("Double: %lf\n", doubleNumber);
    printf("Long Double: %Lf\n", longDoubleNumber);

    // Print size of each type
    printf("\nSize of int: %zu bytes\n", sizeof(int));
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    // Print range of integer types
    printf("\nRange of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int: 0 to %u\n", UINT_MAX);
    printf("Range of short int: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of long long int: %lld to %lld\n", LLONG_MIN, LLONG_MAX);

    return 0;
}
