// WAP to print lowercase English alphabet

#include <stdio.h>

int main() 
{
    char ch;

    printf("Lowercase English alphabet:\n");

    for (ch = 'a'; ch <= 'z'; ch++) 
    {
        printf("%c ", ch);
    }

    printf("\n");

    return 0;
}