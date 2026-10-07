#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;   /* the two numbers */
    char op;       /* the operator: + - * / % */

    printf("=== Simple Calculator ===\n");

    /* Get the first number */
    printf("Enter first number (a): ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Invalid input for a.\n");
        return 1;
    }

    /* Get the operator (the space before %c skips leftover whitespace) */
    printf("Enter operator (+, -, *, /, %%): ");
    if (scanf(" %c", &op) != 1)
    {
        printf("Invalid operator input.\n");
        return 1;
    }

    /* Get the second number */
    printf("Enter second number (b): ");
    if (scanf("%lf", &b) != 1)
    {
        printf("Invalid input for b.\n");
        return 1;
    }

    /* Perform the chosen operation */
    switch (op)
    {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;

        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;

        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;

        case '/':
            if (b == 0)
            {
                printf("Error: division by zero.\n");
                return 1;
            }
            printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            break;

        case '%':
            /* Modulus only works on integers in C, so we cast to int */
            if ((int)b == 0)
            {
                printf("Error: modulus by zero.\n");
                return 1;
            }
            printf("%d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);
            break;

        default:
            printf("Error: unknown operator '%c'.\n", op);
            return 1;
    }

    return 0;
}
