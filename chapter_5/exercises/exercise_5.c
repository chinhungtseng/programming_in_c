/*
 * 5. You developed Program 4.9 to reverse the digits of an integer
 *    typed in from the terminal. However, this program does not function
 *    well if you type in a negatiive number. find out waht happens in 
 *    such a case and then modify the program so that negative numbers 
 *    are correctly handled. For example, if th enumber -8645 is typed in,
 *    the output of the program should be 5468-.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int number, right_digit;
  bool isNegative = false;
  
  printf("Enter your number.\n");
  scanf("%i", &number);
  
  if (number < 0)
  {
    isNegative = true;
    number = -number;
  }
  
  do
  {
    right_digit = number % 10;
    printf("%i", right_digit);
    number /= 10;
  }
  while (number != 0);
  
  if (isNegative)
    printf("-");
  
  printf("\n");
  return 0;
}