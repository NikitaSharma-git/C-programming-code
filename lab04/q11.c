//Using nested if
//Write a C program to take a person’s age as input and check if they are eligible to vote.
//If the age is 18 or more, print "Eligible to vote".
//If the age is less than 18, check again:
//If the age is less than 0, print "Invalid age".
//Otherwise, print "Not eligible to vote".
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible \n");
    } else {
        if (age < 0) {
            printf("Invalid age\n");
        } else {
            printf("Not eligible \n");
        }
    }

    return 0;
}
