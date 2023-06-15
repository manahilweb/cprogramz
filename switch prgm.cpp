/*ask user to input 2 numbers and 1 sign in c with switch*/

#include <stdio.h>

int main() 
{
   int num1, num2, result;
   char sign;

   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);
   
   printf("Enter a sign (+, -, *, /): ");
   scanf(" %c", &sign);

   switch(sign) 
   {
      case '+':
         result = num1 + num2;
         printf("%d + %d = %d\n", num1, num2, result);
         break;
         
      case '-':
         result = num1 - num2;
         printf("%d - %d = %d\n", num1, num2, result);
         break;
         
      case '*':
         result = num1 * num2;
         printf("%d * %d = %d\n", num1, num2, result);
         break;
         
      case '/':
         if(num2 == 0) {
            printf("Cannot divide by zero\n");
         }
         else 
		 {
            result = num1 / num2;
            printf("%d / %d = %d\n", num1, num2, result);
         }
         break;
         
      default:
         printf("Invalid sign entered\n");
   }

   return 0;
}

