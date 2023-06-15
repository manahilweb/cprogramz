/* enter 2 numbers and find whether smaller is divisor of larger or not? */

#include <stdio.h>

int main() {
   int num1, num2;

   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);

   if(num1 < num2) {
      if(num2 % num1 == 0) {
         printf("%d is a divisor of %d\n", num1, num2);
      }
      else {
         printf("%d is not a divisor of %d\n", num1, num2);
      }
   }
   else if(num2 < num1) {
      if(num1 % num2 == 0) {
         printf("%d is a divisor of %d\n", num2, num1);
      }
      else {
         printf("%d is not a divisor of %d\n", num2, num1);
      }
   }
   else {
      printf("Both numbers are equal.\n");
   }

   return 0;
}

