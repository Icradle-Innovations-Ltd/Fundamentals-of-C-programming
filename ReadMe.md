# mingw-w64
MinGW-W64 GCC-8.1.0 Mirror

Official Website: [MinGW-W64](http://mingw-w64.org/doku.php)

## Installation Instructions

1. Determine the MingGW architecture:
  * Version: **8.1.0**
  * Architecture: **i686** or **x86_64**
    * **i686**: is the 32-bit version
    * **x86_64**: is the 64-bit version of the OS (**Recommended**)
  * Threads: **posix** or **win32**
    * **posix**: Enable C++11/C11 multithreading features. (**Recommended**)
       * Note: Makes libgcc depend on libwinpthreads, so that even if you don't directly call pthreads API, you'll be distributing the winpthreads DLL. There's nothing wrong with distributing one more DLL with your application.
    * **win32**: No C++11 multithreading features.
  * Exception: **dwarf** or **sjlj**
    * **seh**: Available for 64-bit GCC 4.8 (x86_64) (**Recommended**)
      * Performance: Zero overhead exception 
    * **dwarf**: Available for 32 bit only (i686).
      * Performance: No permanent runtime overhead.
    * **sjlj**: Available for 32 bit and 64 bit.
      * Performance: ~15% in exception heavy code
  * Build revision: **0**

**Recommended for Windows 10 x64:**
  * Version = **8.1.0**
  * Architecture = **x86_64** (x64 OS)
  * Threads = **posix** (Allow threading)
  * Exception = **seh** (Zero overhead exception)
  * Build revision = **0**

2. Download the appropriate 7-zip (*.7z) file to your local machine:
  * ARCHITECTURE-VERSION-THREAD-EXCEPTION-*.7z

**Recommended for Windows 10 x64:**
  * x86_64-8.1.0-release-posix-seh-rt_v6-rev0.7z

3. Unzip the 7-Zip file to **C:\mingw-w64\mingw64**

4. Add **C:\mingw-w64\mingw64\bin** to **PATH**

Batch File:

```
echo off
set PATH=C:\mingw-w64\mingw64\bin;%PATH%
rem echo %PATH%
rem cd "C:\mingw-w64\mingw64\bin"
cd "C:\"
"C:\WINDOWS\system32\cmd.exe"
```

5. Open a new **cmd.exe** and verify the GCC compiler is setup.

```
>>> gcc -v
```

## Background

The **mingw-w64-install.exe** online installer is a minimal application that downloads the correct MingGW architecture version from SourceForge using a file lookup **repository.txt** here:

[Home / Toolchains targetting Win32 / Personal Builds / mingw-builds / installer / repository.txt](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/)

![mingw-w64-install.exe](mingw-w64-install.png)


The installer downloads the appropriate 7-Zip MinGW file and extracts the content to **C:\wingw-w64** or **C:\Program Files (x86)\mingw-w64**. The **<mingw-w64>\mingw64\bin** is then registered with **PATH** environment.


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
