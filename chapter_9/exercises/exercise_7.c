/*
 * 7. Write a function called insertString() to insert one character string
 *    into another string. The arguments to the function should consist of
 *    the source string, the string to be inserted, and the position in the
 *    source string where the string is to be inserted. So, the call
 *    
 *    insertString (text, "per", 10);
 *    
 *    with text as originally defined in the previous exercise, results in 
 *    the character string "per" being inserted inside text, beginning at
 *    text[10]. Therefore, the character string "the wrong person" is stored
 *    inside the text array after the function returned.
 */

#include <stdio.h>

int main (void)
{
  void insertString (char s1[], const char s2[], int index);
  char text[81] = "the wrong son"; 
  
  insertString(text, "per", 10);
  
  printf("%s\n", text);
  return 0;
}

void insertString (char s1[], const char s2[], int index)
{
  int nchar (const char text[]);
  int s1Len = nchar(s1), s2Len = nchar(s2),
      maxLen, i, j = 0;
  
  if (index > s1Len)
    return;
  
  maxLen = s1Len + s2Len;
  
  for (i = s1Len + 1; i >= index ; --i)
    s1[i + s2Len] = s1[i];
  
  for (i = index, j = 0; j < s2Len; ++i, ++j)
    s1[i] = s2[j];
}

int nchar (const char text[])
{
  int i = 0;
  
  while (text[i] != '\0')
    ++i;
  
  return i;
}