//Print the initials of a name.
#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter your full name: ");
    gets(name);  

    printf("Initials: ");

    // Print the first letter
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Print letter after every space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c", name[i + 1]);
    }

    printf("\n");
    return 0;
}
