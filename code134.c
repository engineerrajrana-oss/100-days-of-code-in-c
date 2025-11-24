//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

int main() {
    // Define enum
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    // Create a variable of enum type
    enum Status result = TIMEOUT;   // Change to FAILURE or TIMEOUT to test

    // Print message based on value
    if (result == SUCCESS) {
        printf("Operation completed successfully.\n");
    }
    else if (result == FAILURE) {
        printf("Operation failed.\n");
    }
    else if (result == TIMEOUT) {
        printf("Operation timed out.\n");
    }

    return 0;
}
