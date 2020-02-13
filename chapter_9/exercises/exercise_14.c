/*
 * 14. Write a function called intToStr() that converts an integer value into
 *     a character string. Be certain the function handles negative integers
 *     peoperly.
 */

#include <stdio.h>
#include <stdbool.h>

void reverse (char s[])
{
  char tmp[81];
  int  i, j;
  
  for (i = 0; s[i] != '\0'; ++i)
    tmp[i] = s[i];
    
  for (--i, j = 0; i >= 0; --i, ++j) {
    s[j] = tmp[i];
  }
  s[j] = '\0';
}

void intToStr (char charValue[], int value)
{
  int  i = 0, number;
  bool isNegative = false;
  void reverse (char s[]);
  
  if (value < 0) {
    value = -value;
    isNegative = true;
  }
  
  while (value != 0) {
    number = value % 10;
    value /= 10;
    charValue[i] = number + '0';
    ++i;
  }
  
  if (isNegative)
    charValue[i] = '-';
  
  reverse(charValue);
  
  charValue[i + 1] = '\0';
}

int main (void)
{
  int  value;
  char charValue[81];
  void intToStr (char charValue[], int value);
  
  printf("Enter a value: ");
  scanf("%i", &value);
  
  intToStr(charValue, value);
  
  printf("%s\n", charValue);
  return 0;
}