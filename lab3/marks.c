//Using else-if ladder
//Write a C program that asks the user to enter marks (0–100) and assigns a grade based on the following conditions:
//90–100  Grade A
//75–89  Grade B
//50–74  Grade C
//Below 50  Grade F
#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Grade A\n");
    } else if (marks >= 75 && marks <= 89) {
        printf("Grade B\n");
    } else if (marks >= 50 && marks <= 74) {
        printf("Grade C\n");
    } else if (marks >= 0 && marks < 50) {
        printf("Grade F\n");
    } else {
        printf("Invalid marks\n");
    }

    return 0;
}
