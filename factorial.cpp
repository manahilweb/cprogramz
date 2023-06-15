/*Write a program that asks the user to input a positive integer and then calculates and prints the factorial of the number. The factorial of a number is the product of all positive integers up to and including that number. For example, the factorial of 5 is 5 x 4 x 3 x 2 x 1 = 120. */

#include <stdio.h>

int main() 
{
    int num, i, factorial = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) 
	{
        printf("Error: the number must be positive.\n");
        return 1;
    }
    
    for (i = 1; i <= num; i++) 
	{
        factorial *= i;  // Multiply the factorial by each value of i
    }
    
    printf("%d! = %d\n", num, factorial);
    
    return 0;
}

