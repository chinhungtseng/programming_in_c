/*
 * 3. Write a function lapsed_time that takes as its arguments two time structures
 *    and returns a time structure that represents the elapsed time (in hours, minutes,
 *    and seconds) between the two times. So the call 
 *    
 *    elapsed_time (time1, time2)
 *    
 *    where time1 represents 3:45:12 and time2 represents 9:44:03, should return 
 *    a time structure that represents 5 hours, 58 minutes, and 48 seconds.
 *    Becareful with times that cross midnight.
 */

#include <stdio.h>
#include <stdbool.h>

struct time 
{
  int hours;
  int minutes;
  int seconds;
};

int main (void)
{
  struct time elapsed_time (struct time time1, struct time time2);
  bool isValidTime (struct time t);
  struct time time1, time2, diffTime;
  
  printf("Enter start time (hh:mm:ss): ");
  scanf("%i:%i:%i", &time1.hours, &time1.minutes, &time1.seconds);
  
  printf("Enter end time (hh:mm:ss): ");
  scanf("%i:%i:%i", &time2.hours, &time2.minutes, &time2.seconds);
  
  if (!(isValidTime(time1) && isValidTime(time2)))
  {
    printf("Invalide time format!\n");
    return 1;
  }
  
  diffTime = elapsed_time(time1, time2);
  printf("The elapsed time is: %.2i:%.2i:%.2i\n", diffTime.hours, 
                              diffTime.minutes, diffTime.seconds);
  
  return 0;
}

struct time elapsed_time (struct time time1, struct time time2)
{
  struct time diffTime;

  diffTime.hours   = time2.hours   - time1.hours;
  diffTime.minutes = time2.minutes - time1.minutes;
  diffTime.seconds = time2.seconds - time1.seconds;
  
  while (diffTime.hours < 0 || diffTime.minutes < 0 || diffTime.seconds < 0) 
  {
    if (diffTime.hours < 0)
    {
      diffTime.hours += 24;
    }
    else if (diffTime.minutes < 0)
    {
      diffTime.hours -= 1;
      diffTime.minutes += 60;
    } 
    else if (diffTime.seconds < 0)
    {
      diffTime.minutes -= 1;
      diffTime.seconds += 60;
    }
  }

  return diffTime;
}

bool isValidTime (struct time t)
{
  bool validTimeFlag = true;
  
  if (t.hours > 23 || t.hours < 0)
    validTimeFlag = false;
  else if (t.minutes > 60 || t.minutes < 0)
    validTimeFlag = false;
  else if (t.seconds > 60 || t.seconds < 0)
    validTimeFlag = false;
  
  return validTimeFlag;
}
