/*Write a program using a while loop to print the first 5 multiples of a number entered by the user.*/

#include <stdio.h>

int main() 
{
    int num, i = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("The first 10 multiples of %d are:\n", num);
    while (i <= 10) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    
    return 0;
}


