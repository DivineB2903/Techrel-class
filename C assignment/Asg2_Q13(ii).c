#include <stdio.h>

int main() {
    int h, m, s;

    printf("Enter time (hour minute second): ");
    scanf("%d %d %d", &h, &m, &s);

    if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) 
    {
        printf("Valid Time (Logic 2)\n");
    } 
    else {
        printf("Invalid Time (Logic 2)\n");
    }

    return 0;
}
