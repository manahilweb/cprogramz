/*Write a program that generates and prints all the prime numbers less than or equal to a given positive integer n, where n is entered by the user.*/

#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Error: the number must be at least 2.\n");
        return 1;
    }
    
    printf("Prime numbers less than or equal to %d:\n", n);
    
    // Check each number from 2 to n
    for (i = 2; i <= n; i++) {
        isPrime = 1;  // Assume the number is prime by default
        
        // Check if i is divisible by any number from 2 to i-1
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // If i is divisible by j, it is not prime
                break;        // Exit the loop early since we have already found a divisor
            }
        }
        
        if (isPrime) {
            printf("%d\n", i);  // Print i if it is prime
        }
    }
    
    return 0;
}

