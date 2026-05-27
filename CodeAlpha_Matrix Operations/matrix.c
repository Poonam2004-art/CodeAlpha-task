#include <stdio.h>

void inputMatrix(int matrix[3][3], int row, int col)
{
    int i, j;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[3][3], int row, int col)
{
    int i, j;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int a[3][3], int b[3][3], int result[3][3], int row, int col)
{
    int i, j;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrix(int a[3][3], int b[3][3], int result[3][3], int row, int col)
{
    int i, j, k;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            result[i][j] = 0;

            for(k = 0; k < col; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transposeMatrix(int matrix[3][3], int transpose[3][3], int row, int col)
{
    int i, j;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main()
{
    int a[3][3], b[3][3];
    int sum[3][3], multiply[3][3], transpose[3][3];
    int row = 3, col = 3;

    printf("Enter elements of Matrix A (3x3):\n");
    inputMatrix(a, row, col);

    printf("Enter elements of Matrix B (3x3):\n");
    inputMatrix(b, row, col);

    // Addition
    addMatrix(a, b, sum, row, col);

    printf("\nMatrix Addition:\n");
    displayMatrix(sum, row, col);

    // Multiplication
    multiplyMatrix(a, b, multiply, row, col);

    printf("\nMatrix Multiplication:\n");
    displayMatrix(multiply, row, col);

    // Transpose
    transposeMatrix(a, transpose, row, col);

    printf("\nTranspose of Matrix A:\n");
    displayMatrix(transpose, row, col);

    return 0;
}