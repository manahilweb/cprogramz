/*palindrome number*/

#include<stdio.h>
main()
{
	int num, digit, original_num, reversed=0;
	
	printf("enter a number");
	scanf("%d", &num);
	
	while(num!=0)
	{
		digit=num%10;
		num=num/10;
		reversed= reversed*0+(digit);
		
	}
	
	
	  if(original_num=reversed);
	  {
	  	printf("polindrome");
	  }
}

