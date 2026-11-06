/*
Name: Daisy Watetu
Reg No: CT100/G/30745/26
Date: 25/10/2026
Description: Number guessing game between 1 and 20 with attempt count.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0));
    secret = (rand() % 20) + 1;

    printf("Guess the number between 1 and 20\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess > secret) {
            printf("Too high!\n");
        } else if(guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
        }

    } while(guess != secret);

    printf("You guessed it in %d attempts.\n", attempts);

    return 0;
}
