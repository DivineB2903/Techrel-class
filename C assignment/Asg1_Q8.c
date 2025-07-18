#include<stdio.h>

int main() 
{
    int emp_id;
    float basic, hra, da, tax, take_home;

    
    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    
    hra = 0.10 * basic;
    da = 0.30 * basic;
    tax = 0.05 * basic;

    take_home = basic + hra + da - tax;


    printf("\nEmployee ID: %d\n", emp_id);
    printf("Take Home Salary: %f\n", take_home);

    return 0;
}