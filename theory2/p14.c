// WAP that takes string input using fgets but removes the newline character at the end of the string

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing the newline character from fgets
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("String input: %s\n", str);

    return 0;
}
