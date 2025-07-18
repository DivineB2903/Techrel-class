#include<stdio.h>

int main() 
{
    int a, b;
    printf("Enter 1st no. : ");
    scanf("%d", &a);
    printf("Enter 2nd no. : ");
    scanf("%d", &b);
    
    printf("The numbers befor swap : a = %d  b = %d", a, b);

    
    // using * and / operator
    printf("\nThe numbers after swap : a = %d ", (a * b) / a);
    printf(" b = %d ", (a * b) / b);

    return 0;

}