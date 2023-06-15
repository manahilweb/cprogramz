/* 2.	Write a program to enter 2 numbers and print the larger in them using conditional operator. */

#include<stdio.h>
main()
{
	
	int num1, num2;
	
	printf("enter number 1: ");
	scanf("%d", &num1);
	
	printf("enter number 2: ");
	scanf("%d", &num2);
	
	if (num1 > num2)
	{
		printf("%d is greater");
	}
	
	else
	{
		printf("%d is lesser");
	}
	
}
