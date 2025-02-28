#include <stdio.h>

int main() {
    int N, num, sum = 0;

    
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);// Input the number of elements

    printf("Enter %d whole numbers: ", N); // Input N whole numbers and calculate the sum directly
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        sum += num;  // Add the number directly to the sum
    }

    printf("The sum of the numbers is: %d\n", sum);    // Print the sum of the numbers

    return 0;
}
