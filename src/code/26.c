#include <stdio.h>
#include <string.h>

#define N 3 // Number of players

// Football structure for a player
struct Football
{
    char name[100];
    char country[100];
    int goals;
};
int main()
{
    struct Football players[N];

    // Read in player details
    for (int i = 0; i < N; i++)
    {
        printf("Enter player %d details:\n", i + 1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Country: ");
        scanf("%s", players[i].country);
        printf("Goals: ");
        scanf("%d", &players[i].goals);
    }
    int tmp = 0, index;
    // Find highest Scorer
    for (int i = 0; i < N; i++)
    {
        if (players[i].goals > tmp)
        {
            tmp = players[i].goals;
            index = i;
        }
    }

    // Display the sorted player details
    printf("Highest Scorer details:\n");
    printf("Name: %s\n", players[index].name);
    printf("Country: %s\n", players[index].country);
    printf("Goals: %d\n", players[index].goals);

    return 0;
}
