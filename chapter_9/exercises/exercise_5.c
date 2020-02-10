/*
 * 5. Write a function called findString() to determine if one character
 *    string exists in another string. The first argument to the function 
 *    should be the character string that is to be searched and the second 
 *    argument is the string you are interested in finding. If the funciton 
 *    finds the specified string, have it return the location in the source
 *    string where the string was found. If the functino does not find the string,
 *    have it return -1. So, for example, the call
 *    
 *    index = findString("a chatterbox", "hat");
 *    
 *    searches the string "a chatterbox" for the string "hat".
 *    Because "hat" does exist inside the source string, the function
 *    return 3 to indicate the starting position inside the source string
 *    where "hat" was found.
 *    
 */

#include <stdio.h>
#include <stdbool.h>

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

int main (void)
{
  int findString (const char s1[], const char s2[]);
  int index;
  
  printf("Index is: %i\n", findString("a chatterbox", "hat"));
  printf("Index is: %i\n", findString("a chatterbox", "box"));
  printf("Index is: %i\n", findString("a chatterbox", "chatter"));
  printf("Index is: %i\n", findString("a chatterbox", "chapter"));
  printf("Index is: %i\n", findString("a chatterbox", "attack"));

  return 0;
}
