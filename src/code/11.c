#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        // Print leading spaces
        for (j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }
        // Print numbers in the row
        int n = 1;
        for (j = 0; j <= i; j++)
        {
            printf("%d ", n);
            n = n * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
