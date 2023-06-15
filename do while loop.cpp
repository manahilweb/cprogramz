/*Write a program using a do-while loop to prompt the user to enter a number between 1 and 10, and keep prompting until a valid input is entered. Then, print the square of that number.*/

#include <stdio.h>

int main() {
    int num;
    
    do {
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);
    
    printf("The square of %d is %d.\n", num, num*num);
    
    return 0;
}

