#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char firstname[50];
char lastname[50];
int accountnumber;
double accountsum;
int loopnum = 1;

void pickanum();
void mainmenu();

int main() {
    
   
   mainmenu();
   
    return 0;
}

void introtext() {
   printf("\n\n\n-----------------------------------\nStarting School Overview\n-----------------------------------\n");
   printf("1) Add a user to the list\n");
   printf("2) Edit a user\n");
   printf("3) Delete a user\n");
   printf("4) Print list\n");
   printf("5) Show information from ID\n");
   printf("6) Go back\n");
   
}

void printusers(){
    FILE *thefilename;
    thefilename = fopen("userlist.txt", "r"); 
    char filecontent[500];
    if (thefilename != NULL) {
        while (fgets(filecontent, 500, thefilename)){
        printf("%s", filecontent);
        }
    }else {
        printf("File not found");
    }
    fclose(thefilename); 
    }

void adduser(){
    printf("What is the firstname?\n");
    scanf("%s", firstname);
    printf("What is the lastname?\n");
    scanf("%s", lastname);
    printf("What is the accountnumber?\n");
    scanf("%d", &accountnumber);
    
    FILE *thefilename;
    thefilename = fopen("userlist.txt", "a"); 
    
    if (thefilename != NULL) {
        fprintf(thefilename, ("%s %s %d\n"),firstname,lastname, accountnumber);
        
    }else {
        printf("File not found");
    }
    fclose(thefilename); 
    }
void mainmenu() {
    while (loopnum == 1){
        printf("\n\n\n-----------------------------------\nWelcome, what would you like to do?\n-----------------------------------\n\n");
    printf("1) Run School program\n");
    printf("2) Exit Program\n");
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
        pickanum();
        mainmenu();
        }else if(choice == 2) {
            loopnum = 0;
            break;

    }else {
        printf("Choose one or two");
    }
    }}
void pickanum() {
    int loopnum = 1;
    while (loopnum == 1){
        introtext();
        int choice;
        scanf("%d", &choice);
        if (choice == 1) {
            printf("You chose 1, adding a user to the list\n");
            adduser();
        }else if(choice == 2) {
            printf("You chose 2, edit a user\n");
            
        }else if(choice == 3) {
            printf("You chose 3, delete a user\n");
            
        }else if(choice == 4) {
            printf("You chose 4\n");
            printusers();
            
        }else if(choice == 5) {
            printf("You chose 5\n");

        }else if(choice == 6) {
            loopnum = 0;
            break;
        }else {
            printf("Invalid choice. Please enter a number between 1 and 6: ");
            
        }
    }
}






