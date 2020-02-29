/*
 * Program 15.4 Copying Characters from Standard Input to Strandard Output
 * 
 * Program to echo characters until an end of file
 * 
 * sample: ./prog15_4.c < infile    => display the contents of infile
 * 
 */

#include <stdio.h>

int main (void)
{
  int c;
  
  while ((c = getchar()) != EOF)
    putchar(c);
  
  return 0;
}
