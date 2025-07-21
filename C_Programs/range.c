#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b)) 
    {
        printf("%d is in between %d and %d\n", a, b, c);
    }
    else if(((a < b && b < c) || (b > c && a > b)))
    {
        printf("%d is in between %d and %d\n", b, a, c);
    }
    else 
    {
        printf("%d is in between %d and %d\n", c, a, b);
    }


    return 0;
}
