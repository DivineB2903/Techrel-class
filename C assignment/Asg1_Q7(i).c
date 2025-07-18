#include<stdio.h>

int main() 
{
    int a, b;
    printf("Enter 1st no. : ");
    scanf("%d", &a);
    printf("Enter 2nd no. : ");
    scanf("%d", &b);
    
    printf("The numbers befor swap : a = %d  b = %d", a, b);
    // number swap using third variable
    int c = a;
    a = b;
    b = c;
    printf("\nThe numbers after swap : a = %d  b = %d", a, b);

}