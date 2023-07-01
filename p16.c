// WAP to do the above using recursion

#include <stdio.h>

int fibonacci(int first, int second, int n) 
{
    if (n == 0) {
        return first;
    }
    if (n == 1) {
        return second;
    }

    return fibonacci(first, second, n - 1) + fibonacci(first, second, n - 2);
}

void printFibonacciSeries(int first, int second, int n) 
{
    int i;

    printf("Fibonacci Series:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(first, second, i));
    }

    printf("\n");
}

int main() 
{
    int first, second, n;

    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    printFibonacciSeries(first, second, n);

    return 0;
}
