#include<stdio.h>

int main() 
{
    float F;
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &F);
    
    float C;
    printf("The temperature in Celcius is : %f", C = (5.0/9.0)*(F- 32) );
    printf("\nThe temperature in Kelvin is : %f", C + 273.15);

}