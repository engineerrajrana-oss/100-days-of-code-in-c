//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // use long long for large results

    // Ask the user for the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Multiply all even numbers from 1 to n
    for (i = 2; i <= n; i += 2) {
        product = product * i;
    }

    // Display the result
    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
