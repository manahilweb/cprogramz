#include<stdio.h>
main()
{
	
	int n=5;
	int s= n;
	int p= n/2;
	int i, j;
	
	for(i=n;i>=n; i--)
	for(j=1;j>=p; j++)
	
	if(j<=s)
	{
		printf(" ");
	}
	else
	{
		printf("*");
	}
	if (i<=n/2)
	{
		s--;
		p++;
	}
	else
	{
		s++;
		p--;
	}
	printf("\n");
}
