#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll_no;
    char name[50];
    int marks[5];
    int total;
    float percentage;
};

void initialize_students(struct Student student_list[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &student_list[i].roll_no);

        printf("Enter name: ");
        scanf("%49s", student_list[i].name);

        student_list[i].total = 0;

        for (int j = 0; j < 5; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &student_list[i].marks[j]);

            student_list[i].total += student_list[i].marks[j];
        }

        student_list[i].percentage =
            student_list[i].total / 5.0f;
    }
}

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of students!\n");
        return 1;
    }

    struct Student *students =
        malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    initialize_students(students, n);

    printf("\n--- Student Details ---\n");

    for (int i = 0; i < n; i++) {
        printf("\nRoll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Total Marks: %d\n", students[i].total);
        printf("Percentage: %.2f%%\n", students[i].percentage);
    }

    free(students);

    return 0;
}