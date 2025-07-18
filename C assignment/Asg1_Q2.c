#include<stdio.h>

int main() 
{
    float r, h;
    printf("Enter radius of cylinder : ");
    scanf("%f", &r);
    printf("Enter height of cylinder : ");
    scanf("%f", &h);

    printf("The surface area of cylinder is : %f ", (2*3.14*r*r) + (2*3.14*h));
    printf("The surface area of cylinder is : %f ", 3.14*r*r*h);

    return 0;

}