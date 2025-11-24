/*Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = arr[0];  // stores overall maximum sum
    int currentSum = arr[0];  // stores current subarray sum

    // Apply Kadane’s algorithm
    for (i = 1; i < n; i++) {
        // either add current element or start new subarray
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        // update maxSum if currentSum is greater
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum subarray sum = %d\n", maxSum);

    return 0;
}
