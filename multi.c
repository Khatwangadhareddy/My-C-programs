#include <stdio.h>

#define MAX_SIZE 10

void matrixMultiplication(int matrixA[][MAX_SIZE], int matrixB[][MAX_SIZE], int result[][MAX_SIZE], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrixA[MAX_SIZE][MAX_SIZE], matrixB[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d%d", &rowsA, &colsA);

    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d%d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Invalid matrix dimensions. Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    matrixMultiplication(matrixA, matrixB, result, rowsA, colsA, colsB);

    printf("Resultant matrix:\n");
    displayMatrix(result, rowsA, colsB);

    return 0;
}

