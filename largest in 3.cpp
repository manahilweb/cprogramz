/*Write a program in c that prompts the user to enter three numbers, and then prints the largest of the three using the conditional operator.*/

#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The largest number is %d\n", largest);

    return 0;
}

