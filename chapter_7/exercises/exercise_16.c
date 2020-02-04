/*
 * 16. Modify Porgram 7.14 so that the user can convert any number of integers.
 *     Make provision for the program to terminate when a zero is type in as the 
 *     value of the number to be converted.
 */

#include <stdio.h>

int      convertedNumber[64];
long int numberToConvert;
int      base;
int      digit = 0;

void getNumberAndBase (void)
{
  do
  {
    printf("Number to be converted(exit:0)? ");
    scanf("%li", &numberToConvert);
    
    if (numberToConvert == 0)
      return;
    else if (numberToConvert < 0)
      printf("Bad number - must be positive number\n");
  } 
  while (numberToConvert < 0);
  
  do
  {
    printf("Base? ");
    scanf("%i", &base);
    
    if (base < 2 || base > 16)
      printf("Bad base - must be between 2 and 16\n");
  } 
  while (base < 2 || base > 16);
}

void convertNumber (void)
{
  do
  {
    convertedNumber[digit] = numberToConvert % base;
    ++digit;
    numberToConvert /= base;
  } 
  while (numberToConvert != 0);
}

void displayConvertedNumber (void)
{
  const char baseDigits[16] = 
    {'0', '1', '2', '3', '4', '5', '6', '7',
      '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  int nextDigit;
  
  printf("Countered Number = ");
  
  for (--digit; digit >= 0; --digit) 
  {
    nextDigit = convertedNumber[digit];
    printf("%c", baseDigits[nextDigit]);
  }
  
  printf("\n");
}

int main (void)
{
  void getNumberAndBase (void), convertNumber (void),
  displayConvertedNumber (void);
  
  getNumberAndBase();
  
  if (numberToConvert == 0)
    return 1;
  
  convertNumber();
  displayConvertedNumber();
  
  return 0;
}
