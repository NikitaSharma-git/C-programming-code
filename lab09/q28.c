/*Write a C program to read the contents of a file and display them on the screen.
Ask the user for a filename.
Open the file in read mode ("r").
Read the entire file
Display the contents on the console.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
char filename[100];
char ch;
FILE *fp;

// Ask for filename
printf("Enter filename to read: ");
scanf("%s", filename);

// Open file in read mode
fp = fopen(filename, "r");
if(fp == NULL) {
    printf("Error: Could not open file %s\n", filename);
    return 1;
}

// Read and display file content character by character
printf("\nContents of %s:\n", filename);
while((ch = fgetc(fp)) != EOF) {
    putchar(ch);
}

fclose(fp);
return 0;
}