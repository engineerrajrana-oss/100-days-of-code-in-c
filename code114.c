/*Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k, len, maxLen = 0;
    int repeat;

    printf("Enter a string: ");
    gets(s);  // Read input string
    len = strlen(s);

    // Check all possible substrings
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            repeat = 0;

            // Check if substring s[i..j] has repeating characters
            for (k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    repeat = 1;
                    break;
                }
            }

            if (repeat)
                break;

            // Update maximum length if needed
            if (j - i + 1 > maxLen)
                maxLen = j - i + 1;
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
