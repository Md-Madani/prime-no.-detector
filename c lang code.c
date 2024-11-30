#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) {
        return 0; // Not a prime number
    }
    // Check divisibility from 2 to sqrt(num)
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

// Function to print all prime numbers up to a given limit
void print_primes_up_to(int limit) {
    printf("List of prime numbers up to %d: ", limit);
    for (int i = 2; i <= limit; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the entered number is prime
    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    // Print all prime numbers up to the entered number
    print_primes_up_to(num);

    return 0;
}
