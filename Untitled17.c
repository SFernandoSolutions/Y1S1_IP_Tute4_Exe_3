//Write a C program to create a simple calculator. The program should allow the user to enter
//two numbers and an operator. The operators are
//1. +
//2. -
//3. *
//4. /
//You should print an appropriate error message if the user enters invalid operator.
//Use nested if-else statements in your program.


#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Step 1: Prompt the user to enter two numbers and an operator
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Step 2: Perform the calculation based on the operator
    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        // Check for division by zero
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
            return 0; // Terminate the program
        }
        result = num1 / num2;
    } else {
        printf("Error: Invalid operator. Please use +, -, *, or /.\n");
        return 0; // Terminate the program
    }

    // Step 3: Display the result
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}

