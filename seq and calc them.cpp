/*Write a program that prompts the user to enter a sequence of numbers, and then calculates the sum of those numbers.*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a sequence of numbers (enter 0 to finish): ");

    do {
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("The sum of the numbers entered is %d\n", sum);

    return 0;
}
 
