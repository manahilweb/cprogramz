/*Write a program using a while loop and the conditional operator to find the largest prime factor of a given integer.*/

#include <stdio.h>

int main() {
    int num, factor, largestFactor;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    factor = 2;
    largestFactor = 1;
    
    while (num > 1) {
        if (num % factor == 0) {
            if (factor > largestFactor) {
                largestFactor = factor;
            }
            num /= factor;
        } else {
            factor++;
        }
    }
    
    printf("The largest prime factor of the number is %d.\n", largestFactor);
    
    return 0;
}

