/*
 * Program 10.11 Working with Pointers to Arrays
 */

// Function to sum the elements of an integer array

#include <stdio.h>

int arraySum (int array[], const int n)
{
  int sum = 0, *ptr;
  int * const arrayEnd = array + n;
  
  for (ptr = array; ptr < arrayEnd; ++ptr)
    sum += *ptr;
  
  return sum;
}

int main (void)
{
  int arraySum (int array[], const int n);
  int value[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
  
  printf("The sum is %i\n", arraySum(value, 10));
  
  return 0;
}
