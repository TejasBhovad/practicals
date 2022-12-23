#include <stdio.h>

#define N 3 // can be replaced by N = 3;

int main()
{
    int i, j;
    int matrix1[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int matrix2[N][N] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};
    int sum[N][N];

    printf("Matrix 1:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix 2:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of the matrices
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nSum of the matrices:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
