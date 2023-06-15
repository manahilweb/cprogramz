/*Write a program to print Fibonacci series (1 1 2 3 5 7 12 19 31 ……) in c using while*/

#include <stdio.h>

int main() {
    int num, first = 1, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: %d %d ", first, second);

    while (num > 2) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
        num--;
    }

    return 0;
}

