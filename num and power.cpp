/*Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another in c*/

#include <stdio.h>

int main() {
    int base, exponent, result = 1, i = 1;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    while (i <= exponent) {
        result *= base;
        i++;
    }
    printf("%d raised to the power of %d is: %d", base, exponent, result);

    return 0;
}

