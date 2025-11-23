//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, r, product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        r = n % 10;          // get last digit
        if (r % 2 != 0) {    // check if odd
            product = product * r;
            hasOdd = 1;
        }
        n = n / 10;          // remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}

