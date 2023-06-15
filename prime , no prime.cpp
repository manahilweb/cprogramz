/*Write a program that asks the user to input a positive integer and then determines whether the number is prime or not. A prime number is a number that is divisible only by 1 and itself.*/

#include <stdio.h>

int main() 
{
    int num, i, isPrime = 1;  // Assume the number is prime by default
    
    printf("Enter a positive integer: ");
    scanf("%d", &num); 
	{
        for (i = 2; i <= num / 2; i++) 
		{
            if (num % i == 0) 
			{
                isPrime = 0;  // If the number is divisible by i, it is not prime
                break;        // Exit the loop early since we have already found a divisor
            }
        }
    }
    
    if (isPrime) 
	{
        printf("%d is a prime number.\n", num);
    } else 
	{
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}

