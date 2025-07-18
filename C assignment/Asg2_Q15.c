#include <stdio.h>

int main() {
    float basic, tax;

    printf("Enter annual basic salary: ");
    scanf("%f", &basic);

    if (basic < 150000) 
    {
        tax = 0;
    } 
    else if (basic <= 300000) 
    {
        tax = 0.20 * basic;
    } 
    else {
        tax = 0.30 * basic;
    }

    printf("Income Tax: %f\n", tax);

    return 0;
}
