/*
 * 4. Write a program that calculate the average of an array of 
 *    10 floating-point values.
 */

#include <stdio.h>

int main(void)
{
  double number, mean, sum, values[10];
  
  // init value to zero
  for (int i = 0; i < 10; ++i)
  {
    values[i] = 0;
    
    printf("Enter number %2i: ", i + 1);
    scanf("%lf", &number);
    
    values[i] = number;
  }

  for (int i = 0; i < 10; ++i)
    sum += values[i];
  
  printf("The mean of all numbers is %.2lf\n", sum / 10);
  
  return 0;
}
