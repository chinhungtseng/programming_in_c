/*
 * 11. Write a funciton called arraySum() that takes two arguments: an integer array
 *     and the number of elements in the array. Have the function return as its result 
 *     the sum of the elements in the array.
 */

#include <stdio.h>

int arraySum (int values[], int n)
{
  int i, sum = 0;
  
  for (i = 0; i < n; ++i)
    sum += values[i];
  
  return sum;
}

int main (void)
{
  // generate testing sample
  int values1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int values2[5] = {101, 202, 303, 505, 606};

  // output the result on terminal
  printf("Sum of values1 is %i\n", arraySum(values1, 10));
  printf("Sum of values2 is %i\n", arraySum(values2, 5));
  
  return 0;
}
