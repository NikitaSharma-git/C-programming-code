/*Write a C program to append new text to an existing file.
Ask the user for a filename.
Open the file in append mode ("a").
Let the user input additional text until they type "STOP".
Append the text at the end of the file without overwriting existing content.*/
#include <stdio.h>
#include <string.h>

int main() {
char filename[100];
char text[1000];

// Ask user for filename
printf("Enter the filename: ");
scanf("%s", filename);

// Open the file in append mode
FILE *file = fopen(filename, "a");
if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
}

printf("Enter text to append (type STOP to finish):\n");

// Clear input buffer before taking multi-line input
getchar(); 

while (1) {
    fgets(text, sizeof(text), stdin);

    // Remove newline character at the end if present
    text[strcspn(text, "\n")] = 0;

    // Stop if user types "STOP"
    if (strcmp(text, "STOP") == 0) {
        break;
    }

    // Append text to file
    fprintf(file, "%s\n", text);
}

fclose(file);
printf("Text appended successfully!\n");

return 0;
}