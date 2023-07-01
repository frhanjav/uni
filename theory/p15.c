// WAP to calculate the Fibonacci series starting from any two user given values

#include<stdio.h>
 
int main() 
{
   int first, second, sum, n, counter = 0;
 
   printf("Enter the number of terms in the series other than the input : ");
   scanf("%d", &n);
 
   printf("\nEnter First Number : ");
   scanf("%d", &first);
 
   printf("\nEnter Second Number : ");
   scanf("%d", &second);
 
   printf("\nFibonacci Series : %d  %d  ", first, second);
 
   while (counter < n) {
      sum = first + second;
      printf("%d  ", sum);
      first = second;
      second = sum;
      counter++;
   }
    
   printf("\n");
   return (0);
}