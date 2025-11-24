//
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    // Take the filename from user
    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();  // to consume the newline left by scanf

    // Open file in append mode
    fp = fopen(filename, "a");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error! Unable to open file.\n");
        return 1;
    }

    // Take new text input from user
    printf("Enter the line to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fprintf(fp, "%s", text);

    // Close file
    fclose(fp);

    printf("Text appended successfully to %s\n", filename);

    return 0;
}

