//Write a C program for a simple calculator that repeatedly asks the user for two numbers and an operation (+, -, *, /) until the user chooses to exit. Must use a do while loop to repeat until exit.
#include <stdio.h>

int main() {
    int num1, num2, result;
    char op, choice;

    do {
        printf("Enter first no. : ");
        scanf("%d", &num1);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &op); 

        printf("Enter second no. : ");
        scanf("%d", &num2);

        switch(op) {
            case '+':
                result = num1 + num2;
                printf("Result: %d\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %d\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %d\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2; // integer division
                    printf("Result: %d\n", result);
                } else {
                    printf("Error: Division by zero is not possible .\n");
                }
                break;
            default:
                printf("Invalid operator\n");
        }

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    printf("Calculator exited by user.\n");
    return 0;
}
