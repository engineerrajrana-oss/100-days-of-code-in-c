 // Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>

int main() {
    int day;

    // Ask the user to enter a number between 1 and 7
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    // Use switch-case to find which day it is
    switch(day) {
        case 1:
            printf("It's Monday.\n");
            break;
        case 2:
            printf("It's Tuesday.\n");
            break;
        case 3:
            printf("It's Wednesday.\n");
            break;
        case 4:
            printf("It's Thursday.\n");
            break;
        case 5:
            printf("It's Friday.\n");
            break;
        case 6:
            printf("It's Saturday.\n");
            break;
        case 7:
            printf("It's Sunday.\n");
            break;
        default:
        
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
