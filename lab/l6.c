// Write a C program to input temperature in Centigrade and convert to Fahrenheit (user input)

#include <stdio.h>

int main() 
{
    float celsius, fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
