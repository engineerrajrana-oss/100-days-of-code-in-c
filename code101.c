/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
*/
#include <stdio.h>

int main() {
    int n, target, i, first = -1, last = -1;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    // Input array elements (sorted)
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target element
    printf("Enter the target element: ");
    scanf("%d", &target);

    // Find first and last occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;  
            last = i;       
        }
    }

    // Display results
    if (first == -1)
        printf("Target not found.\nFirst occurrence index: -1\nLast occurrence index: -1\n");
    else {
        printf("First occurrence of %d is at index %d\n", target, first);
        printf("Last occurrence of %d is at index %d\n", target, last);
    }

    return 0;
}
