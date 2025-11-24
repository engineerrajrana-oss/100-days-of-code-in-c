/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
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

    printf("Enter window size k: ");
    scanf("%d", &k);

    // Check if k is valid
    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        return 0;
    }

    printf("First negative numbers in each subarray of size %d:\n", k);

    // Loop for each subarray (window)
    for (i = 0; i <= n - k; i++) {
        int found = 0;  // flag to check if any negative number found

        // Check elements of current window
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break; // stop when first negative is found
            }
        }

        // If no negative found
        if (!found)
            printf("0 ");
    }

    printf("\n");
    return 0;
}
