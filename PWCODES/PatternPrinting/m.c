//matric arev 3 bt 3 matrix conveert this row and column wise

#include <stdio.h>

// Function to create a 3x3 matrix
void createMatrix(int matrix[3][3]) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to calculate the sum of matrix elements
int sumMatrix(int matrix[3][3]) {
    int totalSum = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            totalSum += matrix[i][j];
        }
    }
    return totalSum;
}

// Function to convert matrix to row-wise and column-wise arrays
void convertMatrix(int matrix[3][3], int rows[3][3], int columns[3][3]) {
    // Row-wise conversion
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            rows[i][j] = matrix[i][j];
        }
    }

    // Column-wise conversion
    for (int j = 0; j < 3; ++j) {
        for (int i = 0; i < 3; ++i) {
            columns[j][i] = matrix[i][j];
        }
    }
}

// Function to display a 2D array
void displayArray(int array[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3];
    createMatrix(matrix);

    // Display the original matrix
    printf("\nMatrix:\n");
    displayArray(matrix);

    // Calculate the sum of matrix elements
    int matrixSum = sumMatrix(matrix);
    printf("\nSum of matrix elements: %d\n", matrixSum);

    int rowArray[3][3], columnArray[3][3];
    convertMatrix(matrix, rowArray, columnArray);

    // Display row-wise conversion
    printf("\nRow-wise conversion:\n");
    displayArray(rowArray);

    // Display column-wise conversion
    printf("\nColumn-wise conversion:\n");
    displayArray(columnArray);

    return 0;
}
