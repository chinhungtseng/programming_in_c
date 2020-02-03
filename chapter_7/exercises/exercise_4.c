/*
 * 4. Modify Program 7.8 so that the value of guess is printed each time through
 *    the while loop. Notice how quickly the value of guess converges to the 
 *    square root. What concludsions can you reach about the umber of iterations 
 *    through the loop, the number whose square root is being calculated, 
 *    and the value of the initial guess?
 */

#include <stdio.h>

int main (void)
{
  float absoluteValue (float x);
  float squareRoot (float x);
  
  printf("squareRoot(2.0) = %f\n", squareRoot(2.0));
  printf("squareRoot(144.0) = %f\n", squareRoot(144.0));
  printf("squareRoot(17.5) = %f\n", squareRoot(17.5));
  
  return 0;
}

float absoluteValue (float x)
{
  if (x < 0)
    x = -x;
  
  return x;
}

float squareRoot (float x)
{
  const float epsilon = .00001;
  float       guess   = 1.0;
  int         counter = 1;
  
  while (absoluteValue(guess * guess - x) >= epsilon)
  {
    guess = (x / guess + guess) / 2.0;
    printf("* Try %i times, and guess number now is: %f\n", counter, guess);
    ++counter;
  }
  
  return guess;
}
