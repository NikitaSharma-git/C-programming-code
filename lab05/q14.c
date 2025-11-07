//WAP in C to calculate the sum of the first n natural numbers using a for loop.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a no. : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;  
    }

    printf("The sum of first %d natural no. is: %d\n", n, sum);

    return 0;
}
