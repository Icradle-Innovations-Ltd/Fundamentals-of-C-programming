// A while loop is used when we know how many times a block of code needs to be executed.
#include <stdio.h>

int main() {
    int i = 0;
    
    // As long as i is less than 5, keep printing the value of i and increment it.
    while (i < 5) {
        printf("%d ", i);
        i++;
    }
    
    printf("\n");
    
    return 0;
}

// more on while loops
#include <stdio.h>

int main() {
    int x = 5; // changed to 5 to make sure loop runs at least once

    printf("Value of x before loop: %d\n", x);
    
    while(x >= 0) {
        printf("%d ", x); // prints values from 5 down to 0
        x--; // decrement x by 1 in each iteration
    }
    
    printf("\n");
    
    return 0;
}