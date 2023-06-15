/*Write a program that prompts the user to enter a password, and keeps prompting until the correct password is entered.*/

#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    char correct_password[] = "password123";

    do {
        printf("Enter the password: ");
        scanf("%s", password);
    } while (strcmp(password, correct_password) != 0);

    printf("Access granted!\n");

    return 0;
}

