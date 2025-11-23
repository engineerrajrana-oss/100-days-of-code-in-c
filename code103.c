/*Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
*/
#include <stdio.h>

int main() {
    int n, i;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = 0, leftSum = 0, pivotIndex = -1;

    // Calculate total sum of the array
    for (i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Find pivot index
    for (i = 0; i < n; i++) {
        // Right sum = totalSum - leftSum - arr[i]
        if (leftSum == totalSum - leftSum - arr[i]) {
            pivotIndex = i; // Found the leftmost pivot
            break;
        }
        leftSum += arr[i];
    }

    // Output result
    if (pivotIndex == -1)
        printf("No pivot index found. Output: -1\n");
    else
        printf("Pivot index is %d\n", pivotIndex);

    return 0;
}
