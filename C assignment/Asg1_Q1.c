#include<stdio.h>

int main()
{
    float r;
    printf("Enter radius of cirlce : ");
    scanf("%f", &r);

    printf("The area of circle is : %f", 3.14*r*r);
    printf("The circumference of circle is : %f", 2*3.14*r);

    return 0;
}