// WAP to print negative numbers down to -1000

#include <stdio.h>

int main() 
{
    int i;

    printf("Negative numbers down to -1000:\n");

    for (i = -1; i >= -1000; i--) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
