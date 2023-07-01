// WAP to store 100 values of Fibonacci series (starting at 0, 1). Also print the 20th, 30th and 71st values

#include <stdio.h>

void generateFibonacci(unsigned long long series[], int n)
{
    int i;

    series[0] = 0;
    series[1] = 1;

    for (i = 2; i < n; i++) {
        series[i] = series[i - 1] + series[i - 2];
    }
}

int main() 
{
    unsigned long long fibonacciSeries[100];
    int i;

    generateFibonacci(fibonacciSeries, 100);

    printf("Fibonacci Series:\n");

    printf("20th value: %llu\n", fibonacciSeries[19]);
    printf("30th value: %llu\n", fibonacciSeries[29]);
    printf("71st value: %llu\n", fibonacciSeries[70]);

    return 0;
}