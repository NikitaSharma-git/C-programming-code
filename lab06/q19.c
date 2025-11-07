//Write a C program to calculate the average of n numbers stored in an array using a function.
#include <stdio.h>

float findAverage(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return (float)sum / n;
}

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    float avg = findAverage(arr, n);
    printf("Average = %.2f", avg);

    return 0;
}
