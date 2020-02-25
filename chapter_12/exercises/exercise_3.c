/*
 * 3. Define a macro MIN that gives the minimum of two values.
 *    Then write a porgram to test the macro definition.
 */

/*  get minimum value  */
#define MIN(a, b) ((a) < (b) ? (a) : (b))

#include <stdio.h>

int main (void)
{
  int a = 5, b = 10, c = 15, d = 20;
  
  printf("The minimum of two values %i and %i is %i.\n", 
        a, b, MIN(a, b));
  printf("The minimum of two values %i and %i is %i.\n", 
        c, d, MIN(c, d));
  
  return 0;
}
