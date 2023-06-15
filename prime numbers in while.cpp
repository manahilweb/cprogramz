/*Write a program to print all prime numbers from 1 to 300 in c using while*/

#include <stdio.h>

int main() {
    int i = 2;

    while (i <= 300) {
        int j = 2;
        int prime = 1;

        while (j <= i / 2) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
            j++;
        }

        if (prime == 1) {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}

