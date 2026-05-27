#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Menu
    printf("\n===== Calculator Menu =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Switch Case
    switch(choice)
    {
        case 1:
            result = num1 + num2;
            printf("\nResult = %.2f", result);
            break;

        case 2:
            result = num1 - num2;
            printf("\nResult = %.2f", result);
            break;

        case 3:
            result = num1 * num2;
            printf("\nResult = %.2f", result);
            break;

        case 4:
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("\nResult = %.2f", result);
            }
            else
            {
                printf("\nDivision by zero is not possible.");
            }
            break;

        default:
            printf("\nInvalid Choice!");
    }

    return 0;
}