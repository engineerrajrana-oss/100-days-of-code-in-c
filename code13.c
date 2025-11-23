//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main() {
    int year;

    // Input year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year conditions
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } 
    else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    } 
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } 
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
