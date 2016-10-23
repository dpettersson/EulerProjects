//Problem 3
//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

#include <stdio.h>
#include <math.h>


int isPrime(int num)
{
   int i = 3;

   //check for even numbers
   if((num % 2) == 0)
   {
      return(0);
   }

  while(i < num)
  {
     if(num % i == 0)
     {
         return(0);
     }
      i += 2;
  }
   return(1);
}



void findFactors(unsigned long long num)
{
   int i = sqrt(num);

   while(i > 1)
   {
      if(isPrime(i))
      {
         if(num % i == 0)
         {
            printf("prime divisor found: %d\n", i);
            return;
         }
      }
      --i;
   }
}



int main()
{
   //debug
  //findFactors(13195); // This shall yield 29
   findFactors(600851475143);

   return(0);
}

