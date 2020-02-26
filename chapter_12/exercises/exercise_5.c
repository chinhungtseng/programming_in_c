/*
 * 5. Write a macro SHIFT to perform the identical purpose as the 
 *    shift function of Program 11.3.
 */

#define shift(value, n) ((n) > 0 ? ((value) << (n)) : ((value) >> (-n)))

#include <stdio.h>

int main (void)
{
  unsigned int w1 = 0177777u, w2 = 0444u;
  
  printf("%o\t%o\n", shift(w1, 5), w1 << 5);
  printf("%o\t%o\n", shift(w1, -6), w1 >> 6);
  printf("%o\t%o\n", shift(w2, 0), w2 >> 0);
  printf("%o\n", shift(shift(w1, -3), 3));
  
  return 0;
}
