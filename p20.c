// WAP to take a number input and store the factors


#include <stdio.h>

int main() 
{
    int num, i;
    int factors[100];
    int count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            factors[count] = i;
            count++;
        }
    }

    printf("The factors of %d have been stored\n" , num);
    return 0;
}