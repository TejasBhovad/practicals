#include <stdio.h>
#include <math.h>

int main()
{
    int choice, number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter 1 to compute the square of the number\n");
    printf("Enter 2 to compute the square root of the number\n");
    printf("Enter 3 to compute the cube of the number\n");
    printf("Enter 4 to compute the prime factors of the number\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("The square of %d is %d\n", number, number * number);
        break;
    case 2:
        printf("The square root of %d is %f\n", number, sqrt(number));
        break;
    case 3:
        printf("The cube of %d is %d\n", number, number * number * number);
        break;
    case 4:
        printf("The prime factors of %d are: ", number);
        while (number % 2 == 0)
        {
            printf("2 ");
            number /= 2;
        }
        for (i = 3; i <= sqrt(number); i += 2)
        {
            while (number % i == 0)
            {
                printf("%d ", i);
                number /= i;
            }
        }
        if (number > 2)
        {
            printf("%d", number);
        }
        printf("\n");
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}
