#include <stdio.h>

int main() {
    int count[10] = {0}, num;

    printf("Enter numbers (1-10), -1 to stop:\n");

    while (scanf("%d", &num) && num != -1) {
        if (num >= 1 && num <= 10) count[num - 1]++;
        else printf("Invalid! Enter a number between 1 and 10.\n");
    }

    printf("\nFrequencies:\n");
    for (int i = 0; i < 10; i++)
        printf("%d: %d times\n", i + 1, count[i]);

    return 0;
}
