#include <stdio.h>

int main() {
    int a, b, c, max, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

   
    //Ternary Operator
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Max using ternary: %d\n", max);

    return 0;
}
