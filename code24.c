/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

#include <stdio.h>

int main() {
    int units;        
    float bill = 0;    

    // Step 1: Ask user for the number of units
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    // Step 2: Calculate bill according to the given rate slabs
    if (units <= 100) {
        // For first 100 units → ₹5 per unit
        bill = units * 5;
    }
    else if (units <= 200) {
        // For next 100 units → ₹7 per unit
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        // For next 100 units → ₹10 per unit
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        // Above 300 units → ₹12 per unit
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    // Step 3: Display the total bill amount
    printf("Your total electricity bill is: ₹%.2f\n", bill);

    return 0;
}
