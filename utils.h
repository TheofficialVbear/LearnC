#ifndef UTILS_H
#define UTILS_H

void someUtilityFunction();

#endif // UTILS_H




/** 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function declarations
void printMenu();
int getUserChoice();
int getComputerChoice();
void determineWinner(int userChoice, int computerChoice);
const char* choiceToString(int choice);

int main() {
    srand(time(0)); // Seed the random number generator

    int userChoice, computerChoice;

    while (1) {
        printMenu();
        userChoice = getUserChoice();

        if (userChoice == 4) {
            printf("Thanks for playing!\n");
            break;
        }

        computerChoice = getComputerChoice();
        printf("You chose: %s\n", choiceToString(userChoice));
        printf("Computer chose: %s\n", choiceToString(computerChoice));

        determineWinner(userChoice, computerChoice);
        printf("\n");
    }

    return 0;
}

void printMenu() {
    printf("Rock, Paper, Scissors Game\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int getUserChoice() {
    int choice;
    scanf("%d", &choice);
    while (choice < 1 || choice > 4) {
        printf("Invalid choice. Please enter a number between 1 and 4: ");
        scanf("%d", &choice);
    }
    return choice;
}

int getComputerChoice() {
    return (rand() % 3) + 1;
}

void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
}

const char* choiceToString(int choice) {
    switch (choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid choice";
    }
}

**/ 