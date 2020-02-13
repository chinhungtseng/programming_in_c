/*
 * 13. If c is a lowercase character, the expression
 * 
 *     c - 'a' + 'A'
 *     
 *     produces the uppercase equivalent of c, assuming an ASCII character set.
 *     Write a function called uppercase() that converts all lowercase characters
 *     in a string into their uppercase equvalents.
 *     
 */

#include <stdio.h>

void uppercase (char string[])
{
  int i;
  
  for (i = 0; string[i] != '\0'; ++i) {
    if ((string[i] >= 'a') && (string[i] <= 'z')) 
      string[i] = string[i] - 'a' + 'A';
  }
}

void readLine (char buffer[])
{
  char character;
  int  i = 0;
  
  do
  {
    character = getchar();
    buffer[i] = character;
    ++i;
  } 
  while (character != '\n');
  
  buffer[i - 1] = '\0';
}

int main (void)
{
  void uppercase (char string[]);
  void readLine (char buffer[]);
  char text[81];
  
  printf("Input  text: ");
  readLine(text);
  
  uppercase(text);
  
  printf("Output text: %s\n", text);
  return 0;
}
