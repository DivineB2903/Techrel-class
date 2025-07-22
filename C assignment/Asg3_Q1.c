#include<stdio.h>
int main() {
    int n;
    printf("Enter any single digit number : ");
    scanf("%d", &n);

    switch(n) {
        case 1 : printf("%d in words is One", n );
        break;
        case 2 : printf("%d in words is Two", n );
        break;
        case 3 : printf("%d in words is Three", n );
        break;
        case 4 : printf("%d in words is Four", n );
        break;
        case 5 : printf("%d in words is Five", n );
        break;
        case 6 : printf("%d in words is Six", n );
        break;
        case 7 : printf("%d in words is Seven", n );
        break;
        case 8 : printf("%d in words is Eight", n );
        break;
        case 9 : printf("%d in words is Nine", n );
        break;
        case 0 : printf("%d in words is Zero", n );
        break;
        default : printf("Entered number is invalid");
        break;


    }
    return 0;
}