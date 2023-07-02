// Write a program to find the L.C.M of two user inputted numbers

#include <stdio.h>

int main()  
{  
    int num1, num2, max_div;  

    printf("Enter the first number: ");
    scanf("%d", &num1);  

    printf("Enter the second number: ");
    scanf("%d", &num2);  
      
    // max_div variable holds the max divisible number between num1 and num2.  
    max_div = (num1 > num2) ? num1 : num2;  
      
    while (1) 
    {  
        if (max_div % num1 == 0 && max_div % num2 == 0)  
        {  
            printf( " The LCM of %d and %d is %d.\n", num1, num2, max_div);  
            break;  
        }  
        ++max_div;
    }

    return 0;
}  