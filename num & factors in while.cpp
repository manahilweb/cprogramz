/*Enter a number and show its factors upto a specific number. (factors of 3 are : 3,6,9,12 …. ) in c using while*/

#include <stdio.h>

int main() {
    int num, limit, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a limit: ");
    scanf("%d", &limit);

    printf("The factors of %d up to %d are: ", num, limit);
    while (i <= limit) {
        printf("%d ", num * i);
        i++;
    }

    return 0;
}

