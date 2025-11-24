//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

int main() {
    // Create enum for menu choices
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

    int choice, a, b;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display menu
    printf("\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Use switch to perform the selected operation
    switch (choice) {
        case ADD:
            printf("Result: %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Result: %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Result: %d\n", a * b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
