/*Define a union called Data that contains the following members:
int i;
float f;
char str[20];
Write a program to:
Assign values to each member of the union one by one.
Print all members after each assignment.*/
#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    // Assign integer value
    data.i = 10;
    printf("After assigning integer:\n");
    printf("i = %d\n", data.i);
    printf("f = %.2f\n", data.f);
    printf("str = %s\n\n", data.str);

    // Assign float value
    data.f = 22.5;
    printf("After assigning float:\n");
    printf("i = %d\n", data.i);
    printf("f = %.2f\n", data.f);
    printf("str = %s\n\n", data.str);

    // Assign string value
    // Use strcpy because direct assignment to char array is not allowed
    sprintf(data.str, "Hello");
    printf("After assigning string:\n");
    printf("i = %d\n", data.i);
    printf("f = %.2f\n", data.f);
    printf("str = %s\n", data.str);

    return 0;
}
