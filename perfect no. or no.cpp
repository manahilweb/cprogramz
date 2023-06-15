/*Write a program that asks the user to input a positive integer and then determines whether the number is a perfect number or not. A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself). For example, 6 is a perfect number because its proper divisors are 1, 2, and 3, and 1 + 2 + 3 = 6.*/

#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    for (int i = 1; i < num; i++) 
	{
        if (num % i == 0) {
            sum += i;
        }
    }
    
    if (sum == num) 
	{
        printf("%d is a perfect number.\n", num);
    }
    else 
	{
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0;
}

