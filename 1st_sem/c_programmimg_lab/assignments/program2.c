
#include <stdio.h>

int main()
{
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, average, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter marks in 5 subjects:\n");

    printf("Subject 1: ");
    scanf("%f", &m1);

    printf("Subject 2: ");
    scanf("%f", &m2);

    printf("Subject 3: ");
    scanf("%f", &m3);

    printf("Subject 4: ");
    scanf("%f", &m4);

    printf("Subject 5: ");
    scanf("%f", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;
    percentage = (total / 500) * 100;

    printf("\n===== Student Mark Details =====\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Total Marks : %.2f / 500\n", total);
    printf("Average     : %.2f\n", average);
    printf("Percentage  : %.2f%%\n", percentage);

    return 0;
}
