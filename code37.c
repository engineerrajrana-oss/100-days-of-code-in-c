//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // the maximum number between a and b
    max = (a > b) ? a : b;

    // loop until we find LCM
    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM = %d\n", max);
            break;
        }
        max++;
    }

    return 0;
}
