//Write a program to input time in seconds and convert it to hours:minutes:seconds format

#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    // Input total seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // Remaining minutes
    seconds = totalSeconds % 60;          // Remaining seconds

    // Display in HH:MM:SS format
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
