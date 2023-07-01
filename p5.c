// WAP to print even numbers up to 100

#include <stdio.h>

int main() 
{
    int i;

    printf("Even numbers up to 100:\n");

    for (i = 0; i <= 100; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}