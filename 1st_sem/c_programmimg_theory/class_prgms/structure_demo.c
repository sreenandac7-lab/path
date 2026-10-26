#include <stdio.h>

// Structure definition
struct student
{
    // Structure members
    int id;
    char name[10];        // Student name
    char contactno[10];   // Contact number
    int pin;              // PIN code
};

int main()
{
    // Creating structure variables
    struct student firststudent;
    struct student secondstudent;
    struct student thirdstudent;

    // Initializing structure members
    firststudent.id = 100;
    sprintf(firststudent.name, "Sree");

    secondstudent.id = 200;
    sprintf(secondstudent.name, "Anu");

    thirdstudent.id = 300;
    sprintf(thirdstudent.name, "Amal");

    // Displaying student details
    printf("First Student\n");
    printf("ID: %d\n", firststudent.id);
    printf("Name: %s\n", firststudent.name);

    printf("\nSecond Student\n");
    printf("ID: %d\n", secondstudent.id);
    printf("Name: %s\n", secondstudent.name);

    printf("\nThird Student\n");
    printf("ID: %d\n", thirdstudent.id);
    printf("Name: %s\n", thirdstudent.name);

    return 0;
}