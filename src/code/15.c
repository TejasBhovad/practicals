#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    double x, sum = 0.0;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double term = x;
    for (i = 1; i <= n; i++)
    {
        sum += term;
        term *= -(x * x) / (2 * i * (2 * i + 1));
    }

    printf("The sum of the sine series is %f\n", sum);

    return 0;
}
