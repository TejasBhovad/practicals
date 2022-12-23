#include <stdio.h>

int main()
{
    int n, i;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        double factorial = 1.0;
        int j;
        for (j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        sum += (double)i / factorial;
    }

    printf("The sum of the series is %f\n", sum);

    return 0;
}
