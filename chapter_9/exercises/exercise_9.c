/*
 * 9. You can extend even further the usefulness of the replaceString() function
 *    from the preceeding exercise if you have it return a value that indicates 
 *    whether the replacement succeeded, which means that the string to be replaced
 *    was found inside the source string. So, if the function returns true fi the 
 *    replacement succeeds and false if it does not, the loop
 *    
 *    do
 *      stillFound = replaceString (text, " ", "");
 *    while (stillFound);
 *    
 *    could be used to remove all blank spaces from text, for example.
 *    Incorporate this change into the replaceString() function and try it with
 *    various character strings to ensure that it works properly.
 */


#include <stdio.h>

int main (void)
{
  void replaceString (char source[],  const char s1[],  const char s2[]);
  char text[81] = "1,2,3,4,5*6*7*8*9";
  
  replaceString (text, ",", " ");
  printf("%s\n", text);
  
  replaceString (text, "*", ",");
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
  
  do {
    removeString(source, index, nchar(s1));
    insertString(source, s2, index);
    
    index = findString(source, s1);
  } while (index != -1);

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
