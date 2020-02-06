/*
 * 2. In certain applications, particularly in the finacial area,
 *    it is often necessary to calculate the number of elapsed days 
 *    between two date. For example, the nubmer of days between July 2, 2015,
 *    and July 16, 2015, is obviously 14. But how many days are there between 
 *    August 8, 2015, and February 22, 2015? This calculation requires a bit more tought.
 *    
 *    Luckily, a formula can be used to calculate the number of days between two dates.
 *    This is affected by computing the value of N for each of the two dates and then
 *    taking the difference, where N is calculated as follows:
 *    
 *    N = 1461 x f(year, month) / 4 + 153 x g(month) / 5 + day
 *    where:
 *      f(year, month) = year - 1     if month <= 2
 *                       year         otherwise
 *      g(month) =       month + 13   if month <= 2
 *                       month + 1    otherwise
 *                       
 *    As an example of applying the formula, to calculate the number of days 
 *    between August 8, 2004, and February 22, 2005, you can calculate the values
 *    of N^1 and N^2 by substituting the appropriate values into the preceeding 
 *    formula as shown"
 *    
 *    N^1 = 1461 x f(2004, 8) / 4 + 153 x g(8) / 5 + 3
 *        = (1461 x 2004) / 4 + (153 x 9) / 5 + 3
 *        = 2,927,844 / 4 + 1,377 / 5 + 3
 *        = 731,961 + 275 + 3
 *        = 732,239
 *        
 *    N^2 = 1461 x f(2005, 2) / 4 + 153 x g(2) / 5 + 21
 *        = (1461 x 2004) / 4 + 2295 / 5 + 21
 *        = 731,961 + 459 + 21
 *        = 732,441
 *        
 *        Number of elapsed days = N^2 - N^1
 *                               = 732,441 - 732,239
 *                               = 202
 *    So the number of days between the two dates is shown to be 202.
 *    The preceding formula is applicable for any dates after March 1, 1900
 *    (1 must be added to N for dates from March 1, 1800, to February 28, 1800).
 *    
 *    Write a program that permits the user to type in two dates and then calculates 
 *    the number of elapsed days between the two date. Try to structure the program 
 *    logically into separate functions. For example, you should have a function that 
 *    accepts as an argument a date structure and returns the value of N computed as 
 *    shown previously. This funciton can then be called twice, one for each date,
 *    and the difference taken to determine the number of elapsed days.
 *                     
 */

#include <stdio.h>

struct date 
{
  int month;
  int day;
  int year;
};

int main (void)
{
  int timeDifference (struct date a, struct date b);
  struct date time1, time2;
  
  printf("Enter start date: ");
  scanf("%i%i%i", &time1.month, &time1.day, &time1.year);

  printf("Enter end date: ");
  scanf("%i%i%i", &time2.month, &time2.day, &time2.year);

  printf("Number of elapsed days is %i days.\n", 
    timeDifference(time1, time2));
  
  return 0;
}

int parseDate (struct date d)
{
  int N;

  if (d.month <= 2)
  {
    d.year -= 1;
    d.month += 13;
  }
  else 
    d.month += 1;

  N = (1461 * d.year / 4) + (153 * d.month / 5) + d.day;
  return N;
}

int timeDifference (struct date a, struct date b)
{
  int parseDate (struct date d);
  int diff;
  
  diff = parseDate(b) - parseDate(a);
  
  return diff;
}

