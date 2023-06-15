/*Write a program in C to display the n terms of harmonic series and their sum in c using while loop. 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms */

#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    int i = 1;

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += 1.0 / i;
        printf("1/%d ", i);
        i++;
    }

    printf("\nSum of the series up to %d terms is %.2f\n", n, sum);

    return 0;
}

