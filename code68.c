//Delete an element from an array.
#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position of element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the left
    for(i = pos-1; i < n-1; i++) {
        a[i] = a[i+1];
    }

    n--;  // reduce array size

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
