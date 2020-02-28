/*
 * This program example to illustrate the use of external variables.
 */

#include <stdio.h>

/*
 * The definition of the global variable i in the preceeding program
 * makes its value accessible by any module that uses an appropriate 
 * extern declaration.
 */
int i = 5;

int main (void)
{
  void foo (void);
  printf("%i\n", i);
  
  foo();
  
  printf("%i\n", i);
  
  return 0;
}