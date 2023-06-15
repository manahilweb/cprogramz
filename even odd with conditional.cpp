/*Write a program that prompts the user to enter a positive integer, and then checks if it is even or odd using the conditional operator.*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        (num % 2 == 0) ? printf("%d is even\n", num) : printf("%d is odd\n", num);
    }
    else {
        printf("Error: The number entered is not positive.\n");
    }

    return 0;
}

