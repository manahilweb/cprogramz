/*Write a program to calculate and print the sum of all multiples of 7 from 1 to 100 in c using while*/

#include <stdio.h>

int main() {
    int sum = 0, i = 1;
    while (i <= 100) {
        if (i % 7 == 0) {
            sum += i;
        }
        i++;
    }
    printf("The sum of all multiples of 7 from 1 to 100 is: %d", sum);

    return 0;
}

