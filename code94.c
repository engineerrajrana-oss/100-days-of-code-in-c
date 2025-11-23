//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(str);  

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';  // End of one word

            int len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);  // Save this as longest
            }

            j = 0;  // Reset for next word
            if (str[i] == '\0') break;  // Stop if end of string
        } else {
            word[j] = str[i];
            j++;
        }
        i++;
    }

    printf("The longest word is: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
