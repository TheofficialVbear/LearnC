#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 100

// Function declarations
void printBoard(int playerPosition);
int rollDice();
int movePlayer(int playerPosition);
int checkSnakesAndLadders(int position);

// Snakes and Ladders positions
const int snakes[][2] = {
    {16, 6},
    {47, 26},
    {49, 11},
    {56, 53},
    {62, 19},
    {64, 60},
    {87, 24},
    {93, 73},
    {95, 75},
    {98, 78}
};

const int ladders[][2] = {
    {1, 38},
    {4, 14},
    {9, 31},
    {21, 42},
    {28, 84},
    {36, 44},
    {51, 67},
    {71, 91},
    {80, 100}
};

int main() {
    srand(time(0)); // Seed the random number generator

    int playerPosition = 0;

    printf("Welcome to Snakes and Ladders!\n");

    while (playerPosition < BOARD_SIZE) {
        printf("\nPress Enter to roll the dice...");
        getchar();

        int dice = rollDice();
        printf("You rolled a %d!\n", dice);

        playerPosition = movePlayer(playerPosition + dice);
        printf("You moved to position %d\n", playerPosition);

        playerPosition = checkSnakesAndLadders(playerPosition);
        printBoard(playerPosition);

        if (playerPosition == BOARD_SIZE) {
            printf("Congratulations! You've reached the end and won the game!\n");
            break;
        }
    }

    return 0;
}

void printBoard(int playerPosition) {
    for (int i = 1; i <= BOARD_SIZE; i++) {
        if (i == playerPosition) {
            printf("[P]");
        } else {
            printf("[%d]", i);
        }

        if (i % 10 == 0) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
}

int rollDice() {
    return (rand() % 6) + 1;
}

int movePlayer(int playerPosition) {
    if (playerPosition > BOARD_SIZE) {
        return BOARD_SIZE - (playerPosition - BOARD_SIZE);
    } else {
        return playerPosition;
    }
}

int checkSnakesAndLadders(int position) {
    for (int i = 0; i < sizeof(snakes) / sizeof(snakes[0]); i++) {
        if (position == snakes[i][0]) {
            printf("Oops! You landed on a snake. Sliding down from %d to %d.\n", snakes[i][0], snakes[i][1]);
            return snakes[i][1];
        }
    }

    for (int i = 0; i < sizeof(ladders) / sizeof(ladders[0]); i++) {
        if (position == ladders[i][0]) {
            printf("Yay! You landed on a ladder. Climbing up from %d to %d.\n", ladders[i][0], ladders[i][1]);
            return ladders[i][1];
        }
    }

    return position;
}
