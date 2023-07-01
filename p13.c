// WAP to find factorial using recursion

#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long result = factorial(num);
        printf("Factorial of %d = %llu\n", num, result);
    }

    return 0;
}