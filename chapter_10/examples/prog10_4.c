/*
 * Program 10.4 Using Pointers to Structrues
 * 
 * The first program that illustrated structures, was rewritten using the 
 * concept of structrue pointers.
 */

#include <stdio.h>

int main (void)
{
  struct date
  {
    int month;
    int day;
    int year;
  };
  
  struct date today, *datePtr;
  
  datePtr = &today;
  
  datePtr->month = 9;
  datePtr->day = 25;
  datePtr->year = 2015;
  
  printf("Today's date is %i/%i/%.2i.\n",
         datePtr->month, datePtr->day, datePtr->year % 100);
  
  return 0;
}
