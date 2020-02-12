/*
 * 8. using the findString(), removeString(), and insertString() functions from
 *    preceding exercises, write a function called replaceString() that takes 
 *    three character string arguments as follows
 *    
 *    replaceString(source, s1, s2);
 *    
 *    and that replaces s1 inside source with the character string s2. The function
 *    should call the findString() function to locate s1 inside source, then
 *    call the removeString() function ot remove s1 from source, and finnaly all 
 *    the insertString() function to insert s2 into srouce at the proper location.
 *    So, the function call
 *    
 *    replaceString(text, "1", "one");
 *    
 *    replaces the first occurrence of the character string "1" inside the character 
 *    string text, if it exists, with the string "one". Similarly, the function call
 *    
 *    replaceString(text, "*", "");
 *    
 *    has the effect of removing the first astersk inside the text array because the
 *    replacement string is the null string.
 */

#include <stdio.h>

int main (void)
{
  void replaceString (char source[],  const char s1[],  const char s2[]);
  char text[81] = "1,2,3,4,5*6*7*8*9";
  
  replaceString (text, "1", "one");
  printf("%s\n", text);
  
  replaceString (text, "*", "");
  printf("%s\n", text);
  
  return 0;
}

void replaceString (char source[],  const char s1[],  const char s2[])
{
  int  findString (const char s1[], const char s2[]),
       nchar (const char string[]);
  void removeString (char string[], int index, int length),
       insertString (char s1[], const char s2[], int index);
  int  index;
  
  index = findString(source, s1);

  if (index == -1)
    return;
  
  removeString(source, index, nchar(s1));
  insertString(source, s2, index);
}

int findString (const char s1[], const char s2[])
{
  int i = 0, j = 0, k;
  
  while (s1[i] != '\0') {
    k = i;
    
    while ((s2[j] != '\0') && (s1[k] == s2[j])) {
      ++j;
      ++k;
    } 
    
    if (s2[j] == '\0')
      return i;
    
    ++i;
  }
  
  return -1;
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

int nchar (const char string[])
{
  int i = 0;
  
  while (string[i] != '\0') 
    ++i;
  
  return i;
}
