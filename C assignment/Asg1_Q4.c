#include<stdio.h>

int main() 
{
    float a, t, u;
    printf("Enter Acceleration : ");
    scanf("%f", &a);
    printf("Enter Initial speed : ");
    scanf("%f", &u);
    printf("Enter Time : ");
    scanf("%f", &t);

    printf("The final velocity is : %f", u + (a*t));
    printf("The distance is : %f", u + (a*t*t));

    return 0;

}