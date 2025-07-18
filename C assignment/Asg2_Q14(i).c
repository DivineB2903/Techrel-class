#include <stdio.h>

int main() {
    int x, y;

    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    //Using if-else ladder
    if (x == 0 && y == 0)
        printf("Point lies at the Origin \n");
    else if (x > 0 && y > 0)
        printf("Quadrant I \n");
    else if (x < 0 && y > 0)
        printf("Quadrant II \n");
    else if (x < 0 && y < 0)
        printf("Quadrant III \n");
    else if (x > 0 && y < 0)
        printf("Quadrant IV \n");
    else if (x == 0)
        printf("Point lies on Y-axis \n");
    else
        printf("Point lies on X-axis \n");


    return 0;
}
