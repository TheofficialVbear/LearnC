#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 4

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    int age;
    char grade;
} Student;

void printStudents(Student students[], int numStudents);


void pickanum();

// Initialize the list of students
Student students[MAX_STUDENTS] = {
    {1, "John Doe", 20, 'A'},
    {2, "Jane Smith", 21, 'B'},
    {3, "Bob Johnson", 19, 'A'},
    {4, "Something", 19, 'A'}
};

int numStudents = MAX_STUDENTS;

int main() {

   pickanum();
   
    return 0;
}

void introtext() {
   printf("Welcome, what would you like to do?\n");
   printf("1) Add to the list\n");
   printf("2) Edit a user\n");
   printf("3) Delete a user\n");
   printf("4) Print list\n");
   printf("5) Show information from ID\n");
   printf("6) Exit the program\n");
   
}

void printStudents(Student students[], int numStudents) {
    printf("List of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("ID: %d, Name: %s, Age: %d, Grade: %c\n", students[i].id, students[i].name, students[i].age, students[i].grade);
    }
}

void pickanum() {
    while (1){
        introtext();
        int choice;
        scanf("%d", &choice);
        while (choice < 1 || choice > 6) {
            printf("Invalid choice. Please enter a number between 1 and 6: ");
            scanf("%d", &choice);
        }
        if (choice == 1) {
            printf("You chose 1\n");
        }else if(choice == 2) {
            printf("You chose 2\n");
        }else if(choice == 3) {
            printf("You chose 3\n");
        }else if(choice == 4) {
            printf("You chose 4\n");
            printStudents(students, numStudents);
        }else if(choice == 5) {
            printf("You chose 5\n");
        }else if(choice == 6) {
            printf("Exiting program...\n");
            break;
        }else {
            printf("how??");
            break;
        }
    }
}






