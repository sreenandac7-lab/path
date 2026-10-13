
#include <stdio.h>

int main()
{
    int choice;
    double a, b;

    printf("===== MENU DRIVEN CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 5)
    {
        int x, y;

        printf("Enter two integers: ");
        scanf("%d %d", &x, &y);

        switch (choice)
        {
            case 5:
                if (y != 0)
                    printf("Result = %d\n", x % y);
                else
                    printf("Cannot divide by zero.\n");
                break;
        }
    }
    else
    {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &a, &b);

        switch (choice)
        {
            case 1:
                printf("Result = %.2lf\n", a + b);
                break;

            case 2:
                printf("Result = %.2lf\n", a - b);
                break;

            case 3:
                printf("Result = %.2lf\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Result = %.2lf\n", a / b);
                else
                    printf("Cannot divide by zero.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
