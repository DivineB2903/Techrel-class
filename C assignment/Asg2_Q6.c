#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Using || operator
    if (n % 5 == 0 || n % 7 == 0) {
        printf("Using ||: %d is divisible by 5 or 7\n", n);
    } else {
        printf("Using ||: %d is NOT divisible by 5 or 7\n", n);
    }

    // Using else if ladder
    if (n % 5 == 0) {
        printf("Using else-if: %d is divisible by 5\n", n);
    } else if (n % 7 == 0) {
        printf("Using else-if: %d is divisible by 7\n", n);
    } else {
        printf("Using else-if: %d is NOT divisible by 5 or 7\n", n);
    }

    return 0;
}
