#include <stdio.h>

int main() {
    int N;  //defining the input variable
    int sum = 0;  // defining the variable to accumulate the sum of multiples
    
    printf("Enter a number (1-1000): "); 
    scanf("%d", &N); // asking the user to input a number from 1-1000

    for (int i = 1; i < N; i++) {  //going from 1 to N to check
        if (i % 3 == 0 || i % 5 == 0) { // Checking if i is a multiple of 3 or 5
            sum += i; // Adding to sum if the condition is validated
        }
    }
    
    // Display the result
    printf("Sum of multiples of 3 and 5 below %d is: %d", N, sum);
    
    return 0; 
}

