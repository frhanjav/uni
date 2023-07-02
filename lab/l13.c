// Write a program to calculate the sum of 1st n prime numbers

#include <stdio.h>

int isPrime(int num) 
{
    if (num <= 1) 
    {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            return 0;
        }
    }
    
    return 1;
}

int main() 
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int count = 0;
    int num = 2;
    int sum = 0;
    
    while (count < n) 
    {
        if (isPrime(num)) 
        {
            sum += num;
            count++;
        }
        num++;
    }
    
    printf("Sum of the first %d prime numbers is: %d\n", n, sum);
    
    return 0;
}