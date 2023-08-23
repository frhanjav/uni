// WAP that calculates permutations & combinations of a given N, R using separate functions

#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int permutations(int n, int r) {
    if (n < r)
        return 0;
    return factorial(n) / factorial(n - r);
}

int combinations(int n, int r) {
    if (n < r)
        return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Enter the value of R: ");
    scanf("%d", &r);

    int perm = permutations(n, r);
    int comb = combinations(n, r);

    printf("Permutations of %d and %d is %d\n", n, r, perm);
    printf("Combinations of %d and %d is %d\n", n, r, comb);

    return 0;
}