#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(42);  
    int number = rand() % 100 + 1, guess, attempts = 0;

    printf("Guess a number between 1 and 100:");

    while (1) {  
        attempts++;
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == number) {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
            break;  
        }
        printf(guess > number ? "Too high!" : "Too low");
    }

    return 0;
}
