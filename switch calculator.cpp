/* hehe calculator */

#include<stdio.h>
main()
{
	char operation;
	double num1, num2;
	
	printf("please enter an operator: ");
	scanf("%c", &operation);
	
	printf("please enter 2 numbers: ");
	scanf("%1f %1f", &num1, num2);
	
	switch (operation)
	{
		case '+':
		printf("%1f + %1f = %1f", num1, num2, num1 + num2);
		break;
			
		case '-':
		printf("%1f - %1f = %1f", num1, num2, num1 - num2);
		break;
		
		case '/':
		printf("%1f / %1f = %1f", num1, num2, num1 / num2);
		break;
			
		case '*':
		printf("%1f * %1f = %1f", num1, num2, num1 * num2);
		break;
	}
		
}
