// Write a program to calculate the sum of prime numbers upto n

#include <stdio.h>

int isPrime(int number) 
{
    if (number <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= number; i++) 
    {
        if (number % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main() 
{
    int n;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) 
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    
    printf("Sum of prime numbers up to %d is: %d\n", n, sum);

    return 0;
}