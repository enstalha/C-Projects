#include <stdio.h>

int main() {
    double number1, number2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &number1);

    printf("Enter the second number: ");
    scanf("%lf", &number2);

    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        result = number1 + number2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '-') {
        result = number1 - number2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '*') {
        result = number1 * number2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '/') {
        if (number2 != 0) {
            result = number1 / number2;
            printf("Result: %.2lf\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operator.\n");
    }

    return 0;
}
