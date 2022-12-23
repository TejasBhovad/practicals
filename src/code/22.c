#include <stdio.h>

int main()
{
    int i, n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    printf("%d ", a);
    printf("%d ", b);
    for (i = 2; i < n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
