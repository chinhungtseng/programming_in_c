/*
 * This program example shows the communication between different modules.
 * Here two modules are depicted, mod1.c and mod2.c.
 */

#include <stdio.h>

double x; /* can be accessed by any module that is linked together with 
             mod1.c */
static double result; /* can only be called from whithing mod1.c,
                         and by no other module. */

static void doSquare (void)
{
  /* square() is defined inside mod2.c */
  double square (void);
  
  x = 2.0;
  result = square();
}

int main (void)
{
  doSquare();
  printf("%g\n", result);
  
  return 0;
}