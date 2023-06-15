/*Enter a number and tell whether it is prime or not in c using whiel*/

#include <stdio.h>

int main() {
    int num, i = 2, is_prime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num/2) {
        if (num % i == 0) {
            is_prime = 0;
            break;
        }
        i++;
    }

    if (is_prime == 1) {
        printf("%d is a prime number.", num);
    } else {
        printf("%d is not a prime number.", num);
    }

    return 0;
}

