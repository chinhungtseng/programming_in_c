/*
 * Program 10.13 Pointer Version of copyString()
 */

#include <stdio.h>

void copyString (char *to, char *from)
{
  for (; *from != '\0'; ++from, ++to)
    *to = *from;
  
  *to = '\0';
}

int main (void)
{
  void copyString (char *to, char *from);
  char string[] = "A string to be copied.";
  char string2[50];
  
  copyString(string2, string);
  printf("%s\n", string2);
  
  copyString(string2, "So is this.");
  printf("%s\n", string2);
  
  return 0;
}
