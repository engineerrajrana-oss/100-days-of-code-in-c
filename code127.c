//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *inFile, *outFile;
    char ch;

    // Open input file in read mode
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error! Unable to open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error! Unable to create output.txt\n");
        fclose(inFile);
        return 1;
    }

    // Read each character, convert to uppercase, and write to output
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }

    printf("Text converted to uppercase and saved in output.txt\n");

    // Close both files
    fclose(inFile);
    fclose(outFile);

    return 0;
}
