#include<stdio.h>
int main() 
{

    int a, b;
    printf("Enter any 2 numbers : ");
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        printf(" The difference is : %d",a-b);
    }
    else
    {
        printf(" The difference is : %d",b-a);
    }
    
    return 0;
}