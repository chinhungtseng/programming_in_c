/*
 * 5. Write a function called bit_test() that takes two arguments: an unsigned
 *    int and a bit number n. Have the function return 1 bit number n if it is
 *    on inside the word, and 0 if it is off. Assume that bit number 0 references
 *    the leftmost bit inside the integer. Also write a corresponding function 
 *    call bit_set() that takes two arguments: an unsigned int and a bit number n.
 *    Have the function return the result of turning bit n on inside the integer.
 */

#include <stdio.h>

int main (void)
{
  unsigned int bit_test (unsigned int value, int n);
  void bit_set (unsigned int * value, int n);
  void print_status (unsigned int value);
  
  unsigned int bits = 0;
  int          index = 1;
  
  print_status(bit_test(bits, index));
  
  bit_set(&bits, index);
  print_status(bit_test(bits, index));
  
  return 0;
}

unsigned int bit_test (unsigned int value, int n)
{
  unsigned int int_size (void);
  unsigned int bit, intSize = int_size();
  
  n %= intSize;
  bit = value >> (intSize - n) & 1;
  
  return bit;
}

void bit_set (unsigned int * value, int n)
{
  unsigned int int_size (void);
  unsigned int intSize = int_size();
  
  n %= intSize;
  *value |= 1 << (intSize - n);
}

void print_status (unsigned int value)
{
  if (value)
    printf("The bit is on\n");
  else 
    printf("The bit is off\n");
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