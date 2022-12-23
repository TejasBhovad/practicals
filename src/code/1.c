#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of users: ");
    scanf("%d", &n);

    float basic[n], da, hra, gross[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the basic salary for user %d: ", i + 1);
        scanf("%f", &basic[i]);
    }

    da = 0.50;  // 50% DA
    hra = 0.40; // 40% HRA

    // Calculate gross salary for each user
    for (int i = 0; i < n; i++)
    {
        gross[i] = basic[i] + (basic[i] * da) + (basic[i] * hra);
    }

    // Display salaries in descending order
    printf("Salaries in descending order: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (gross[i] > gross[j])
            {
                float temp = gross[i];
                gross[i] = gross[j];
                gross[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\n", gross[i]);
    }

    return 0;
}