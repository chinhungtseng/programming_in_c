/*
 * 2. Write a function called monthName() that takes as its argument a value
 *    of type enum month (as defined in this chapter) and returns a pointer 
 *    to a character string containing the name of the month. In this way, 
 *    you can diplay the vlaue of an enum month valueable with a statement 
 *    such as: 
 *    
 *      printf("%s\n" monthName(aMonth));
 */

#include <stdio.h>

enum month {January = 1, February, March, April, May, June, 
            July, August, September, October, November, December};

char *monthName (enum month m)
{
  char *months [] = {"", "January", "February", "March", "April", "May", "June", 
            "July", "August", "September", "October", "November", "December"};
  return months[m];
}

int main (void)
{
  char *monthName (enum month m);
  enum month aMonth = 8;

  printf("%s\n", monthName(aMonth));
  
  return 0;
}
