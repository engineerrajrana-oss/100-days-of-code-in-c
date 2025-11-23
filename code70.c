//Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n; // handle k > n

    // Rotate array to the right by 1, k times
    for(j = 0; j < k; j++) {
        temp = a[n-1];  // store last element
        for(i = n-1; i > 0; i--) {
            a[i] = a[i-1];  // shift elements to right
        }
        a[0] = temp;  // put last element at first position
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
