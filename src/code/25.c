#include <stdio.h>

int main()
{
    int n, count = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Count the number of digits
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    // Calculate the sum of digits
    temp = n;
    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Number of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
