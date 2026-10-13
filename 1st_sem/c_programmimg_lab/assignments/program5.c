#include <stdio.h>
int main()
{
    char nationality[20];
    int age;
    char drivingTest;
    char feePaid;

    printf("===== DRIVING LICENCE ELIGIBILITY CHECK =====\n");

    printf("Enter nationality: ");
    scanf("%19s", nationality);

    if (strcmp(nationality, "Indian") != 0)
    {
        printf("Not eligible: Nationality must be Indian.\n");
        return 0;
    }

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("Not eligible: Age must be 18 years or above.\n");
        return 0;
    }

    printf("Have you passed the driving test? (Y/N): ");
    scanf(" %c", &drivingTest);

    if (drivingTest != 'Y' && drivingTest != 'y')
    {
        printf("Not eligible: Driving test has not been passed.\n");
        return 0;
    }

    printf("Have you paid the DL processing fee? (Y/N): ");
    scanf(" %c", &feePaid);

    if (feePaid != 'Y' && feePaid != 'y')
    {
        printf("Not eligible: DL processing fee has not been paid.\n");
        return 0;
    }

    printf("\nEligible for driving licence.\n");

    return 0;
}

