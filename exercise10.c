#include <stdio.h>

int main() {
    int N, M;  // define variables for rows and columns
    
    printf("Enter the number of rows (N): ");
    scanf("%d", &N); //asking user to input number of rows
    printf("Enter the number of columns (M): ");
    scanf("%d", &M); //asking user to input number of columns
    
    for (int i = 0; i < N; i++) { 
        
        for (int j = 0; j < M; j++) {
            // Print '*' for border, ' ' for inside of rectangle
            if (i == 0 || i == N - 1 || j == 0 || j == M - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");  // Move to next line after each row
    }

    return 0;  
}