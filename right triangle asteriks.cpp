/*Write a program to ask the user for a positive integer and then print a right triangle made of asterisks with the number of rows equal to the user input, using nested for loops.*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

