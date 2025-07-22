#include<stdio.h>
int main()
{
    int a, b;
    char op;

    printf("Enter any 2 number with operation : ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+' : printf("Addition of %d %c %d is %d ", a, op, b, (a + b));
        break;
        case '-' : printf("Substraction of %d %c %d is %d ", a, op, b, (a - b));
        break;
        case '*' : printf("Multiplication of %d %c %d is %d ", a, op, b, (a * b));
        break;
        case '/' : printf("Division of %d %c %d is %f ", a, op, b, (a / b));
        break;
        Default : printf("Entered choice is invalid.");
        break; 
    }
}