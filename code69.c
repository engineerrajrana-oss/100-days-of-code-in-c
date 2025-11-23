//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i;
    int largest, second;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if(n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }

    largest = second = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("The second largest element is: %d\n", second);

    return 0;
}
