/*
 * 11. Extend the strToInt() function from Program 9.11 so that the first
 *     character of the string is a minus sign, the value that follows is 
 *     taken as a negetive number.
 */

#include <stdio.h>

int strToInt (const char string[])
{
  int i = 0, intValue, result = 0;
  
  if (string[0] == '-')
    ++i;
  
  for (; string[i] >= '0' && string[i] <= '9'; ++i) {
    intValue = string[i] - '0';
    result = result * 10 + intValue;
  }
  
  if (string[0] == '-')
    result = -result;
  
  return result;
}

int main (void)
{
  int strToInt (const char string[]);
  
  printf("%i\n", strToInt("-245"));
  printf("%i\n", strToInt("100") + 25);
  printf("%i\n", strToInt("13x5"));
  
  return 0;
}