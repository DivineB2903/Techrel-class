#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter number of days the book is late: ");
    scanf("%d", &days);

    if (days <= 5) 
    {
        fine = days * 2;
    } 
    else if (days <= 10) 
    {
        fine = days * 3;
    }
    else {
        fine = days * 5;
    }

    // Output
    printf("Fine for %d day(s): Rs. %d\n", days, fine);

    return 0;
}
