// WAP to print above pattern upside down

#include <stdio.h>

void printPattern(int n) {
    int i, j;

    for (i = n; i >= 1; i--) {
        // Print i asterisks
        for (j = 1; j <= i; j++) {
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

    printPattern(numRows);

    return 0;
}