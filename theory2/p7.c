// WAP that takes input into a 10k size char array and stops taking input only when & is entered

#include <stdio.h>

int main() {
    char input[10000];
    int i = 0;
    char ch;

    printf("Enter the input (stop by entering '&'):\n");

    while (i < 10000 - 1) {
        ch = getchar();

        if (ch == '&') {
            break; // Stop taking input when '&' is entered
        }

        input[i++] = ch;
    }

    input[i] = '\0'; // Null-terminate the input string

    printf("Input received: %s\n", input);

    return 0;
}