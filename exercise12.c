#include <stdio.h>

int main() {
    int N;

    printf("Enter the base of the isosceles triangle (N): ");
    scanf("%d", &N);

    if (N % 2 == 0) {
        N = N + 1;  
    }
    for (int i = 1; i <= (N / 2) + 1; i++) {
        for (int j = 1; j <= (N / 2) - i + 1; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
