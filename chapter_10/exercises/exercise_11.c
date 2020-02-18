/*
 * 11. Given the definition of a date structure as defined in this chapter, 
 *     write a function called dateUpdate() that takes a pointer to a date
 *     structure as its argument and that updates the structure to the 
 *     following day (see Program 8.4).
 */

#include <stdio.h>
#include <stdbool.h>

struct date
{
  int month;
  int day;
  int year;
};

int main (void)
{
  void dateUpdate (struct date *day);
  struct date thisDay;
  
  printf("Enter today's date (mm dd yyyy): ");
  scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);
  
  dateUpdate(&thisDay);
  
  printf("Tomorrow's date is %i/%i/%.2i.\n", thisDay.month, 
    thisDay.day, thisDay.year % 100);
  
  return 0;
}

void dateUpdate (struct date *day)
{
  int numberOfDays (struct date d);
  
  if (day->day != numberOfDays(*day))
    ++day->day;
  else if (day->month == 12) {
    day->day = 1;
    day->month = 1;
    ++day->year;
  }
  else {
    day->day = 1;
    ++day->month;
  }
}

// Function to find the number of days in a month
int numberOfDays (struct date d)
{
  int  days;
  bool isLeapYear (struct date d);
  const int dayPerMonth[12] = 
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  if (isLeapYear(d) && d.month == 2)
    days = 29;
  else 
    days = dayPerMonth[d.month - 1];
  
  return days;
}

// Function to determine if it's a leap year;
bool isLeapYear (struct date d)
{
  bool leapYearFlag;
  
  if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
    leapYearFlag = true;
  else 
    leapYearFlag = false;
  
  return leapYearFlag;
}
