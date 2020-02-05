/*
 * Program 8.7 Illustrating Strurctures and Arrays
 * 
 * Program 8.7 illustrates the months array. Its purpose is simply to set up the 
 * initial values inside the array and then display these values at the terminal.
 * It might be easier for you to conceptualize the notation that is used to 
 * reference particular elements of the months arrays as defined in the program 
 * by examining Figure 8.3
 */

#include <stdio.h>

int main (void)
{
  int i;
  
  struct month
  {
    int  numberOfDays;
    char name[3];
  };
  
  const struct month months[12] = 
    { { 31, {'J', 'a', 'n'} }, { 28, {'F', 'e', 'b'} },
      { 31, {'M', 'a', 'r'} }, { 30, {'A', 'p', 'r'} },
      { 31, {'M', 'a', 'y'} }, { 30, {'J', 'u', 'n'} },
      { 31, {'J', 'u', 'l'} }, { 31, {'A', 'u', 'g'} },
      { 30, {'S', 'e', 'p'} }, { 31, {'O', 'c', 't'} },
      { 30, {'N', 'o', 'v'} }, { 31, {'D', 'e', 'c'} } };
  
  printf("Month     Number of Days\n");
  printf("-----     --------------\n");
  
  for (i = 0; i < 12; ++i)
    printf(" %c%c%c          %i\n",
      months[i].name[0], months[i].name[1], 
      months[i].name[2], months[i].numberOfDays);
  
  return 0;
}
