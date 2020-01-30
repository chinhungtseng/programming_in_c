/*
 * 8. Program 4.5 allows the user ot type in only five different numbers.
 * Modify that program so that the uesr can type in the number of triangular numbers to be calculated.
 * 
 */

#include <stdio.h>

int main(void)
{
  int n, number, triangularNumber, counter, counters;
  
  printf("How many times you want to calculate?");
  scanf("%i", &counters);
  
  for (counter = 1; counter <= counters; ++counter)
  {
    printf("What triangular number do you want? ");
    scanf("%i", &number);
    
    triangularNumber = 0;
    
    for (n = 1; n <= number; ++n)
    {
      triangularNumber += n;
    }
    printf("Triangular number %i is %i\n\n", number, triangularNumber);
  }
  
  return 0;
}
