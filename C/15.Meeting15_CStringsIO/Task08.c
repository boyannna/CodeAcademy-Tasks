#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char choice;
    float num1 = 0.0;
    float num2 = 0.0;
    float result = 0.0;

    while (1) {
       
        printf("\nEnter the operation of your choice:\n");
        printf("a. Add\n");
        printf("s. Subtract\n");
        printf("m. Multiply\n");
        printf("d. Divide\n");
        printf("q. Quit\n");

        choice = 'q';
        num1 = 0;
        num2 = 0;

        printf("Enter your choice: ");
        scanf_s("%c", &choice);

        if (choice == 'q') {
            printf("Bye");
            break;
        }
        if (choice == 'a' || choice == 's' || choice == 'm' || choice == 'd') {
            printf("Enter first number: ");
            scanf_s("%f", &num1);

            printf("Enter second number: ");
            scanf_s("%f", &num2);
        }

        switch (choice) {
        case 'a':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, result);
            break;
        case 's':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, result);
            break;
        case 'm':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;
        case 'd':
            while (num2 == 0.0) {
                printf("Cannot divide by zero. Enter a number other than 0: ");
                scanf_s("%f", &num2);
            }
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f", num1, num2, result);
            break;
        default:
            printf("Invalid choice.\n");
            continue;
        }
    }

    return 0;
}