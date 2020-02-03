/*
 * 2. Modify Program 7.4 so the vlaue of triangularNumber is returned by 
 *    the functionl Then go back to Program 4.5 and change that program 
 *    so that it calls the new version of the calculateTriangularNumber() 
 *    funciton.
 */

#include <stdio.h>

int main (void)
{
  int number;
  int calculateTriangularNumber (int n);
  
  printf("What triangular number do you want? ");
  scanf("%i", &number);
  
  printf("Triangular number %i is %i\n\n", number, 
    calculateTriangularNumber(number));
  
  return 0;
}

int calculateTriangularNumber (int n)
{
  int i, triangularNumber = 0;
  
  for (i = 1; i <= n; ++i)
    triangularNumber += i;
  
  return triangularNumber;
}
