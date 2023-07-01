// Write a program to check whether a user inputted year is leap year or not using ternary operator (no modulo division operator is to be used)

#include <stdio.h>

int main() 
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year using the ternary operator
    int isLeapYear = (((year >> 2) << 2) == year && year % 100 != 0) || (year % 400 == 0);

    isLeapYear ? printf("%d is a leap year.\n", year) : printf("%d is not a leap year.\n", year);

    return 0;
}
