/*
 * 7. Write a function called bitpat_get() to extract a specified set of bits.
 *    Have it take three arguments: the first an unsigned int, the second an 
 *    integer starting bit number, and the third a bit count. Using the convertion
 *    that bit numbering starts at 0 with the leftmost bit, extract the specified 
 *    number of bits from the first argument and return the result. So the call
 *    
 *      bitpat_get(x, 0, 3)
 *    
 *    extracts the three leftmost bits from x The call
 *    
 *      bitpat_get(x, 3, 5)
 *    
 *    extract five bits starting with the fourth bit in from the left.
 */

#include <stdio.h>

int main (void)
{
  unsigned int bitpat_get (unsigned int source, int begin, int length);
  void print_bit (unsigned int value);
  
  unsigned int a = 0xe1f4e1f4, b;
  
  print_bit(a);
  
  b = bitpat_get(a, 0, 3);
  print_bit(b);
  
  b = bitpat_get(a, 6, 7);
  print_bit(b);
  
  return 0;
}

unsigned int bitpat_get (unsigned int source, int begin, int length)
{
  unsigned int int_length (void);
  unsigned int shift, intSize = int_length();
  
  shift = (source << begin) >> (intSize - length);
  
  return shift;
}


void print_bit (unsigned int value)
{
  unsigned int int_length (void);
  unsigned int i, len = int_length();
  
  for (i = 0; i < len; ++i)
    printf("%u", (value << i) >> (len - 1));
  
  printf(" == %u\n", value);
}

unsigned int int_length (void)
{
  unsigned bits = ~0, bit_length = 0;
  
  while (bits != 0) {
    bits >>= 1;
    ++bit_length;
  }
  
  return bit_length;
}
