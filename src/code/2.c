#include <stdio.h>

int main(void)
{
    int marks;

    printf("Enter the marks of the student: ");
    scanf("%d", &marks);

    if (marks > 90)
    {
        printf("A\n");
    }
    else if (marks >= 65 && marks <= 89)
    {
        printf("B\n");
    }
    else if (marks >= 40 && marks <= 64)
    {
        printf("C\n");
    }
    else if (marks >= 30 && marks <= 39)
    {
        printf("D\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}
