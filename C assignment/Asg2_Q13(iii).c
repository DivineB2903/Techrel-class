#include <stdio.h>

int main() {
    int h, m, s;

    printf("Enter time (hour minute second): ");
    scanf("%d %d %d", &h, &m, &s);

    
    // Using ternary operator
    (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) ? printf("Valid Time (Logic 3)\n") : printf("Invalid Time (Logic 3)\n");

    return 0;
}
