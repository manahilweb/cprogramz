/*Ask user to enter a binary number and show its decimal value in c using while loop*/

#include <stdio.h>

int main() 
{
    int binary_num, decimal_num = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binary_num);

    while (binary_num > 0) 
	{
        remainder = binary_num % 10;
        decimal_num += remainder * base;
        binary_num /= 10;
        base *= 2;
    }

    printf("Decimal equivalent of %d is %d\n", binary_num, decimal_num);

    return 0;
}

