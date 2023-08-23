// WAP to find all the permutations of a n-digit number

#include <stdio.h>
#include <stdbool.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

bool hasRepeatingDigits(char *num, int start, int end) {
    for (int i = start; i < end; i++) {
        if (num[i] == num[end]) {
            return true;
        }
    }
    return false;
}

void findPermutations(char *num, int start, int end) {
    if (start == end && !hasRepeatingDigits(num, 0, end)) {
        printf("%s\n", num);
        return;
    }

    for (int i = start; i <= end; i++) {
        if (!hasRepeatingDigits(num, start, i)) {
            swap((num + start), (num + i));
            findPermutations(num, start + 1, end);
            swap((num + start), (num + i)); // backtrack
        }
    }
}

int main() {
    int n;
    printf("Enter the number of digits: ");
    scanf("%d", &n);

    char num[n + 1]; // Add 1 for the null terminator
    printf("Enter the %d-digit number: ", n);
    scanf("%s", num);

    printf("Permutations without repeating digits:\n");
    findPermutations(num, 0, n - 1);

    return 0;
}