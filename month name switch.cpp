/* 3.	Write a program to enter a number and display the name of month using switch statement. If user enters an invalid number, then display message to enter a valid number. */

#include<stdio.h>
main()
{
   int num;
   printf("enter a number from 1 to 12: ");
   scanf("%d", &num);
   
   switch (num)
   {
   
   
   case 1:
   	printf("jan");
   	break;
   	
   	case 2:
   	printf("feb");
   	break;
   	
   	case 3:
   	printf("march");
   	break;
   	
   	case 4:
   	printf("april");
   	break;
   	
   	case 5:
   	printf("may");
   	break;
   	
   	case 6:
   	printf("june");
   	break;
   	
   	case 7:
   	printf("july");
   	break;
   	
   	case 8:
   	printf("aug");
   	break;
   	
   	case 9:
   	printf("sept");
   	break;
   	
   	case 10:
   	printf("oct");
   	break;
   	
   	case 11:
   	printf("nov");
   	break;
   	
   	case 12:
   	printf("dec");
   	break;
   	
   	default:
   		printf("please enter a valid number");
   	
   }
   	
}
