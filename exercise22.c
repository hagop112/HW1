#include <stdio.h>

int main() {
    int N;

    // Input the number of elements
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    int arr[N];  // Declare an array of size N

    // Input the sequence of N numbers
    printf("Enter %d whole numbers: \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the sequence is sorted
    for (int i = 0; i < N - 1; i++) {
        if (arr[i] != arr[i + 1] && arr[i] > arr[i + 1]) {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}
