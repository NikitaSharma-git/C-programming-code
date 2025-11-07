//Write a C program to count how many even and odd numbers are present in an array using functions.
#include <stdio.h>

// Function to count even numbers
int countEven(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            count++;
    }
    return count;
}

// Function to count odd numbers
int countOdd(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0)
            count++;
    }
    return count;
}

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int even = countEven(arr, n);
    int odd = countOdd(arr, n);

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
