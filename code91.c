//Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);


    while (str[i] != '\0') {
    
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            result[j] = str[i];  
            j++;
        }
        i++;
    }

    result[j] = '\0';  

    printf("String after removing vowels: %s\n", result);

    return 0;
}
