/*
 * 4. If you take the value of N as computed in exercise 2, subtract 621.049 from it,
 *    and then take that result modulo 7, you get a number from 0 to 6 that 
 *    represents the day of the week (Sunday through Saturday, respectively) on which
 *    the particular day fails. For example, the value of N computed for August 8, 2004,
 *    is 732,239 as derived previously.
 *    732,239 - 621,049 gives 111,190, and 111,190 % 7 give 2, indicating that this 
 *    date falls on a Tuesday.
 *    
 *    Use the function developed in the previous exercise to develop a program that 
 *    displays the day of the week on which a particular date falls. Make certain 
 *    that the program displays the day of the week in English (such as "Monday").
 *    
 */

#include <stdio.h>

struct date 
{
  int month;
  int day;
  int year;
};

struct week
{
  int numberOfWeek;
  char name[9];
};

int main (void)
{
  void theDayOfWeek (struct date d);
  struct date date1;
  
  printf("Enter start date (mm dd yyyy): ");
  scanf("%i%i%i", &date1.month, &date1.day, &date1.year);
  
  printf("The day of the week is ");
  theDayOfWeek(date1);
  
  return 0;
}

int parseDate (struct date d)
{
  int result;
  
  if (d.month <= 2) {
    d.year -= 1;
    d.month += 13;
  }
  else 
    d.month += 1;
  
  result = ((1461 * d.year) / 4) + ((153 * d.month) / 5) + d.day;
  
  return result;
}

void theDayOfWeek (struct date d)
{
  int parseDate (struct date d);
  
  int i;
  struct week weekDay;
  const struct week weeks[7] = 
    { {0, {'S', 'u', 'n', 'd', 'a', 'y'}}, 
      {1, {'M', 'o', 'n', 'd', 'a', 'y'}},
      {2, {'T', 'u', 'e', 's', 'd', 'a', 'y'}}, 
      {3, {'W', 'e', 'd', 'n', 'e', 's', 'd', 'a', 'y'}},
      {4, {'T', 'h', 'u', 'r', 's', 'd', 'a', 'y'}}, 
      {5, {'F', 'r', 'i', 'd', 'a', 'y'}},
      {6, {'S', 'a', 't', 'u', 'r', 'd', 'a', 'y'}} };
  
  weekDay = weeks[(parseDate(d) - 621049) % 7];
  
  for (i = 0; i < 9; ++i)
    printf("%c", weekDay.name[i]);
  
  printf("\n");
}
