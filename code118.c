/*Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
*/
#include <stdio.h>

int main() {
    int n, i, sum = 0, total;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers (from 0 to %d, with one missing):\n", n, n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Formula for sum of first n natural numbers
    total = n * (n + 1) / 2;

    printf("Missing number is: %d\n", total - sum);

    return 0;
}
