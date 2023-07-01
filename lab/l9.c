// Write a program to find whether a user inputted number is even or odd using ternary operator (no modulo division operator is to be used)

#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is even or odd using bitwise operations
    int isEven = ((num >> 1) << 1) == num;

    isEven ? printf("%d is an even number.\n", num) : printf("%d is an odd number.\n", num);

    return 0;
}
