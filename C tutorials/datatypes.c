#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    char phrase[] = "Giraffe Academy";
    printf("age: %p\ngpa: %p\ngrade: %p\nphrase: %p\n", &age, &gpa, &grade, &phrase);
    return 0;
}