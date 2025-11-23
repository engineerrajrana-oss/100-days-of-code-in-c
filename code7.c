//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without third variable (using arithmetic)
    a = a + b;  // Step 1
    b = a - b;  // Step 2
    a = a - b;  // Step 3

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

