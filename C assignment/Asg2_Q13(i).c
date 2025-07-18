#include <stdio.h>

int main() {
    int h, m, s;

    printf("Enter time (hour minute seconds): ");
    scanf("%d %d %d", &h, &m, &s);

    //Using if-else ladder
    if (h >= 0 && h < 24) 
    {
        if (m >= 0 && m < 60) 
        {
            if (s >= 0 && s < 60) 
            {
                printf("Valid Time (Logic 1)\n");
            } 
            else {
                printf("Invalid Seconds (Logic 1)\n");
            }
        } 
        else {
            printf("Invalid Minutes (Logic 1)\n");
        }
    } 
    else {
        printf("Invalid Hours (Logic 1)\n");
    }

    return 0;
}
