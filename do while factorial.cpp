/*Write a C program to read a positive integer from the user and compute its factorial using a do-while loop.*/
#include <stdio.h>

int main() {
    int num, fact = 1, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    do {
        fact *= i;
        i++;
    } while (i <= num);

    printf("%d! = %d\n", num, fact);

    return 0;
}

