/*Write a program using a while loop and the conditional operator to determine the sign of a given integer (i.e., positive, negative, or zero).*/

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while (1) {
        if (num > 0) {
            printf("%d is positive.\n", num);
            break;
        }
        else if (num < 0) {
            printf("%d is negative.\n", num);
            break;
        }
        else {
            printf("The number is zero.\n");
            break;
        }
    }
    
    return 0;
}

