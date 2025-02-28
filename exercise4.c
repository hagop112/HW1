#include <stdio.h>

int main() {
    int a; // defining the input number
    int sum = 0; // defining th variable to store the sum of digits
    int digit; // defining the variable to store the current digit
    
    printf("Enter an integer number: "); 
    scanf("%d", &a); // asking the user to input an integer number

    while (a > 0) {
        digit = a % 10; // extract the last digit of the number
        sum += digit;   // add the extracted digit to the sum
        a /= 10;        // remove the last digit from the number
    }

    printf("The sum of the digits of the integer number you entered is: %d", sum); // display the sum of the digits

    return 0; 
}
