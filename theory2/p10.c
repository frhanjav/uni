// ew

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findPermutations(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str);
        return;
    }

    for (int i = start; i <= end; i++) {
        char temp = str[start];
        str[start] = str[i];
        str[i] = temp;

        findPermutations(str, start + 1, end);

        temp = str[start];
        str[start] = str[i];
        str[i] = temp; // backtrack
    }
}

int main() {
    char str[5];

    printf("Enter a 4-char string: ");
    scanf("%4s", str);

    // Convert to Uppercase
    for (int i = 0; i < 4; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Permutations of %s are:\n", str);
    findPermutations(str, 0, 3);

    return 0;
}