/*Write a program that prompts the user to enter a number between 1 and 10, and keeps prompting until a valid input is entered. Then, print the square of that number using a do-while loop.*/

#include <stdio.h>

int main() {
    int num;
    do {
        printf("Please enter a number between 1 and 10: ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);

    printf("The square of %d is %d\n", num, num * num);

    return 0;
}

