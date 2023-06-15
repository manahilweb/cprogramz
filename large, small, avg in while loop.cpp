/*Ask user to enter 10 numbers and find the largest, smallest, Average, and Sum of the entered numbers in c using while loop*/

#include <stdio.h>

int main() {
    int count = 1;
    int num, sum = 0, largest, smallest;
    float average;

    printf("Enter number %d: ", count);
    scanf("%d", &num);
    sum += num;
    largest = smallest = num;

    while (count < 10) {
        count++;
        printf("Enter number %d: ", count);
        scanf("%d", &num);
        sum += num;
        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }

    average = (float)sum / 10;

    printf("Largest number is %d\n", largest);
    printf("Smallest number is %d\n", smallest);
    printf("Sum of numbers is %d\n", sum);
    printf("Average of numbers is %.2f\n", average);

    return 0;
}

