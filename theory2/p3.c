// WAP to store a 5 * 5 matrix

#include <stdio.h>

#define ROWS 5
#define COLS 5

int main() {
    int matrix[ROWS][COLS];

    // Input the elements of the matrix
    printf("Enter the elements of the 5x5 matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the elements of the matrix
    printf("The 5x5 matrix is:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}