/*Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/
#include <stdio.h>
#include <ctype.h>  // for isspace()

int main() {
    FILE *fp;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;  // flag to track if we’re inside a word

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error! Unable to open file.\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        charCount++;  // count every character

        // Count lines
        if (ch == '\n')
            lineCount++;

        // Count words
        if (isspace(ch)) {
            inWord = 0;  // word ended
        } else if (inWord == 0) {
            inWord = 1;  // new word started
            wordCount++;
        }
    }

    fclose(fp);  // close file

    printf("Total characters: %d\n", charCount);
    printf("Total words: %d\n", wordCount);
    printf("Total lines: %d\n", lineCount);

    return 0;
}
