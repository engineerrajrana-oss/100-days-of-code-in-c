//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    // Ask the user for a filename
    printf("Enter file name: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    fp = fopen(filename, "r");

    // Check if file exists or not
    if (fp == NULL) {
        printf("Error! File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    // If file opened successfully, display its content
    printf("\nContents of '%s':\n", filename);
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}
