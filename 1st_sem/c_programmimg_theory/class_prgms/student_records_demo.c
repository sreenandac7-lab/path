#include <stdio.h>
#include <stdlib.h>

// Structure to store student details
struct Student {
    int roll_no;
    char name[50];
    int marks[5];
    int total;
    float percentage;
    float average;
};

// Function to initialize student details
void initialize_students(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter Name: ");
        scanf(" %49[^\n]", students[i].name);

        students[i].total = 0;

        for (int j = 0; j < 5; j++) {
            printf("Enter mark for Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);

            students[i].total += students[i].marks[j];
        }

        // Calculate average and percentage
        students[i].average = students[i].total / 5.0;
        students[i].percentage =
            (students[i].total / 500.0) * 100;
    }
}

// Function to display student details in tabular format
void display_students(struct Student students[], int n) {
    printf("\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("%-8s %-15s %-8s %-8s %-8s %-8s %-8s %-8s %-10s %-10s\n",
           "ROLL NO", "NAME", "MARK1", "MARK2",
           "MARK3", "MARK4", "MARK5", "TOTAL",
           "PERCENT", "AVERAGE");
    printf("---------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-8d %-15s %-8d %-8d %-8d %-8d %-8d %-8d %-10.2f %-10.2f\n",
               students[i].roll_no,
               students[i].name,
               students[i].marks[0],
               students[i].marks[1],
               students[i].marks[2],
               students[i].marks[3],
               students[i].marks[4],
               students[i].total,
               students[i].percentage,
               students[i].average);
    }

    printf("---------------------------------------------------------------------------------------------------------------\n");
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of students!\n");
        return 1;
    }

    // Dynamically allocate memory
    struct Student *students =
        malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    initialize_students(students, n);

    // Display all student records
    display_students(students, n);

    // Release allocated memory
    free(students);

    printf("\nMemory deallocated successfully.\n");

    return 0;
}