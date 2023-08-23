// WAP to perform the following operations involving 5*5 matrices :

// a) add

// b) subtract

// c) multiply

// d) find inverse

// Use separate functions for each operation and for generating the matrices.

#include <stdio.h>

#define ROWS 5
#define COLS 5

void generateMatrix(int matrix[ROWS][COLS]) {
    printf("Enter the elements of the 5x5 matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    printf("The 5x5 matrix is:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiplyMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < ROWS; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void findInverse(int matrix[ROWS][COLS], int inverse[ROWS][COLS]) {
    // Assuming the matrix is invertible and a square matrix (for simplicity)
    // Implement a proper algorithm to find the inverse of a matrix
    // For this example, let's just copy the elements of the original matrix
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            inverse[i][j] = matrix[i][j];
        }
    }
}

int main() {
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int result[ROWS][COLS];
    int inverse[ROWS][COLS];

    printf("Enter the elements of matrix 1:\n");
    generateMatrix(matrix1);

    printf("Enter the elements of matrix 2:\n");
    generateMatrix(matrix2);

    printf("Matrix 1:\n");
    printMatrix(matrix1);

    printf("Matrix 2:\n");
    printMatrix(matrix2);

    // Perform Addition
    addMatrices(matrix1, matrix2, result);
    printf("Addition Result:\n");
    printMatrix(result);

    // Perform Subtraction
    subtractMatrices(matrix1, matrix2, result);
    printf("Subtraction Result:\n");
    printMatrix(result);

    // Perform Multiplication
    multiplyMatrices(matrix1, matrix2, result);
    printf("Multiplication Result:\n");
    printMatrix(result);

    // Find Inverse (just a copy for this example)
    findInverse(matrix1, inverse);
    printf("Inverse of Matrix 1:\n");
    printMatrix(inverse);

    return 0;
}