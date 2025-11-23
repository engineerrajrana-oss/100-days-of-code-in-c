//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Binary representation: ");
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;   // Get each bit
        printf("%d", bit);
    }

    printf("\n");

    return 0;
}
