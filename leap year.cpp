/*Write a program that uses a conditional operator to determine whether a given year is a leap year or not, using the modulus operator to check if it is divisible by 4, 100, and 400. Use a while loop to prompt the user to enter a year.*/

#include <stdio.h>

int main() {
    int year;

    // Use a while loop to prompt the user to enter a year
    while (1) {
        printf("Enter year (positive integer): ");
        scanf("%d", &year);

        if (year > 0) {
            break;
        }
        printf("Invalid year, please try again.\n");
    }

    // Use a conditional operator to determine whether the year is a leap year or not
    int is_leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    // Print the result
    if (is_leap_year) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

