#include <stdio.h>
#include <string.h>

int main() {

/*  To write something in a file:
    fputc(), fputw(), fputs(), frintf(), fwrite() */

/*  To read something in a file:
    fgetc(), fgetw(), fgets(), fscanf(), fread() */

    char name[20] = "Ariful Alam Nishan";
    char name1[] = " hello world";
    int length = strlen(name);


    FILE *file;
    file = fopen("test.txt", "w");
     //fopen is a function to open if exist and create if not exist.
     // a for append, w for write and r for read

     if (file == NULL){
         printf("File does not exist \n");
     }

     else{
         printf("File is opened \n");
         int j;
         for (int j = 0; j < length; j++) {
             fputc(name[j], file);
         }

         //used to write the entire line by fputs and fprintf

         fputs(name1, file);
         fprintf(file, "\nGreeting by fprintf: %s", name1);

         printf("File is written successfully\n");
         fclose(file);
     }

}
