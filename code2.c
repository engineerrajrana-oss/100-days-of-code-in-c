//Write a program to input two numbers and display their sum, difference, product, and quotient.
 #include <stdio.h>

int main() {
    float num1, num2;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    // Display results
    printf("\nSum = %.2f", num1 + num2);
    printf("\nDifference = %.2f", num1 - num2);
    printf("\nProduct = %.2f", num1 * num2);
    
    if (num2 != 0) {
        printf("\nQuotient = %.2f", num1 / num2);
    } else {
        printf("\nDivision by zero is not allowed.");
    }
    
    return 0;
}