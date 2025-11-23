//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask the user for how many odd numbers to add
    printf("Enter how many odd numbers you want to sum: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1); // Formula for ith odd number
    }

    // result
    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
