// Write a C program to calculate the areas of a circle (user input)

#include <stdio.h>

int main() 
{
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float pi = 3.14;

    area = pi * radius * radius;

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
