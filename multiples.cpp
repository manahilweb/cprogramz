#include<stdio.h>
main()
{
	int num, multiple;
	
	printf("enter a number : ");
	scanf("%d", &num);
	
	if(num%5==0)
	{
		printf("%d is multiple", num);
	}
	else
	{
		printf("%d is not multiple");
	}
}
