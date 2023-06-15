#include<stdio.h>
main()
{
	int r, c, t;
	
	printf("enter number of rows");
	scanf("%d", &t);
	
	for(r=1;r<=t;r++)
	{
		int k=1;
		
		for(c=1;c<t-1+r;c++)
		{
			if (c<=t-r)
			{
				printf(" ");
			}
			else
			{
				printf("%d", c);
				k++;
				
			}
			printf("\n");
		}
	}
}
