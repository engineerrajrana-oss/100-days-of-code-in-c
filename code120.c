//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>  // for toupper() and tolower()

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read full line (with spaces)

    // Convert first character to uppercase
    if (str[0] != '\0')
        str[0] = toupper(str[0]);

    // Convert remaining characters to lowercase
    for (i = 1; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Sentence case: %s", str);

    return 0;
}
