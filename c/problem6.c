//problem 6

// The sum of the squares of the first ten natural numbers is,
// 1^2 + 2^2 + ... + 10^2 = 385
// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)^2 = 552 = 3025

// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <stdio.h>
#include <math.h>


int main(void)
{
  int max = 100; // as specified above
  long sumOfSquares = 0;
  long squareOfSums = 0;
  int current;
  
  for(current = 1; current <= max; current++)
  {
      squareOfSums += current;
      sumOfSquares += pow(current, 2);
  }
  
  squareOfSums = pow(squareOfSums, 2);
  
  printf("The difference is: %d\n", squareOfSums - sumOfSquares); 
  
  return(0);
}