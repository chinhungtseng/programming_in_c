/*
 * 6. you don't need ot use an array to gererate Fibonacci numbers.
 *    You cna simply use three variables: two to store the previous 
 *    two Fibonacci numbers and one to store the current one.
 *    Rewirte Program 6.3 so that arrays are not used.
 *    Because you're no longer using an array, you need to display 
 *    each Fibonacci numbers as you generate it.
 */

#include <stdio.h>

int main(void)
{
  int fib1 = 0, fib2 = 1, fib3;

  printf("%i ", fib1);
  printf("%i ", fib2);
  
  for (int i = 2; i < 15; i++)
  {
    fib3 = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib3;
    
    printf("%i ", fib3);
  }
  
  printf("\n");
  
  return 0;
}
