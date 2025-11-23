/*Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/
#include <stdio.h>

int main() {
    int n, x, i, ceilIndex = -1;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate size
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    int arr[n];

    // Input sorted array
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input x
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Find the index of ceil element
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;  // store index of the first element >= x
            break;          // stop once found (smallest >= x)
        }
    }

    // Output result
    if (ceilIndex == -1)
        printf("Ceil of %d does not exist in the array. Index: -1\n", x);
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[ceilIndex], ceilIndex);

    return 0;
}
