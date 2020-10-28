//C Program to Write a Sentence to a File

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];

    FILE *fptr;   // creating file pointer to work with files

    fptr = fopen("program.txt", "w");  // opening file in writing mode

    if (fptr == NULL) {   // exiting program 
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}