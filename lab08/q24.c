//Write a C program to define a structure called Student with the following members:
//name (string of max 50 characters)
//SAP ID (integer)
//marks (float)
//Create an array of 5 students, take input for each, and display the details of all students.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int sapID;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        // Read name using fgets (safe)
        printf("Name: ");
        if (fgets(s[i].name, sizeof s[i].name, stdin) == NULL) {
            // handle EOF or error
            s[i].name[0] = '\0';
        } else {
            // remove trailing newline if present
            size_t len = strlen(s[i].name);
            if (len > 0 && s[i].name[len - 1] == '\n')
                s[i].name[len - 1] = '\0';
        }

        // Read SAP ID with validation
        printf("SAP ID: ");
        while (scanf("%d", &s[i].sapID) != 1) {
            printf("Invalid input. Enter SAP ID (integer): ");
            while (getchar() != '\n'); // clear bad input
        }

        // Read marks with validation
        printf("Marks: ");
        while (scanf("%f", &s[i].marks) != 1) {
            printf("Invalid input. Enter Marks (number): ");
            while (getchar() != '\n'); // clear bad input
        }

        // consume the newline left in input buffer after scanf
        while (getchar() != '\n' && !feof(stdin));
    }

    // Display details
    printf("\n--- Student Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("SAP ID: %d\n", s[i].sapID);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
