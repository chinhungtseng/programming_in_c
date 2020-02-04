/*
 * 15. Modify Program 7.14 so that the user is asked again to type in the value of 
 *     the base if an invalid base in entered. The modified program should continue
 *     to ask for the value of the base until a valid response in given.
 *     
 *     It seem that this exercise is tend to modify program 7.15, not 7.14.
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
    printf("Number to be converted? ");
    scanf("%li", &numberToConvert);
    
    if (numberToConvert <= 0)
      printf("Bad number - must be positive number and not zero\n");
  } 
  while (numberToConvert <= 0);
  
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
  convertNumber();
  displayConvertedNumber();
  
  return 0;
}
