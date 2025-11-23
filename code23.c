/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    // Input no. of late days
    printf("Enter number of late days: ");
    scanf("%d", &days);

    // Calculate fine based on late days
    if (days <= 5) {
        fine = days * 2;  // ₹2 per day for first 5 days
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;  // ₹4 per day for next 5 days
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;  // ₹6 per day for next 20 days
    }
    else {
        printf("Membership Cancelled!\n");
        return 0;
    }

    printf("Total fine = ₹%d\n", fine);

    return 0;
}
