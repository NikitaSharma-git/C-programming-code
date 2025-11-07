//Write a C program to reverse the elements of an array using a function.
#include <stdio.h>

void reverse(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverse(arr, n);

    printf("Reversed array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
