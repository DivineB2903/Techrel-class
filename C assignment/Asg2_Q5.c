#include <stdio.h>

int main() {
    int n;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    // Using && operator
    if (n % 5 == 0 && n % 7 == 0) {
        printf("Using &&: %d is divisible by both 5 and 7\n", n);
    } else {
        printf("Using &&: %d is not divisible by both 5 and 7\n", n);
    }

    // Using nested if
    if (n % 5 == 0) {
        if (n % 7 == 0) {
            printf("Using nested if: %d is divisible by both 5 and 7\n", n);
        } else {
            printf("Using nested if: %d is divisible by 5 but NOT by 7\n", n);
        }
    } else {
        printf("Using nested if: %d is NOT divisible by 5\n", n);
    }

    return 0;
}
