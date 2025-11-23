//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, i, key, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n+1];  // extra space for new element

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find correct position
    for(pos = 0; pos < n; pos++) {
        if(key < a[pos])
            break;
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        a[i] = a[i-1];
    }

    a[pos] = key;  // insert element
    n++;           // increase array size

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
