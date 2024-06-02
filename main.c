#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printoutput();

int main() {
     
    printoutput();

    return 0;
}


void printoutput(){
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