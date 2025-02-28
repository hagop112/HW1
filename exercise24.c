#include <stdio.h>

int main() {
    int N, M;

    // Input the number of elements
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    int arr[N];  // Declare an array of size N

    // Input the sequence of N numbers
    printf("Enter %d whole numbers: \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position (M) to delete
    printf("Enter the position (M) to delete: ");
    scanf("%d", &M);

    // Check if M is valid
    if (M < 1 || M > N) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements left to delete the M-th element
    for (int i = M - 1; i < N - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print the modified array
    printf("Array after deleting the %d-th element: \n", M);
    for (int i = 0; i < N - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
