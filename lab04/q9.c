//Write a C program that takes an integer input from the user and checks whether the number is even or odd using an if-else statement.
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}
