/*
 * 2. Write a program that asks the user to type in 
 *    two integer values at the terminal.
 *    Test these two numbers to determine if the first is 
 *    evenly divisible by the second, and then display an 
 *    appropriate message at the terminal.
 */

#include <stdio.h>

int main(void)
{
  int a, b;
  
  printf("Type two integers: \n");
  scanf("%i %i", &a, &b);
  
  if (b != 0)
  {
    if (a % b == 0)
      printf("%i is devisible by %i.\n", a, b);
    else 
      printf("%i is not devisible by %i.\n", a, b);
  }
  else 
    printf("Second number can not be zero.\n");
  
  return 0;
}