/*1.	Ask user to enter 10 numbers and find the largest, smallest, Average, and Sum of the entered numbers. */

#include<stdio.h>
main()
{
	int a, num, largest, smallest, sum;
	sum=0;
	a=1;
	float average;
	
	printf("enter 10 numbers");
	
	while(a<=1)
	{
		printf("%d :", a);
        scanf("%d", &num);
	}
	if(a==1)
	{
		largest=num;
		smallest=num;
	}
	else
	{
		if(num>largest)
		{
			largest=num;
		}
		if(num<smallest)
		{
		    smallest=num;	
		}
		
	}
	
	sum=sum+num;
	a++;
}

}
    average=(float)sum/10;
    printf("largest number %d", largest);
    printf("smallest number %d", smallest);
    printf("average %d", average);
    printf("sum %d", sum);
}
