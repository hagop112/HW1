#include <stdio.h>

int main() {
    int N;

    
    printf("Enter the number of elements (N): ");
    scanf("%d", &N); // asking for input

    int arr[N];  // declare an array of size N

    printf("Enter %d integers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("The numbers in reverse order are: ");
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", arr[i]);// Print the array in reverse order
    }
    printf("\n");

    return 0;
}
