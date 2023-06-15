/*Write a C program to simulate a simple guessing game. The program should randomly choose a number between 1 and 100, and then prompt the user to guess the number. The program should continue to prompt the user until the user correctly guesses the number, using a do-while loop.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess;
    srand(time(NULL));
    num = rand() % 100 + 1;

    printf("Guess the number between 1 and 100:\n");

    do {
        scanf("%d", &guess);
        if (guess > num) {
            printf("Too high! Guess again:\n");
        } else if (guess < num) {
            printf("Too low! Guess again:\n");
        } else {
            printf("Congratulations! You guessed the number %d correctly.\n", num);
        }
    } while (guess != num);

    return 0;
}

