#include <stdio.h>

int main() {
    int i, n;

    // Prompt the user to enter the upper limit
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are:\n", n);

    // Loop from 1 to n
    for (i = 1; i <= n; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            // Print the even number
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
