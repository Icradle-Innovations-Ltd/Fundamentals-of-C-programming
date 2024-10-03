
#include <stdio.h>

int main() {
    int i, n;

    // Prompt the user to enter the upper limit
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Odd numbers from 1 to %d are:\n", n);

    // Loop from 1 to n
    for (i = 1; i <= n; i++) {
        // Check if the number is odd
        if (i % 2 != 0) {
            // Print the odd number
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
