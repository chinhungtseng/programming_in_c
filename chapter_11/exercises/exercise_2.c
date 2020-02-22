/*
 * 2. Write a program that determines whether your particular computer performs an 
 *    arithmetic or a logical right shift.
 */

#include <stdio.h>

int main (void)
{
  int n = -1;
  
  if (n >> 1 == -1)
    printf("arithmetic right shift\n");
  else 
    printf("logical right shift\n");
    
  return 0;
}
