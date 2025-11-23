//Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;           // Get the last digit
        reverse = reverse * 10 + remainder; // Add it to reverse
        n = n / 10;                   // Remove the last digit
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}
