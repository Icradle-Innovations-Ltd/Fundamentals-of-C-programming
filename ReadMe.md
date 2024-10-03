# Fundamentals-of-C-programming
 Learning C from Lecture One programs


## Getting Started with C Programming in VSCode

This repository contains programs for learning the fundamentals of C programming.

### Prerequisites

1. Install Visual Studio Code (VSCode)
2. Install MinGW (Minimalist GNU for Windows)
3. Set up the PATH environment variable for MinGW

### Compiling and Running C Programs

1. Open your C file in VSCode
2. Open the terminal in VSCode (View > Terminal)
3. Navigate to the directory containing your C file
4. Compile the program using GCC:
   
   gcc filename.c -o output_name
   
   Replace `filename.c` with your C file name and `output_name` with your desired executable name.

5. Run the compiled program:
   
   .\output_name
   

### Example

If you have a file named `hello.c`, you would compile and run it like this:


gcc hello.c -o hello
.\hello


This will compile `hello.c` into an executable named `hello` and then run it.

Happy coding!


## Fundamentals of C Programming

### 1. Basic Structure of a C Program


#include <stdio.h>

int main() {
    // Your code here
    return 0;
}


### 2. Data Types

- `int`: Integer
- `float`: Single-precision floating point
- `double`: Double-precision floating point
- `char`: Character

### 3. Variables


int age = 25;
float pi = 3.14;
char grade = 'A';


### 4. Input and Output


printf("Hello, World!\n");
scanf("%d", &number);


### 5. Control Structures

#### If-Else

if (condition) {
    // code
} else {
    // code
}


#### Loops

for (int i = 0; i < 10; i++) {
    // code
}

while (condition) {
    // code
}


### 6. Functions


int add(int a, int b) {
    return a + b;
}


### 7. Arrays


int numbers[5] = {1, 2, 3, 4, 5};


### 8. Pointers


int *ptr = &variable;


### 9. Structures


struct Person {
    char name[50];
    int age;
};


### 10. File Handling


FILE *file = fopen("example.txt", "r");


These are the basic fundamentals of C programming. Each topic has more depth and nuances that you'll learn as you progress in your C programming journey.
