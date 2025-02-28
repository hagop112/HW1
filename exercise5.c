#include <stdio.h>

int main() {
    int a; // defining the input variable
    
    printf("Enter an integer number: "); 
    scanf("%d", &a); // Asking the user to input an integer number
    
    printf("The reverse number of the integer number you entered is: ");

    while (a > 0) {
        printf("%d", a % 10); // Print the last digit of the number
        a /= 10; // Remove the last digit from the number
    }
    
    return 0; 
}
