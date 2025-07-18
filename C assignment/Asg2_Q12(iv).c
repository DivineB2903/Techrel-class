#include <stdio.h>

int main() {
    int a, b, c, max, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    
    //Logical AND 
    if ((a >= b) && (a >= c))
        max = a;
    else if ((b >= a) && (b >= c))
        max = b;
    else
        max = c;

    printf("Max using logical AND: %d\n", max);

    return 0;
}
