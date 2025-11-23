//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name);  

    // Find position of last space (before surname)
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print initials
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf("%c. ", name[i + 1]);
    }

    // Print surname in full
    printf("%s\n", &name[lastSpace + 1]);

    return 0;
}
