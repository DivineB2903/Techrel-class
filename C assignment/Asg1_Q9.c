#include <stdio.h>

int main() {
    int amt, ten, five, one;
 
    printf("Enter the amount to be withdrawn: ");
    scanf("%d", &amt);

    ten = amt / 10;
    amt = amt % 10;

    five = amt / 5;
    amt = amt % 5;

    one = amt;

    printf("10 Rupee notes: %d\n", ten);
    printf("5 Rupee notes : %d\n", five);
    printf("1 Rupee notes : %d\n", one);

    return 0;
}
