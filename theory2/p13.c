// WAP that copies one string into another

#include <stdio.h>

int main() {
    char s1[1000];
    char s2[1000];
    
    printf("Enter any string: ");
    fgets(s1, sizeof(s1), stdin);
    
    int i;
    for (i = 0; s1[i] != '\0'; i++) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
   
    printf("Original string = %s \n", s1);
    printf("Copied string = %s \n", s2);
   
    return 0;
}