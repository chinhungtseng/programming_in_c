/*
 * Program 10.15 Using Pointers to Find the Length of a String
 */

// Function to count the characters in a string - Pointer version

#include <stdio.h>

int stringLength (const char *string)
{
  const char *cptr = string;
  
  while (*cptr)
    ++cptr;
  
  return cptr - string;
}

int main (void)
{
  int stringLength (const char *string);
  
  printf("%i  ", stringLength("stringLength text"));
  printf("%i  ", stringLength(""));
  printf("%i\n", stringLength("complete"));
  
  return 0;
}