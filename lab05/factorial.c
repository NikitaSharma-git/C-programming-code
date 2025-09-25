//Write a C program to find the factorial of a number using a while loop
#include <stdio.h>

int main() {
    int n, factorial = 1;

    printf("Enter integer : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("no factorial for negative no. .\n");
        return 0;
    }

    int i = 1;
    while (i <= n) {
        factorial *= i; 
        i++;            
    }

    printf("Factorial of %d is: %d\n", n, factorial);

    return 0;
}
