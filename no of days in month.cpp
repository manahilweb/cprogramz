/*Write a program that uses a switch statement to determine the number of days in a month, given the month and year input by the user. Use a do-while loop to prompt the user to enter the month and year.*/

#include <stdio.h>

int main() {
    int month, year, days;

    // Use a do-while loop to prompt the user to enter the month and year
    do {
        printf("Enter month (1-12): ");
        scanf("%d", &month);
    } while (month < 1 || month > 12);

    printf("Enter year: ");
    scanf("%d", &year);

    // Use a switch statement to determine the number of days in the month
    switch (month) {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
    }

    // Print the number of days in the month
    printf("Number of days in the month: %d\n", days);

    return 0;
}

