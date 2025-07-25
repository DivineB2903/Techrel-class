#include <stdio.h>

int main() {
    float r;
    int ch;

    printf("Enter the radius: ");
    scanf("%f", &r);

    printf("\n1: Area of Circle\n2: Circumference of Circle\n3: Volume of Sphere\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Area of Circle = %.2f\n", 3.14 * r * r);
            break;

        case 2:
            printf("Circumference of Circle = %.2f\n", 2 * 3.14 * r);
            break;

        case 3:
            printf("Volume of Sphere = %.2f\n", (4.0 / 3.0) * 3.14 * r * r * r);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
