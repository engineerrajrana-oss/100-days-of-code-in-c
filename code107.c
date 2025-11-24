/*Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements: ");

    // For each element, find the previous greater element
    for (i = 0; i < n; i++) {
        int prev = -1;  // assume no previous greater element
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];  // found greater element on the left
                break;          // stop searching
            }
        }

        // Print results in comma-separated format
        if (i == n - 1)
            printf("%d", prev);  // no comma after last element
        else
            printf("%d, ", prev);
    }

    printf("\n");
    return 0;
}
