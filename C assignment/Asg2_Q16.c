#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float avg, percentage;

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0;
    percentage = (total / 300.0) * 100; 


    printf("Total Marks: %d\n", total);
    printf("Average Marks: %f\n", avg);
    printf("Percentage: %f\n", percentage);

    if (percentage >= 60) 
    {
        printf("Class: I Class\n");
    } 
    else if (percentage >= 50) 
    {
        printf("Class: II Class\n");
    } 
    else if (percentage >= 40) 
    {
        printf("Class: Pass Class\n");
    }
    else {
        printf("Class: Fail\n");
    }

    return 0;
}
