/*
 * 9. Rewrite the readLine() function from Chapter 9 so that it uses a character
 *    pointer rather than an array.
 */

#include <stdio.h>

int main (void)
{
  char line[81];
  void readLine (char *buffer);
  
  printf("Enter some words\n");
  readLine(line);
  
  printf("The word you type is: %s\n", line);
  
  return 0;
}

void readLine (char *buffer)
{
  char character;
  
  do
  {
    character = getchar();
    *buffer = character;
    ++buffer;
  } 
  while (character != '\n');
  
  *buffer = '\0';
}
