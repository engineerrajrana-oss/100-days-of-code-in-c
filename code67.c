//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, i, pos, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n+1];  // extra space for new element

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    printf("Enter position (1 to %d): ", n+1);
    scanf("%d", &pos);

    // Shift elements to the right
    for(i = n; i >= pos; i--) {
        a[i] = a[i-1];
    }

    a[pos-1] = key;  // insert element
    n++;             // increase array size

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
