/*
 * 11. Write a program that calculates the sum of th edigits of an integer.
 * For example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.
 * The program should accept any arbitaary integer typed in by the user.
 */

#include <stdio.h>

int main(void)
{
  int number, digit_number, sum;
  
  printf("Enter a number: ");
  scanf("%i", &number);
  
  sum = 0;
  while (number != 0)
  {
    digit_number = number % 10;
    number /= 10;
    sum += digit_number;
  }
  printf("%i\n", sum);
  
  return 0;
}
