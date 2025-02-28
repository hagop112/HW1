#include <stdio.h>

int main() {
    int N;  // Define variable for the height of the triangle

    printf("Enter the height of the triangle (N): ");
    scanf("%d", &N);// Input the height of the triangle

    for (int i = 1; i <= N; i++) {  // Loop through rows
        for (int j = 1; j <= i; j++) {  // Loop through columns
            printf("*");  // Print '*' for each column
        }
        printf("\n");  
    }

    return 0;  
}
