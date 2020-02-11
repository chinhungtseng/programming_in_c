/*
 * 6. Write a function called removeString() to remove a specified number of 
 *    characters from a character string. The function should take three 
 *    arguments: the source string, the starting index number in the source
 *    string, and the number of characters to remove. So, if the character 
 *    array text contains the string "the wrong son", the call
 *    
 *    removeString(text, 4, 6)
 *    
 *    has the effect of removing the characters "wrong" (the word "wrong" plus
 *    the space that follows) from the array text. The resuting string inside
 *    text is then "the son".
 */

#include <stdio.h>

int main (void)
{
  void removeString (char string[], int index, int length);
  char string[] = "the wrong son";
  
  removeString(string, 4, 6);
  printf("%s\n", string);

  return 0;
}

void removeString (char string[], int index, int length)
{
  int nchar (const char string[]);
  int start, end = index + length, 
      maxLen = nchar(string);
  
  for (start = index; end < maxLen; ++start, ++end)
    string[start] = string[end];
  
  string[start] = '\0';
}

int nchar (const char string[])
{
  int i = 0;
  
  while (string[i] != '\0') 
    ++i;
  
  return i;
}
