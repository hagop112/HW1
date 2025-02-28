#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, min, max;

    printf("Enter 10 numbers: ");
    scanf("%d", &n);  // Read first number
    min = max = n;  // Initialize min and max

    for (int i = 1; i < 10; i++) {  // Loop for the next 9 numbers
        scanf("%d", &n);
        min = (n < min) ? n : min;
        max = (n > max) ? n : max;
    }

    printf("min = %d, max = %d\n", min, max);
    return 0;
}
