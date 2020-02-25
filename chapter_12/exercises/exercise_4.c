/*
 * 4. Define a macro MAX3 that gives the maximum of three values.
 *    Write a program to test the definition.
 */

/*  Get the miximum of three values  */
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MAX3(a, b, c) (MAX((MAX(a, b)), (c)))

#include <stdio.h>

int main (void)
{
  int a = 1, b = 2, c = 3;
  
  printf("The maximum value of %i, %i and %i is %i.\n",
         a, b, c, MAX3(a, b, c));
  printf("The maximum value of %i, %i and %i is %i.\n",
    a + c, b * 5, c, MAX3(a + c, b * 5, c));
  
  return 0;
}
