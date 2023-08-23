// WAP to store the first 10 prime numbers in an array via a pointer

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

int main() {
    int prime_numbers[10];
    int count = 0;
    int num = 2; // Starting from 2, the first prime number
    int *ptr = prime_numbers;

    while (count < 10) {
        if (is_prime(num)) {
            *ptr = num;
            ptr++;
            count++;
        }
        num++;
    }

    // Printing the prime numbers stored in the array
    printf("First 10 prime numbers are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", prime_numbers[i]);
    }
    printf("\n");

    return 0;
}