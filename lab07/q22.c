//Write a C program to count the number of vowels, consonants, digits, and special characters in a given character array (string).
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    int i;

    printf("Enter a string: ");
    gets(str); // reads input string

    for(i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // convert to lowercase for easy checking

        if(ch >= 'a' && ch <= 'z') { // alphabet
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if(ch >= '0' && ch <= '9')
            digits++;
        else if(ch != ' ')
            special++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
