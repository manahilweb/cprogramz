/*Write a program to print odd numbers from 1 to 20 in c using while*/

#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 20) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}

