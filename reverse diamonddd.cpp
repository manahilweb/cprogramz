#include <stdio.h>

void printReverseDiamond(int n) {
    int i, j, space;
  
    for (i = n; i >= 1; i--) {
        for (space = 1; space <= n - i; space++)
            printf(" ");
  
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
  
        printf("\n");
    }
  
    for (i = 2; i <= n; i++) {
        for (space = 1; space <= n - i; space++)
            printf(" ");
  
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
  
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printReverseDiamond(n);

    return 0;
}

