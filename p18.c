// WAP to store the first 100 prime numbers

#include<stdio.h>

int main()
{
  int i, num, count, primecount=0; 

  printf("First 100 Prime Numbers are: \n");
  for(num=2 ; primecount<100 ; num++)
  {
    count = 0;
    for (i = 2; i <= num/2; i++)
    {
	if(num%i == 0)
  	  count++;
    }
    if(count == 0)
    {
	printf(" %d ", num);
	primecount++;
    }  

  }
  printf("\n");
  return 0;
}