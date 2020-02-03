/*
 * 7. Write a function that raises an integer to a positive integer power.
 *    Call th function x_to_the_n() taking two integer arguments x and n.
 *    Have the function return a long int, which represents the results
 *    of calculating x^n.
 */

#include <stdio.h>

long int x_to_the_n(int x, int n)
{
  long int result;
  
  if (n == 0)
    result = 1;
  else 
    result = x * x_to_the_n(x, n - 1);
  
  return result;
}

int main (void)
{
  int number, n;
  
  printf("Enter a number: ");
  scanf("%i", &number);
  printf("and the power number? ");
  scanf("%i", &n);
  
  if (n < 0)
  {
    printf("The power number must be positive!\n");
    return 1;
  }
  
  printf("%li\n", x_to_the_n(number, n));
  
  return 0;
}
