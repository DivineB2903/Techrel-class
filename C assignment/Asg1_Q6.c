#include<stdio.h>

int main() 
{
    float l, b, h;
    printf("Enter lenght : ");
    scanf("%f", &l);
    printf("Enter breadth : ");
    scanf("%f", &b);
    printf("Enter height : ");
    scanf("%f", &h);

    printf("The surface area of cuboid is : %f", 2*((l*b) + (b*h) + (h*l)));
    printf("The volume is : %f", l*b*h);

    return 0;

}