#include <stdio.h>

int main() {
    int low = 1, high = 100, guess;  // Define the range and guess variable
    char response;  // Variable to store user response

    printf("Think of a number between 1 and 100, and I will guess it!\n");

    while (low <= high) {  
        guess = (low + high) / 2;  // Pick the middle number
        printf("Is your number %d? (h = too high, l = too low, c = correct): ", guess);
        scanf(" %c", &response);  // Get user feedback

        if (response == 'c') {  // If the guess is correct
            printf("I guessed it!\n");
            break;  // Exit the loop
        } 
        if (response == 'h') high = guess - 1;  // Adjust the upper bound if guess is too high
        if (response == 'l') low = guess + 1;  // Adjust the lower bound if guess is too low
    }

    return 0;  
}
