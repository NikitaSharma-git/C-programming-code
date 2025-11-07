//Write a C program using a loop to check if a number is prime or not.
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a no.: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime no.\n", n);
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("%d is not a prime no.\n", n);
            return 0; 
        }
    }

    printf("%d is a prime no.\n", n);

    return 0;
}
