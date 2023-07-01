// WAP that takes a temperature and unit as user input, and then converts it to the other unit

#include <stdio.h>

int main() 
{
    float temperature;
    char unit;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    printf("Enter the unit (C or F): ");
    scanf(" %c", &unit);

    float convertedTemperature;

    if (unit == 'C' || unit == 'c') {
        // Convert Celsius to Fahrenheit
        convertedTemperature = (temperature * 9 / 5) + 32;
        printf("%.2f C = %.2f F\n", temperature, convertedTemperature);
    } else if (unit == 'F' || unit == 'f') {
        // Convert Fahrenheit to Celsius
        convertedTemperature = (temperature - 32) * 5 / 9;
        printf("%.2f F = %.2f C\n", temperature, convertedTemperature);
    } else {
        printf("Invalid unit. Please enter C or F.\n");
    }

    return 0;
}