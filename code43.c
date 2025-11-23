//Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int n, temp, rem, fact, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;  // store original number

    while (n > 0) {
        rem = n % 10;      // get last digit
        fact = 1;

        // find factorial of the digit
        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;  // add factorial to sum
        n = n / 10;        // remove last digit
    }

    if (sum == temp)
        printf("Strong number\n");
    else
        printf("Not a strong number\n");

    return 0;
}
