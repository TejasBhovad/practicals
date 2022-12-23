#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int is_palindrome(char s[])
{
    int i, j, len = strlen(s);
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

// Function to check if two strings are equal
int are_equal(char s1[], char s2[])
{
    return strcmp(s1, s2) == 0;
}

int main()
{
    char s1[100], s2[100];

    printf("Enter a string: ");
    scanf("%s", s1);

    if (is_palindrome(s1))
    {
        printf("The string '%s' is a palindrome.\n", s1);
    }
    else
    {
        printf("The string '%s' is not a palindrome.\n", s1);
    }

    printf("Enter another string: ");
    scanf("%s", s2);

    if (are_equal(s1, s2))
    {
        printf("The strings '%s' and '%s' are equal.\n", s1, s2);
    }
    else
    {
        printf("The strings '%s' and '%s' are not equal.\n", s1, s2);
    }

    return 0;
}
