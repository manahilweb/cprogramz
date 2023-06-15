/*Write a C program to implement a simple calculator that reads arithmetic expressions from the user in the form of operand operator operand (e.g., 3 + 4). The program should evaluate the expression and print the result. The program should continue to prompt the user for expressions until the user enters 'q' to quit, using a do-while loop.*/

#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    do {
        printf("Enter an arithmetic expression (e.g. 3 + 4) or 'q' to quit:\n");
        scanf("%lf %c %lf", &num1, &op, &num2);
        
        switch (op) {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Error: Cannot divide by zero.\n");
                    break;
                }
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 'q':
                printf("Exiting calculator.\n");
                return 0;
            default:
                printf("Error: Invalid operator. Please enter a valid operator (+, -, *, /) or 'q' to quit.\n");
                break;
        }
    } while (1);

    return 0;
}

