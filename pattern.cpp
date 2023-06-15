#include <stdio.h>
int main()
{
	int i,j,n=4;
	for (i=1;i<=n;i++)
	{
		int k=i;
		for (j=1;j<=n*2-1;j++)
		{
			if (j<=n-i || j>=n+i)
			{
				printf("  ");
			}
			else {
				printf("%d",k);
				if (j<n)
				{
					k--;
				}
				else{
					k++;
				}
			}
			printf("\n");
		}
	}
}
