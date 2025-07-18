#include<stdio.h>

int main() 
{
    float a, b;
    printf("Enter 1st no. : ");
    scanf("%f", &a);
    printf("Enter 2nd no. : ");
    scanf("%f", &b);

    printf("The Arithmetic mean is : %f", (a + b)/2);
    printf("The Harmonic mean is : %f", (a*b)/(a + b));

    return 0;

}