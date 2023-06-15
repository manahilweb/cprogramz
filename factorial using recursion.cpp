//ques 3 write a program to find a factorial//

#include<stdio.h>
main()
{
	int a, fact, rec;
	
	printf("enter any number");
	scanf("%d", &a);
	
	fact = rec (a);
	printf("factorial value=%d",fact);
}
    rec (int x)
    {
    	int f;
    	
    	if(x==1)
    	return (1);
    	else
    	f = x* rec(x-1);
    	return (f);
	}
