// Write a C program to multiply, sum, divide and subtract between two numbers

#include <stdio.h>

int main() 
{
    int num1, num2;
    float multiply, sum, divide, subtract;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    multiply = num1 * num2;
    sum = num1 + num2;
    divide = (float)num1 / num2;
    subtract = num1 - num2;

    printf("Multiplication: %.2f\n", multiply);
    printf("Sum: %.2f\n", sum);
    printf("Division: %.2f\n", divide);
    printf("Subtraction: %.2f\n", subtract);

    return 0;
}