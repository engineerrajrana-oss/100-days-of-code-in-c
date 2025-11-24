//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>  // for isalpha() and tolower()

int main() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file in read mode
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error! Unable to open file.\n");
        return 1;
    }

    // Read each character until EOF
    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch); // Convert to lowercase for easy checking

        if (isalpha(ch)) { // Check if character is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    // Display results
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    fclose(file);
    return 0;
}
