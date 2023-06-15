/*write a program and display the greater number with conditions. this is a ?true :false condition statement*/

#include <stdio.h>

int main() {
   int num1, num2;

   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);

   num1 > num2 ? printf("%d is greater\n", num1) : printf("%d is greater\n", num2);

   return 0;
}


