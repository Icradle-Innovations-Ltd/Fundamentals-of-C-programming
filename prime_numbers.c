#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    int i;
    for (i = 2; i <= num / 2; i++) { // We only need to go up to half of the number
        if (num % i == 0) return 0; // If the number is divisible by any number between 2 and half, it's not prime
    }
    return 1; // Otherwise, the number is prime
}

int main() {
    int num;
    for (num = 2; num <= 20; num++) { // Loop through numbers from 2 to 20
        if (is_prime(num)) printf("%d ", num); // If a number is prime, print it out
    }
    printf("\n");
    return 0;
}