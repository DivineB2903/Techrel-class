#include<stdio.h>

int main()
{
    float r;
    printf("Enter radius of cirlce : ");
    scanf("%f", &r);

    printf("The area of circle is : %.2f", 3.14*r*r);
    printf("\nThe circumference of circle is : %.2f", 2*3.14*r);

    return 0;
}