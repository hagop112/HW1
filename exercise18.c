#include <stdio.h>
#include <math.h>

int main() {
    char binary[32];  // Array to store binary number as a string
    int decimal = 0;   // Define variable to store the decimal result
    int length, i;

    printf("Enter a binary number: ");
    scanf("%s", binary); // Input binary number

    for (length = 0; binary[length] != '\0'; length++);  // Find the length of the binary string

    for (i = 0; i < length; i++) { 
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);  // Add the power of 2 for '1' bits
        }
    }
    printf("Decimal equivalent: %d\n", decimal); // Print result

    return 0;
}