/*Write a program that uses a for loop to generate and print all prime numbers between 1 and 100, using the modulus operator to determine whether a number is prime.*/

#include <stdio.h>

int main() {
    int i, j, is_prime;

    printf("Prime numbers between 1 and 100:\n");

    for (i = 2; i <= 100; i++) {
        is_prime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d\n", i);
        }
    }

    return 0;
}

