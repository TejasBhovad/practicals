#include <stdio.h>

int main()
{
    int i, n, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Element found at index %d\n", i);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
