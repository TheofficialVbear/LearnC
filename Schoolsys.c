#include <stdio.h>
#include <stdlib.h>

void introtext();
int UserChoice();
void determineWinner(int UserChoice);

int main() {

   introtext();
   int userchoice = UserChoice();
   determineWinner(userchoice);
    
    return 0;
}

void introtext() {
   printf("Welcome, what would you like to do?\n");
   printf("1) Add to the list\n");
   printf("2) Edit a user\n");
   printf("3) Delete a user\n");
   printf("3) Delete a user\n");
   printf("4) Print list\n");
   printf("5) Show information from ID\n");
   printf("6) Exit the program\n");
   
}

int UserChoice() {
    int choice;
    scanf("%d", &choice);
    while (choice < 1 || choice > 6) {
        printf("Invalid choice. Please enter a number between 1 and 5: ");
        scanf("%d", &choice);
    }
    return choice;
}

void determineWinner(int UserChoice) {
    if (UserChoice == 1) {
        printf("You chose 1\n");
    }else if(UserChoice == 2) {
        printf("You chose 2\n");
    }else if(UserChoice == 3) {
        printf("You chose 3\n");
    }else if(UserChoice == 4) {
        printf("You chose 4\n");
    }else if(UserChoice == 5) {
        printf("You chose 5\n");
    }else if(UserChoice == 6) {
        printf("You chose 6\n");
        
    }else {
        printf("how??");
    }
}
