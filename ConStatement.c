#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    //  Simple if
    if (a == b) {
        printf("\nBoth numbers are equal.\n");
    }

    //  if-else
    if (a > b) {
        printf("a is greater than b.\n");
    } else {
        printf("b is greater than or equal to a.\n");
    }

    //  else-if ladder
    printf("\nCheck number type for a: ");
    if (a > 0) {
        printf("a is Positive\n");
    } else if (a < 0) {
        printf("a is Negative\n");
    } else {
        printf("a is Zero\n");
    }

    //  Nested if
    printf("\nChecking biggest number and parity:\n");
    if (a > b) {
        printf("a is bigger\n");
        if (a % 2 == 0)
            printf("a is EVEN\n");
        else
            printf("a is ODD\n");
    } else {
        printf("b is bigger or equal\n");
        if (b % 2 == 0)
            printf("b is EVEN\n");
        else
            printf("b is ODD\n");
    }

    //  Switch case
    printf("\nMenu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %d\n", a + b);
            break;
        case 2:
            printf("Result = %d\n", a - b);
            break;
        case 3:
            printf("Result = %d\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Division not possible (b = 0)\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    //  Ternary operator
    int max = (a > b) ? a : b;
    printf("\nUsing ternary: Max = %d\n", max);
    
    printf("\nPress Enter to exit...");
    getchar();
    getchar();

    return 0;
}
