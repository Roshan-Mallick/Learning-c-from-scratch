#include <stdio.h>    // For printf() and scanf()
#include <stdlib.h>   // For rand() and srand()
#include <time.h>     // For time() to seed random number generator

int checkGuess(int num, int correct);
void playGame();

int main() {
    playGame();
    return 0;
}

// Ternary operator used here
int checkGuess(int num, int correct) {
    return (num == correct) ? 1 : 0;
}

void playGame() {
    int num, correct;

    srand(time(0));                     // Seed random generator
    correct = rand() % 100 + 1;         // Random number between 1–100

    printf(" Guess the correct number between 1 and 100\n");

    while (1) {
        printf("Enter correct number again: ");
        scanf("%d", &num);

        // Range validation
        if (num < 1 || num > 100) {
            printf(" Enter number between 1 and 100 only.\n");
            continue;
        }

        // Nested if–else
        if (checkGuess(num, correct)) {
            printf("Correct! Number was %d\n", correct);
            break;
        } else {
            if (num < correct) {
                printf("Too low\n");
            } else {
                printf("Too high\n");
            }
        }
    }
}

