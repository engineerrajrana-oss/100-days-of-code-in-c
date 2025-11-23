//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Step 1: Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not rotations of each other.\n");
        return 0;
    }

    // Step 2: Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Step 3: Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are not rotations of each other.\n");

    return 0;
}
