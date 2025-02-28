#include <stdio.h>

int main() {
    int a;  // defining variable to store the input number
    int original;  // defining variable to store the original number
    int reversed = 0;  // defining variable to store the reversed number
    int remainder;  // defining variable to hold the remainder when extracting digits
    
    printf("Enter an integer number: ");
    scanf("%d", &a);  //asing for an input

    original = a;  // just being cool and writing original instead of a for a better comparision later

    while (a > 0) {
        remainder = a % 10;  // Get the last digit of the number
        reversed = reversed * 10 + remainder;  // Add the digit to the reversed number
        a /= 10;  // Remove the last digit from the number
    }

    
    if (original == reversed) { // checking if the original number and reversed number are equal
        printf("%d is a palindrome number", original);  // giving an output that the number is a palindrome
    } else {
        printf("%d is not a palindrome number", original);  // giving an ouput that the number is not a palindrome
    }

    return 0;  
}
