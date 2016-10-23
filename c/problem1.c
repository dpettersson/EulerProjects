
#include <stdio.h>
//Problem 1
//Find the sum of all the multiples of 3 or 5 below 1000.
//example The sum of the numers below 10 is 23 (3+5+6+9)

int problem1(int max)
{
   int i;
   int sum = 0;
   
   for(i = 1; i < max; i++)
   {
		if(!(i % 3) || !(i % 5))
		{
			sum += i;	
		}   
   }
   
   return(sum);
}



int main()
{
	int max = 10;
	
   printf("The sum of all numbers between 1 and %d is %d\n", max, problem1(max));
   
   max = 1000;
   printf("The sum of all numbers between 1 and %d is %d\n", max, problem1(max));

   return(0);
}



