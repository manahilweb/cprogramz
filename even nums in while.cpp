/*Write a program to print even numbers from 50 to 70 in c using while*/

#include <stdio.h>

int main() 
{
    int i = 50;

    while (i <= 70) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}

