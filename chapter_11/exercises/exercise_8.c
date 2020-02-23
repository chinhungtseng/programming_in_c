/*
 * 8. Write a function called bitpat_set() to set a specified set of bits to 
 *    a particular value. The function should take four arguments: a pointer
 *    to an unsigned int in which the specified bits are to be set; another 
 *    unsigned int containing the value to which the specified bits are to be
 *    set, right adjusted in the unsigned int; a third int that specifies the 
 *    starting bit number (with the leftmost bit numbered 0); and a fourth
 *    int specifiying the size of the field. So the call
 *    
 *      bitpat_set(&x, 0, 2, 5);
 *    
 *    has the effect of seting the five bits contained in x, beginning with the 
 *    third bit from the left (bit number 2), to 0. Similayly, the call
 *    
 *      bitpat_set(&x, 0x55u, 0, 8);
 *    
 *    set the eight leftmost bits of x to hexadecimal 55.
 *    Make no assumptions about the particular size of an int (refer to exercise
 *    3 in this chapter).
 */

#include <stdio.h>

int main (void)
{
  void print_bit (unsigned int value);
  void bitpat_set (unsigned int * source, unsigned int value, 
                   unsigned int begin, unsigned int length);
  unsigned int a = 0, b = ~0;
  
  bitpat_set(&a, 0x55, 0, 8);
  print_bit(a);
  
  bitpat_set(&b, 0, 2, 5);
  print_bit(b);
  
  return 0;
}

void bitpat_set (unsigned int * source, unsigned int value, 
                 unsigned int begin, unsigned int length)
{
  unsigned int int_size (void);
  unsigned int i, intSize = int_size();
  
  // set the bits that will be replaced to zero
  for (i = 0; i < length; ++i)
    *source &= ~(1 << (intSize - (begin + 1) - i));
  
  *source |= (value << (intSize - begin - length));
}

void print_bit (unsigned int value)
{
  unsigned int int_size (void);
  unsigned int i, intSize = int_size();
  
  for (i = 0; i < intSize; ++i) 
    printf("%u", (value << i) >> (intSize - 1));
  
  printf("\n");
}

unsigned int int_size (void)
{
  unsigned int bits = ~0, bit_length = 0;
  
  while (bits != 0) {
    bits >>= 1;
    ++bit_length;
  }
  
  return bit_length;
}
