
/*
 * Objects in C
 *
 * C is a procedural language and doesn't have built-in support for objects
 * like object-oriented languages. However, we can simulate object-oriented
 * concepts using structures and function pointers.
 *
 * Here's an example of creating a simple "Rectangle" object:
 */

#include <stdio.h>
#include <stdlib.h>

// Define the Rectangle "class"
typedef struct {
    int width;
    int height;
    int (*area)(struct Rectangle*);
    int (*perimeter)(struct Rectangle*);
} Rectangle;

// Method to calculate area
int calculateArea(Rectangle* self) {
    return self->width * self->height;
}

// Method to calculate perimeter
int calculatePerimeter(Rectangle* self) {
    return 2 * (self->width + self->height);
}

// Constructor for Rectangle
Rectangle* createRectangle(int width, int height) {
    Rectangle* rect = (Rectangle*)malloc(sizeof(Rectangle));
    rect->width = width;
    rect->height = height;
    rect->area = calculateArea;
    rect->perimeter = calculatePerimeter;
    return rect;
}

int main() {
    // Create a rectangle object
    Rectangle* myRect = createRectangle(5, 3);

    // Use the object's methods
    printf("Area: %d\n", myRect->area(myRect));
    printf("Perimeter: %d\n", myRect->perimeter(myRect));

    // Free the allocated memory
    free(myRect);

    return 0;
}

