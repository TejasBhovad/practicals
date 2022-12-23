#include <stdio.h>

// Function to reverse a string
void reverse_string(char s[])
{
    int i, j, temp;
    for (i = 0; s[i] != '\0'; i++)
        ; // Find the length of the string
    for (i--, j = 0; j < i; i--, j++)
    {
        // Swap the characters at indices i and j
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    reverse_string(s);
    printf("Reversed string: %s\n", s);

    return 0;
}
