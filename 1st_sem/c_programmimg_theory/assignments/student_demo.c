
#include <stdio.h>

#define STUDENTS 5
#define SUBJECTS 5

// Function to input student details
void inputDetails(int rollNo[], char name[][50], int marks[][SUBJECTS])
{
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &rollNo[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Enter marks for 5 subjects:\n");

        for (int j = 0; j < SUBJECTS; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
}

// Function to calculate total
int calculateTotal(int marks[])
{
    int total = 0;

    for (int i = 0; i < SUBJECTS; i++)
    {
        total += marks[i];
    }

    return total;
}

// Function to calculate average
float calculateAverage(int total)
{
    return total / (float)SUBJECTS;
}

// Function to calculate percentage
float calculatePercentage(int total)
{
    return (total / 500.0) * 100;
}

// Function to check result
const char* calculateResult(int marks[])
{
    for (int i = 0; i < SUBJECTS; i++)
    {
        if (marks[i] < 35)
        {
            return "FAIL";
        }
    }

    return "PASS";
}

// Function to display result table
void displayResult(int rollNo[], char name[][50], int marks[][SUBJECTS])
{
    printf("\n\n===== RESULT TABLE =====\n");

    printf("%-8s %-15s %-5s %-5s %-5s %-5s %-5s %-8s %-10s %-12s %-8s\n",
           "Roll", "Name", "S1", "S2", "S3", "S4", "S5",
           "Total", "Average", "Percentage", "Result");

    printf("------------\n");

    for (int i = 0; i < STUDENTS; i++)
    {
        int total = calculateTotal(marks[i]);
        float average = calculateAverage(total);
        float percentage = calculatePercentage(total);
        const char *result = calculateResult(marks[i]);

        printf("%-8d %-15s %-5d %-5d %-5d %-5d %-5d %-8d %-10.2f %-12.2f %-8s\n",
               rollNo[i],
               name[i],
               marks[i][0],
               marks[i][1],
               marks[i][2],
               marks[i][3],
               marks[i][4],
               total,
               average,
               percentage,
               result);
    }

    printf("=======\n");
}

int main()
{
    int rollNo[STUDENTS];
    char name[STUDENTS][50];
    int marks[STUDENTS][SUBJECTS];

    // Input
    inputDetails(rollNo, name, marks);

    // Output
    displayResult(rollNo, name, marks);

    return 0;
}
