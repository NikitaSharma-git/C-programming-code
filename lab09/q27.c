/*Write a C program to create a file and write user-entered text into it.
Ask the user for a filename.
Open the file in write mode ("w").
Allow the user to enter multiple lines of text until they type "END".
Write all lines to the file.*/
#include <stdio.h>
#include <string.h>

int main() {
char filename[100];
char line[500];
FILE *fp;

// Ask for filename
printf("Enter filename: ");
scanf("%s", filename);

// Open file in write mode
fp = fopen(filename, "w");
if(fp == NULL) {
    printf("Error opening file!\n");
    return 1;
}

getchar(); // consume leftover newline
printf("Enter text (type 'END' in a new line to stop):\n");

while(1) {
    fgets(line, sizeof(line), stdin);
    // Remove newline character from fgets
    line[strcspn(line, "\n")] = '\0';

    if(strcmp(line, "END") == 0)
        break;

    fprintf(fp, "%s\n", line);
}

fclose(fp);
printf("Text successfully written to %s\n", filename);

return 0;
}