#include <stdio.h>

// Function to find the sum of the elements in an array
int sum(int a[], int n)
{
    int i, total = 0;
    for (i = 0; i < n; i++)
    {
        total += a[i];
    }
    return total;
}

int main()
{
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int result = sum(a, n);
    printf("The sum of the elements is %d\n", result);

    return 0;
}
