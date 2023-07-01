// WAP that will take 3 user-given numbers and print the highest one

#include <stdio.h>

int main() 
{
    int numbers[3];
    int i;

    printf("Enter three numbers:\n");

    for (i = 0; i < 3; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int highest = numbers[0];

    for (i = 1; i < 3; i++) {
        if (numbers[i] > highest) {
            highest = numbers[i];
        }
    }

    printf("The highest number is: %d\n", highest);

    return 0;
}