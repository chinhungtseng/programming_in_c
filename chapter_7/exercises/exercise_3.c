/*
 * 3. Modify Program 7.8 so that the value of guess is printed each time 
 *    through the while loop. Notice how quickly the value of guess converges 
 *    to the square root. What conclusions can you reach about the number of 
 *    iterations through the loop, the number whose square root is being 
 *    calculated, and the value of the initial guess?
 */

#include <stdio.h>

int main (void)
{
  float absoluteValue (float x);
  float squareRoot (float x, float epsilon);
  
  printf("squareRoot(2.0, .00001)   = %f\n", squareRoot(2.0, .00001));
  printf("squareRoot(2.0, .000001)  = %f\n", squareRoot(2.0, .000001));
  
  return 0;
}

float absoluteValue (float x)
{
  if (x < 0)
    x = -x;
  
  return x;
}

float squareRoot (float x, float epsilon)
{
  float guess = 1.0;
  
  while (absoluteValue(guess * guess - x) >= epsilon)
    guess = (x / guess + guess) / 2.0;
  
  return guess;
}
