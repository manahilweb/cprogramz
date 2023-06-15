/*Write a program that uses a do-while loop to prompt the user to enter a password. The password must meet the following criteria: it must be at least 8 characters long, contain at least one uppercase letter, one lowercase letter, and one digit. Use the getche function to get each character input from the user.*/

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main() {
    char ch;
    int length = 0, has_upper = 0, has_lower = 0, has_digit = 0;

    printf("Enter a password (must be at least 8 characters long, contain at least one uppercase letter, one lowercase letter, and one digit):\n");

    do {
        ch = getche();
        length++;

        if (isupper(ch)) {
            has_upper = 1;
        } else if (islower(ch)) {
            has_lower = 1;
        } else if (isdigit(ch)) {
            has_digit = 1;
        }
    } while (ch != '\r');

    if (length < 8 || !has_upper || !has_lower || !has_digit) {
        printf("\nPassword does not meet the criteria. Please try again.\n");
    } else {
        printf("\nPassword accepted.\n");
    }

    return 0;
}

