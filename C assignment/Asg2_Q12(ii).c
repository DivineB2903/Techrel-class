#include <stdio.h>

int main() {
    int a, b, c, max, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);


    // Nested if
    if (a >= b) 
    {
        if (a >= c)
            max = a;
        else
            max = c;
    }
     else {
        if (b >= c)
            max = b;
        else
            max = c;
    }

    printf("Max using nested if: %d\n", max);

    return 0;
}
