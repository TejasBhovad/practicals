#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number, i;
    bool is_prime = true;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is less than 2, which is not a prime
    if (number < 2)
    {
        is_prime = false;
    }
    // Check if the number is divisible by any integer from 2 to its square root
    for (i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
    {
        printf("%d is a prime number\n", number);
    }
    else
    {
        printf("%d is not a prime number\n", number);
    }

    return 0;
}
