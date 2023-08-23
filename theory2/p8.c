// WAP that takes some text as input and converts it into a) uppercase b) lowercase

#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

void convertToLowercase(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

int main() {
    char text[1000];

    printf("Enter some text: ");
    fgets(text, sizeof(text), stdin);

    // Convert to Uppercase
    convertToUppercase(text);
    printf("Uppercase text: %s\n", text);

    // Convert to Lowercase
    convertToLowercase(text);
    printf("Lowercase text: %s\n", text);

    return 0;
}