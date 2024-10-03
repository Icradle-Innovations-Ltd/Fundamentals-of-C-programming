#include <stdio.h>

int main() {
    int integer = 42;
    float floatNum = 3.14159f;
    double doubleNum = 3.14159265359;
    char character = 'A';
    char string[] = "Hello, World!";
    unsigned int unsignedInt = 4294967295;
    long int longInt = 9223372036854775807;
    int hexNum = 255;
    int octalNum = 64;

    printf("Integer: %d\n", integer);
    printf("Float: %f\n", floatNum);
    printf("Double: %lf\n", doubleNum);
    printf("Character: %c\n", character);
    printf("String: %s\n", string);
    printf("Unsigned Integer: %u\n", unsignedInt);
    printf("Long Integer: %ld\n", longInt);
    printf("Hexadecimal: %x\n", hexNum);
    printf("Octal: %o\n", octalNum);
    printf("Memory address of integer: %p\n", (void*)&integer);

    return 0;
}

// The main differences between a float and a double in C are:

// Precision: A double has higher precision than a float. It can represent more decimal places accurately.

// Size: A double typically uses 64 bits of memory, while a float uses 32 bits.

// Range: A double can represent a wider range of values than a float.

// Format specifier: When using printf(), a float uses %f, while a double can use %f or %lf (though %f works for both in most modern compilers).