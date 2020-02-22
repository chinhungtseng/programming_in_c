/*
 * 4. Using the result obtained in exercise 3, modify the rotate() function 
 *    from Program 11.4 so that it no longer makes ant assumptions about the 
 *    size of an int.
 */

#include <stdio.h>

int main (void)
{
  unsigned int rotate (unsigned int value, int n);
  unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
  
  printf("%x\n", rotate(w1, 8));
  printf("%x\n", rotate(w1, -16));
  printf("%x\n", rotate(w2, 4));
  printf("%x\n", rotate(w2, -2));
  printf("%x\n", rotate(w1, 0));
  printf("%x\n", rotate(w1, 44));
  
  return 0;
}

unsigned int rotate (unsigned int value, int n)
{
  unsigned int int_size (void);
  unsigned int result, intSize = int_size();
  
  // scale down the shift count to a defined range
  if (n > 0)
    n %= intSize;
  else
    n = -(n % intSize);
  
  if (n == 0)
    result = value;
  else if (n > 0) 
    result = value << n | value >> (intSize - n);
  else {
    n = -n;
    result = value >> n | value << (intSize - n);
  }
    
  return result;
}

unsigned int int_size (void)
{
  unsigned int bit_number = 0, bits = ~0;
  
  while (bits != 0) {
    bits >>= 1;
    ++bit_number;
  }
  
  return bit_number;
}
