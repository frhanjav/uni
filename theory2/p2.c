// WAP to do the above with a user defined function to store the array

#include <stdio.h>

int is_prime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void store_primes(int* arr, int size) {
    int num = 2; // Starting from 2, the first prime number
    int count = 0;

    while (count < size) {
        if (is_prime(num)) {
            *arr = num;
            arr++;
            count++;
        }
        num++;
    }
}

int main() {
    int prime_numbers[10];
    store_primes(prime_numbers, 10);

    // Printing the prime numbers stored in the array
    printf("First 10 prime numbers are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", prime_numbers[i]);
    }
    printf("\n");

    return 0;
}