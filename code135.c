//Assign explicit values starting from 10 and print them.
#include <stdio.h>

int main() {
    // Enum with explicit values
    enum Status { SUCCESS = 10, FAILURE = 11, TIMEOUT = 12 };

    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}
