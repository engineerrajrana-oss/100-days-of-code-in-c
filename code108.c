/*Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/
#include <stdio.h>

int main() {
    int n, i, j;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Invalid size.\n");
        return 0;
    }

    int nums[n], answer[n];

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Compute the product for each element except itself
    for (i = 0; i < n; i++) {
        int product = 1;
        for (j = 0; j < n; j++) {
            if (i != j)
                product *= nums[j];
        }
        answer[i] = product;
    }

    // Print result array
    printf("Resultant array: ");
    for (i = 0; i < n; i++) {
        if (i == n - 1)
            printf("%d", answer[i]);
        else
            printf("%d, ", answer[i]);
    }

    printf("\n");
    return 0;
}
