/*Enter a number and display its divisors.  (e.g., divisors of 15 are: 1,3,5,15) in c using while*/

#include <stdio.h>

int main() 
{
    int num, i = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The divisors of %d are: ", num);
    
    while (i <= num) 
	{
        if (num % i == 0) 
		{
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}

