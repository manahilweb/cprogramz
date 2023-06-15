/*Write a program that asks the user to enter two positive integers and then calculates and prints the greatest common divisor (GCD) of the two numbers using Euclid's algorithm. Use a while loop and the modulus operator.*/

#include <stdio.h>

int main() {
    int num1, num2, remainder;

    // Prompt user for two positive integers
    printf("Enter two positive integers:\n");
    scanf("%d %d", &num1, &num2);

    // Ensure num1 is greater than num2
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Use Euclid's algorithm to find the GCD
    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    // Print the GCD
    printf("The greatest common divisor of %d and %d is %d\n", num1, num2, num1);

    return 0;
}

