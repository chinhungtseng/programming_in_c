/*
 * 9. Write a macro ABSOLUTE_VALUE that computes the absolute value of 
 *    its argument. Make certain that an expression such as 
 *      
 *      ABSOLUTE_VALUE(x + delta)
 *    
 *    is properly evaluated by the macro.
 */

#define ABSOLUTE_VALUE(x) ((x) < 0 ? -(x) : (x))

#include <stdio.h>

int main (void)
{
  int a = 1, b = -3;
  
  printf("%i\n", ABSOLUTE_VALUE(a));
  printf("%i\n", ABSOLUTE_VALUE(b));
  printf("%i\n", ABSOLUTE_VALUE(a + b));
  
  return 0;
}