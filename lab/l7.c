// Multiply a number by -4 using bitwise operators only

#include <stdio.h>

int main() {
    int number;
    int result;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Multiply the number by -4 using bitwise operators
    result = (~number) + 1;
    result = (result << 2);

    printf("Result: %d\n", result);

    return 0;
}