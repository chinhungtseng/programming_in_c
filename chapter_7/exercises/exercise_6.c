/*
 * 6. Modify Program 7.8 so that squareRoot() funciton accepts a double
 *    precision argument and returns the result as a double precision
 *    value. Be certain to change the value of the variable epsilon 
 *    to reflect the fact that double precision variables are now being 
 *    used.
 */

#include <stdio.h>

double absoluteValue (double x)
{
  if (x < 0)
    x = -x;
  
  return (x);
}

double squareRoot (double x)
{
  const double epsilon = .00001;
  double       guess = 1.0;
  
  while (absoluteValue(guess * guess - x) >= epsilon)
    guess = (x / guess + guess) / 2.0;
  
  return guess;
}

int main (void)
{
  printf("squareRoot(2.0) = %.12f\n", squareRoot(2.0));
  printf("squareRoot(144.0) = %.12f\n", squareRoot(144.0));
  printf("squareRoot(17.5) = %.12f\n", squareRoot(17.5));
  
  return 0;
}
