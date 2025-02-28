#include <stdio.h>

void decimalToBinary(int num) {
    int binary[4];  // Array to store 4-bit binary
    int isNegative = 0;

    // Handle negative numbers using 2's complement
    if (num < 0) {
        num = (16 + num);  // Convert to 2's complement (for 4-bit range)
        isNegative = 1;
    }

    // Convert to binary
    for (int i = 3; i >= 0; i--) {
        binary[i] = num % 2;
        num /= 2;
    }

    // Print result
    printf("Binary (4-bit): ");
    for (int i = 0; i < 4; i++) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;
    
    printf("Enter a number (-8 to 7): ");
    scanf("%d", &num);

    // Validate range for 4-bit representation
    if (num < -8 || num > 7) {
        printf("Out of range! Please enter a number between -8 and 7.\n");
    } else {
        decimalToBinary(num);
    }

    return 0;
}
