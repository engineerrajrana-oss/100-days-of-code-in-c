//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Handle negative numbers by converting to positive
    num = abs(num);

    int digit_counts[10] = {0}; // Initialize all counts to 0

    // Extract digits and update their counts
    if (num == 0) { // Special case for input 0
        digit_counts[0]++;
    } else {
        while (num > 0) {
            int digit = num % 10; // Get the last digit
            digit_counts[digit]++; // Increment count for that digit
            num /= 10;            // Remove the last digit
        }
    }

    // Find the digit with the maximum count
    int max_count = -1;
    int most_frequent_digit = -1;

    for (int i = 0; i < 10; i++) {
        if (digit_counts[i] > max_count) {
            max_count = digit_counts[i];
            most_frequent_digit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", most_frequent_digit);

    return 0;
}