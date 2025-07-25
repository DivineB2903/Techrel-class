#include <stdio.h>

int main() {
    int x, y, ch, num;

    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);

    printf("\nOptions:\n");
    printf("1: Equality\n");
    printf("2: Less Than\n");
    printf("3: Quotient and Remainder\n");
    printf("4: Range\n");
    printf("5: Swap\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            if (x == y)
                printf("x is equal to y\n");
            else
                printf("x is not equal to y\n");
            break;

        case 2:
            if (x < y)
                printf("x is less than y\n");
            else
                printf("x is not less than y\n");
            break;

        case 3:
            if (y != 0)
                printf("Quotient = %d, Remainder = %d\n", x / y, x % y);
            else
                printf("Division by zero is not allowed.\n");
            break;

        case 4:
            printf("Enter a number to check range: ");
            scanf("%d", &num);
            if ((num >= x && num <= y) || (num >= y && num <= x))
                printf("The number %d lies between %d and %d (inclusive)\n", num, x, y);
            else
                printf("The number %d is not in range\n", num);
            break;

        case 5:
            {
                int temp = x;
                x = y;
                y = temp;
                printf("After swapping: x = %d, y = %d\n", x, y);
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
