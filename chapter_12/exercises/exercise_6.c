/*
 * 6. Write a macro IS_UPPER_CASE that gives a nonzero value if a 
 *    character is an uppercase letter.
 */

#define IS_UPPER_CASE(x) ((x) >= 'A' && (x) <= 'Z')

#include <stdio.h>

int main (void) 
{
  const char c1 = 'A', c2 = 'b';
  
  printf("%s\n", IS_UPPER_CASE(c1) ? "TURE" : "FALSE");
  printf("%s\n", IS_UPPER_CASE(c2) ? "TURE" : "FALSE");
  
  return 0;
}