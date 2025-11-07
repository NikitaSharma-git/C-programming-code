//Write a C program to read a string from the user and print it in reverse order using a character array.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    gets(str);  // reads the input string

    len = strlen(str);

    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
