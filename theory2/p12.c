// WAP that concatenates two strings using a user defined function

#include <stdio.h>

int customStringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void customStringConcat(char dest[], const char src[]) {
    int destLength = customStringLength(dest);
    int srcLength = customStringLength(src);

    int i, j;

    for (i = destLength, j = 0; j < srcLength; i++, j++) {
        dest[i] = src[j];
    }

    dest[i] = '\0'; // Null-terminate the destination string
}

int main() {
    char str1[1000], str2[1000];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Removing the newline character from fgets
    if (str1[0] != '\0' && str1[customStringLength(str1) - 1] == '\n') {
        str1[customStringLength(str1) - 1] = '\0';
    }
    if (str2[0] != '\0' && str2[customStringLength(str2) - 1] == '\n') {
        str2[customStringLength(str2) - 1] = '\0';
    }

    customStringConcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}