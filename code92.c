//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  // Array to store frequency of each letter
    int i = 0, found = 0;

    printf("Enter a string: ");
    gets(str); 

    while (str[i] != '\0') {
        char ch = str[i];

    
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;  

        
            if (freq[ch - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                found = 1;
                break;
            }
        }
        i++;
    }

    if (!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
