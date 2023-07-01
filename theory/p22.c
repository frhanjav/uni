// WAP to find GCD of two user-given numbers

#include <stdio.h>

int main()
{
    int n1, n2;
    
   printf("Enter First Number : ");
   scanf("%d", &n1);
 
   printf("Enter Second Number : ");
   scanf("%d", &n2);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d \n",n1);
    return 0;
}