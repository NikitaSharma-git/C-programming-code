#include <stdio.h>

int main() {
    int x = 5;  // Initial value
    int y;

    printf("Initial value of x: %d\n", x);

    // Post-increment demonstration (x++)
    y = x++;
    printf("\nPost-increment (x++):\n");
    printf("Value assigned to y = %d\n", y);
    printf("Value of x after post-increment = %d\n", x);

    // Pre-increment demonstration (++x)
    y = ++x;
    printf("\nPre-increment (++x):\n");
    printf("Value assigned to y = %d\n", y);
    printf("Value of x after pre-increment = %d\n", x);

    return 0;
}
