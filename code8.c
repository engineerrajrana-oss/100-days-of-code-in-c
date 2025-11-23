//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Take input from user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate sum of first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
