/*
 * 2. Modify Program 6.1 so that the elements of the array values are
 *    initially set to 0. Use a for loop to perform the initializaition.
 */

#include <stdio.h>

int main(void) 
{
  int values[10];
  int index;
  
  for (int i = 0; i < 10; ++i)
    values[i] = 0;
  
  values[0] = 197;
  values[2] = -100;
  values[5] = 350;
  values[3] = values[0] + values[5];
  values[9] = values[5] / 10;
  --values[2];
  
  for (index = 0; index < 10; ++index)
    printf("values[%i] = %i\n", index, values[index]);
  
  return 0;
}
