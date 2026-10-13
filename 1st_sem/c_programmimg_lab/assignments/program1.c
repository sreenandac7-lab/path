
#include <stdio.h>

int main()
{
    int a = 20, b = 10;
    float x = 15.5, y = 5.0;
    double p = 25.75, q = 10.25;
    char c1 = 'A', c2 = 'B';

    printf("===== Arithmetic Operations =====\n\n");

    printf("Integer Operations:\n");
    printf("Addition       = %d\n", a + b);
    printf("Subtraction    = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division        = %d\n", a / b);
    printf("Modulus         = %d\n\n", a % b);

    printf("Float Operations:\n");
    printf("Addition       = %.2f\n", x + y);
    printf("Subtraction    = %.2f\n", x - y);
    printf("Multiplication = %.2f\n", x * y);
    printf("Division        = %.2f\n\n", x / y);

    printf("Double Operations:\n");
    printf("Addition       = %.2lf\n", p + q);
    printf("Subtraction    = %.2lf\n", p - q);
    printf("Multiplication = %.2lf\n", p * q);
    printf("Division        = %.2lf\n\n", p / q);


    printf("Character Operations:\n");
    printf("ASCII value of %c = %d\n", c1, c1);
    printf("ASCII value of %c = %d\n", c2, c2);
    printf("Addition of ASCII values = %d\n", c1 + c2);
    printf("Subtraction of ASCII values = %d\n", c2 - c1);

    return 0;
}


