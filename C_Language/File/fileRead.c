#include <stdio.h>
#include <string.h>
#include "headerTrial.h"

int main() {

    FILE *file;
    char ch;
    file = fopen("test.txt", "r");

    /* Here * used to declare variable as FILE structure is hidden from user.
    The fopen function returns a pointer to a FILE structure that represents
    the opened file stream. This pointer is then assigned to the file variable.
    Wou can now use this pointer to perform various operations on the file. */

    if (file == NULL){
        printf("File not exist");
    }

    else
    {
        printf("file is opened, preprocessor checked %s\n",name);
        while(!feof(file)){
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }

}