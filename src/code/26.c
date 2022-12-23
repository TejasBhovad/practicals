#include <stdio.h>
#include <string.h>

#define N 10 // Number of players

// Football structure for a player
typedef struct
{
    char name[100];
    char country[100];
    int goals;
} Football;

// Function to sort the players according to goals
void sort_players(Football players[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (players[j].goals < players[min_index].goals)
            {
                min_index = j;
            }
        }
        // Swap the players at indices i and min_index
        Football temp = players[i];
        players[i] = players[min_index];
        players[min_index] = temp;
    }
}

int main()
{
    Football players[N];

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

    // Sort the players according to goals
    sort_players(players, N);

    // Display the sorted player details
    printf("Sorted player details:\n");
    for (int i = 0; i < N; i++)
    {
        printf("Name: %s\n", players[i].name);
        printf("Country: %s\n", players[i].country);
        printf("Goals: %d\n", players[i].goals);
    }

    return 0;
}
