//Write a program to count how many digits a number has using a while loop.
#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a no.: ");
    scanf("%d", &n);

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n = n / 10; 
            count++;   
        }
    }

    printf("The no. have %d digits.\n", count);

    return 0;
}
