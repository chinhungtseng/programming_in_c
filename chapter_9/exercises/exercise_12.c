/*
 * 12. Write a function called strToFloat() that converts a character string into
 *     a floating-point value. Have the function accept an optional leading minus
 *     sign. So, the call
 *     
 *     strToFloat ("-867.6921");
 *     
 *     should return the value -867.6921.
 */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
  float strToFloat (const char s[]);
  
  printf("%.4f\n", strToFloat("-867.6921"));
  printf("%.4f\n", strToFloat("1234.3210"));
  
  return 0;
}

float strToFloat (const char s[])
{
  int   i = 0, j = 0;
  bool  isPeriod = false;
  float floatValue, result = 0.0, result1 = 0.0;
  float power (float value, int n);
  
  if (s[0] == '-')
    ++i;
  
  for (; (s[i] >= '0' && s[i] <= '9') || s[i] == '.'; ++i) {
    if (s[i] == '.') {
      isPeriod = true;
      continue;
    }
    
    floatValue = (float) (s[i] - '0');
    
    if (!isPeriod) 
      result = result * 10 + floatValue;
    else {
      result1 = result1 + floatValue * power(0.1, j);
      ++j;
    }
  }
  
  if (s[0] == '-')
    return -(result + result1 / 10);
  else 
    return result + (result1 / 10);
}

float power (float value, int n)
{
  int   i;
  float result = value;
  
  if (n == 0)
    return 1;
  
  for (i = 1; i < n; ++i)
    result = result * value;
  
  return result;
}