//problem 5
//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <stdio.h>

// All numbers can be divided by 1, so lets skip it. 
//All even numbers can be divided by 2, so we shouldn't have to check it (or any uneven numbers since they wont be divisable by 2)

int main(void)
{
   int maxDivisor = 20;
   int minDivisor = 3;
   int current = 20; // there is no need to check numbers that are smaller then the largest divisor.
   int currentDivisor;
   
   while(1)
   {
     ++current;
     for(currentDivisor = minDivisor; currentDivisor <= maxDivisor; currentDivisor += 1)
     {
	if(current % currentDivisor != 0)
	{
	  break;
	}
	
	if(currentDivisor == maxDivisor)
	{
	    printf("Evenly divisable number found: %d\n", current);
	    return(0);
	}
     } 
     
//     if(current % 10000 == 0)
//     {
//	printf("Current number is: %d\n", current);
//     }
   }
   return(1);
}


