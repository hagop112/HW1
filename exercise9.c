#include <stdio.h>

int main() {
    int a;  // define variable input

    printf("Enter any number: ");
    scanf("%d", &a);  // asking for input

    if (a && ((a & (a - 1)) == 0)) //the numbers that are power of 2 have only a single 1 in their binary presentation also it cant be 0
        printf("The number you entered is a power of 2");  // If the condition is true, print that the number is a power of 2
    else
        printf("The number you entered is not a power of 2");  // Otherwise, print that the number is not a power of 2

    return 0;  
}