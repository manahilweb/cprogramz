 /*Write a program that asks the user to input a positive integer and then calculates and prints the sum of its digits, using a for loop and the modulus operator.*/

#include <stdio.h>

int main() 
{
    int num, digit, sum = 0;

    // Prompt user for positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Use a for loop and modulus operator to sum digits
    for (; num > 0; num /= 10) 
	{
        digit = num % 10;
        sum += digit;
    }

    // Print the sum of the digits
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}

