//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int num = 1, den = 2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (float)num / den;
        num = num + 2;  // next odd number
        den = den + 2;  // next even number
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
