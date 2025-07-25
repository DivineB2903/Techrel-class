#include<stdio.h>
int main()
{
    int a, b, ch;
    printf("\n1.Addition \n2. Substraction \n3. Multiplication \n4. Division \nenter Choice");

    scanf("%d", &ch);

    printf("Enter any 2 number : ");
    scanf("%d%d", &a, &b);

    switch(ch) {
        case 1 : printf("Addition is %d ", (a + b));
        break;
        case 2 : printf("Substraction is %d ", (a - b));
        break;
        case 3 : printf("Multiplication is %d ", (a * b));
        break;
        case 4 : printf("Division is %f ", (a / b));
        break;
        Default : printf("Entered choice is invalid.");
        break; 
    }
}