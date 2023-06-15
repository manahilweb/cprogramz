/*Ask user to enter a decimal number and convert it to binary number format in c using while loop*/

#include <stdio.h>

int main() 
{
    int decimal_num, quotient, remainder, binary_num[100], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    quotient = decimal_num;

    while (quotient != 0)
	{
        binary_num[i] = quotient % 2;
        quotient /= 2;
        i++;
    }

    printf("Binary equivalent of %d is ", decimal_num);

    for (int j = i - 1; j >= 0; j--) 
	{
        printf("%d", binary_num[j]);
    }

    printf("\n");

    return 0;
}

