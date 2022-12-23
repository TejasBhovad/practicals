#include <stdio.h>

int main()
{
    int n, i;
    long sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    printf("The sum of the series is %ld\n", sum);

    return 0;
}
