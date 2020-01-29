/*
 * 10. What would happen if you typed a negative number into program 4.8? Try it and see.
 */


// Program to reverse the digits of a number
#include <stdio.h>

int main(void)
{
  int number, right_digit;
  
  printf("Enter your number. \n");
  scanf("%i", &number);
  
  while (number != 0)
  {
    right_digit = number % 10;

    printf("%-2i", right_digit);
    number /= 10;
  }
  
  printf("\n");
  
  return 0;
}
