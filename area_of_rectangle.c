#include <stdio.h>

// Function declaration
void calculateProperties(float length, float width);

int main() {
    // 1. Declaring regular variables
    float length = 10.5;  // Regular float variable for length
    float width = 5.2;    // Regular float variable for width
    
    // 2. Declaring a constant variable
    const float HEIGHT = 15.0;  // Constant float variable, cannot be changed after initialization
    
    // 3. Declaring a static variable
    static int count = 0;  // Static variable retains its value between function calls
    
    // 4. Declaring a register variable
    register int area;  // Register variable, stored in CPU register for fast access (note: the compiler may ignore this request)
    
    // Increment the static variable count
    count++;
    
    // Calculate area using regular variables
    area = length * width;
    
    // Display the properties
    printf("Rectangle Properties:\n");
    printf("Length: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Height: %.2f\n", HEIGHT);
    printf("Area: %d\n", area);
    printf("Calculation count: %d\n", count);
    
    // Call the function to calculate more properties
    calculateProperties(length, width);
    
    return 0;
}

// Function to calculate and display perimeter and volume
void calculateProperties(float length, float width) {
    // 5. Declaring an auto variable (default for local variables)
    auto float perimeter;  // Auto keyword (optional, as all local variables are auto by default)
    
    // Calculate perimeter
    perimeter = 2 * (length + width);
    
    // Display the perimeter
    printf("Perimeter: %.2f\n", perimeter);
    
    // 6. Declaring an external variable
    extern float HEIGHT;  // External declaration (assuming HEIGHT is declared elsewhere, in this case, we used const)
    
    // Calculate and display volume
    float volume = length * width * HEIGHT;
    printf("Volume: %.2f\n", volume);
}

