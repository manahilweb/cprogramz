/*Write a program using a while loop and the modulus operator to check if a number entered by the user is a palindrome (i.e., the same number when its digits are reversed).*/

#include <stdio.h>

int main() 
{
    int num, original, reverse = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    while (num != 0) 
	{
        reverse = reverse * 10 + num % 10;  // Multiply the reverse by 10 and add the last digit of the original number.
        num = num/ 10;                          // Remove the last digit from the original number.
    }
    
    if (original == reverse) 
	{
        printf("%d is a palindrome.\n", original);
    } 
	else 
	{
        printf("%d is not a palindrome.\n", original);
    }
    
    return 0;
}

