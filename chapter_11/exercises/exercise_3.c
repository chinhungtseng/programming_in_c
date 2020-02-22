/*
 * 3. Given that the expression ~0 produces an integer that contains all 1s,
 *    write a function called int_size() that returns the number of bits 
 *    contained in an int on your particular machine.
 */

#include <stdio.h>

unsigned int int_size (void)
{
  unsigned int bit_length = 0, bits = ~0;
  
  while (bits != 0) {
    bits >>= 1;
    ++bit_length;
  }
    
  return bit_length;
}

int main (void)
{
  unsigned int int_size (void);
  
  printf("The integer size on your machine is %i bits.\n", int_size());
}
