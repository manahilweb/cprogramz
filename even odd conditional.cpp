/*1.	Write a program to enter a number and display whether its even or odd using conditional operator.*/

#include<stdio.h>
main()
{
	
	int number;
	
	printf("Please enter a number: ");
	scanf("%d", &number);
	
	if (number % 2 == 0)
	{
		printf("The number is even. ");
	}
	else
	{
		printf("The number is odd. ");
	}
}
