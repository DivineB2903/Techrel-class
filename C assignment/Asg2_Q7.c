#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b)) {
        printf("%d is between %d and %d\n", a, b, c);
    } else {
        printf("%d is NOT between %d and %d\n", a, b, c);
    }


    return 0;
}
