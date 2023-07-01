// Write a C program to calculate the areas of a rectangle ( user input)

#include <stdio.h>

int main() 
{
    float length, width;
    float area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;

    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
