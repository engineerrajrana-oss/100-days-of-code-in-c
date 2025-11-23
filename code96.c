//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50];
    int i = 0, j = 0, k;

    printf("Enter a sentence: ");
    gets(str);  

    printf("Reversed words: ");

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0'; 

            // Print current word in reverse
            for (k = j - 1; k >= 0; k--)
                printf("%c", word[k]);

            if (str[i] == ' ')
                printf(" ");  // Print space between words

            j = 0;  // Reset for next word

            if (str[i] == '\0')
                break;  // Stop if end of string
        } else {
            word[j] = str[i];
            j++;
        }
        i++;
    }

    printf("\n");
    return 0;
}
