//Merge two arrays.
#include <stdio.h>

int main() {
    int n1, n2, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2];
    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int c[n1 + n2];

    // Merging arrays
    for(i = 0; i < n1; i++) {
        c[i] = a[i];
    }

    for(j = 0; j < n2; j++) {
        c[i + j] = b[j];
    }

    printf("Merged array:\n");
    for(k = 0; k < n1 + n2; k++) {
        printf("%d ", c[k]);
    }

    return 0;
}
