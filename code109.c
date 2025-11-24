/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
*/
#include <stdio.h>

int main() {
    int n, k, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    // Check for valid k
    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    int maxSum = -1000000;  // store the largest sum

    // Check all subarrays of size k
    for (i = 0; i <= n - k; i++) {
        int sum = 0;

        // find sum of current subarray
        for (j = i; j < i + k; j++) {
            sum += arr[j];
        }

        // update maxSum if needed
        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of subarray of size %d is %d\n", k, maxSum);

    return 0;
}
