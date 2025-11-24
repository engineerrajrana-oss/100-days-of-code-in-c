/*Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
*/
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n], freq[n+1];  // +1 to safely index from 0 to n
    for (i = 0; i <= n; i++) {
        freq[i] = 0;  // initialize all to 0
    }

    printf("Enter %d elements (only one will repeat):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // check if number already appeared
        if (freq[arr[i]] == 1) {
            printf("Repeated element is: %d\n", arr[i]);
            return 0;  // stop immediately (one iteration)
        }
        freq[arr[i]] = 1;
    }

    printf("No repeated element found.\n");
    return 0;
}
