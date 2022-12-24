#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        char ch = 'A';
        for (int j = i; j < 5; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
