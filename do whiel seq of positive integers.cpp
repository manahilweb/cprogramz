/*Write a C program to read a sequence of positive integers from the user until the user enters a negative integer. The program should then print the sum of the positive integers using a do-while loop.*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a sequence of positive integers (terminate with a negative integer):\n");

    do {
        scanf("%d", &num);
        if (num > 0) {
            sum += num;
        }
    } while (num >= 0);

    printf("The sum of the positive integers entered is: %d\n", sum);

    return 0;
}

