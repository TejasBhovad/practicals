#include <stdio.h>
#include <string.h>

#define N 10 // Number of employees

// Employee structure
typedef struct
{
    int id;
    char name[100];
    int goals;
} Employee;

int main()
{
    Employee employees[N];

    // Read in employee details
    for (int i = 0; i < N; i++)
    {
        printf("Enter employee %d details:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Goals: ");
        scanf("%d", &employees[i].goals);
    }

    // Find the highest goal scorer
    int max_index = 0;
    for (int i = 1; i < N; i++)
    {
        if (employees[i].goals > employees[max_index].goals)
        {
            max_index = i;
        }
    }

    // Display the details of the highest goal scorer
    printf("Highest goal scorer:\n");
    printf("ID: %d\n", employees[max_index].id);
    printf("Name: %s\n", employees[max_index].name);
    printf("Goals: %d\n", employees[max_index].goals);

    return 0;
}
