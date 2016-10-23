//problem 4
//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

#include <stdio.h>

int isPalindrome(int num)
{
   int original = num;
   int reversed = 0;
   int remainder = 0;
   
   while(num != 0)
   {
      remainder = num % 10;
      reversed = reversed * 10 + remainder;
      num /= 10;
   }

   if(original == reversed)
   {
      return(1);
   }

   return(0);
}




int main(void)
{
   int max = 999;
   int largest = 0;
   int min = 100; //set to 9 for 2 digit numbers and 99 for 3 digits.
   int num1 = max; // start at 999 for 3 digit numbers
   int num2 = max;
   int current;


   while(num2 > min)
   {

      while(num1 > min)
      {
         current = num1 * num2;  
         
         if(isPalindrome(current))
         {
            if(current > largest)
            {  
               largest = current;
            }
         }
         --num1;
      }
      num1 = max;  
      --num2;
   }
   
   if(largest == 0)
   {
      printf("No palindrome found\n");
   }
   else
   {
      printf("The largest palindrome was %d\n", largest);
   }

   return(1);
}


