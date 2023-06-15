/*Ask user to enter 10 numbers. Print the sum and average of the entered numbers in c*/

#include <stdio.h>

int main() {
    int i = 1, n = 10;
    float num, sum = 0, avg;

    while (i <= n) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
        i++;
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

