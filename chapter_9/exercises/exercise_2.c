/*
 * 2. Why could you have replaced the while statement of the equalStirngs() 
 *    function of Program 9.4 with the statement 
 *    
 *    while ( s1[i] == s2[i] && s1[i] != '\0' )
 *    
 *    to achieve the same results?
 *    
 *    因在 while 迴圈的結果已確保兩個字串是相同的長度
 *    最後的條件判斷進行字串最後一個字元是否為 null character
 *    這樣足以判斷兩字串為相同字串
 *    
 */

#include <stdio.h>
#include <stdbool.h>

bool equalStrings (const char s1[], const char s2[])
{
  int i = 0;
  bool areEqual;
  
  while (s1[i] == s2[i] && s1[i] != '\0')
    ++i;
  
  if (s1[i] == '\0' && s2[i] == '\0')
    areEqual = true;
  else
    areEqual = false;
  
  return areEqual;
}

int main (void)
{
  bool equalStrings (const char s1[], const char s2[]);
  const char stra[] = "string comapre test";
  const char strb[] = "string";
  
  printf("%i\n", equalStrings(stra, strb));
  printf("%i\n", equalStrings(stra, stra));
  printf("%i\n", equalStrings(strb, "string"));
  
  return 0;
}