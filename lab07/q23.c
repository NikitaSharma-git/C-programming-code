//Write a recursive function in C to find the factorial of a given number.
#include <stdio.h>

// Recursive function to find factorial
int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d", num, factorial(num));

    return 0;
}
