/*
 * Program 11.3 Implementing a Shift Function
 */

// Function to shift an unsigned int left if the count 
// is positive, and right if negative

#include <stdio.h>

unsigned int shift (unsigned int value, int n)
{
  if (n > 0)
    value <<= n;  // left shift
  else 
    value >>= -n;  // right shift
  
  return value;
}

int main (void)
{
  unsigned int w1 = 0177777u, w2 = 0444u;
  unsigned int shift (unsigned int value, int n);
  
  printf("%o\t%o\n", shift(w1, 5), w1 << 5);
  printf("%o\t%o\n", shift(w1, -6), w1 >> 6);
  printf("%o\t%o\n", shift(w2, 0), w2 >> 0);
  printf("%o\n", shift(shift(w1, -3), 3));
  
  return 0;
}
