//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Taking input from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Displaying result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}

