#include <stdio.h>

int main() {
    int num = 123;
    float pi = 3.14159f;
    char c = 'A';
    const char* str = "Hello, World!";
    
    printf("Integer: %d\n", num);
    printf("Floating-point: %f\n", pi);
    printf("Character: %c\n", c);
    printf("String: %s\n", str);
    printf("Hexadecimal integer: %x\n", (unsigned int)num);
    printf("Pointer address: %p\n", (void*)&str);

    return 0;
}