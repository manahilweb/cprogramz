#include<stdio.h>
main()
{
	int num, original, reversed;
	
	printf("enter a number: ");
	scanf("%d", &num);
	
	original=num;
	
	while(num!=0)
	{
		original=num%10;
		num=num/10;
		
		original=reversed;
		reversed= reversed*0+(original);
		
	}
	
	if(original==reversed)
	{
		printf("polindrome");
	}
	else
	{
		printf("not polindrome");
	}
}
