#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Taking input from user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculating area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Displaying result
    printf("Area of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}