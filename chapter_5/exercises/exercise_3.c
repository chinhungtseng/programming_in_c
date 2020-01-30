/*
 * 3. Write a program that accepts two integer values typed in by the user.
 *    Display the result of dividing the first integer by th esecond, 
 *    to three-decimal-place accuracy.
 *    Rememnber to have the program check for devision by zero.
 */

#include <stdio.h>

int main(void)
{
  int value1, value2;
  
  printf("Type two numbers: \n");
  scanf("%i %i", &value1, &value2);
  
  if (value2 == 0)
    printf("Division by zero.\n");
  else 
    printf("%i divided by %i is %.3f\n", value1, value2, (float) value1 / value2);
  
  return 0;
}
