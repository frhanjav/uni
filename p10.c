// WAP to print a |\/| pattern 

#include <stdio.h>

void printPattern(int n) 
{
    int i, j;

    for (i = 1; i <= n; i++) 
    {
        // Print i asterisks
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }

        // Print spaces
        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }

        // Print i asterisks in reverse order
        for (j = i; j >= 1; j--) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int numRows;

    printf("Enter the number of rows: ");
    scanf("%d", &numRows);

    printf("Pattern:\n");
    printPattern(numRows);

    return 0;
}