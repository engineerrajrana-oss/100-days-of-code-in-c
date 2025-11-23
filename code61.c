//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, i, num, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(a[i] == num) {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Number not found in array\n");
    }

    return 0;
}
