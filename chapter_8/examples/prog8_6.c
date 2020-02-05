/*
 * Program 8.6 Illustrating Arrays of Structures
 * 
 * Program 8.6 sets up an array of time structures called testTimes.
 * The program then calls your timeUpdate function form Porgram 8.5.
 * In Program 8.6, an array called testTimes is defined to contain five
 * different time. The elements in this array are assigned initial values
 * that represent the times 11:59:59, 12:00:00, 1:29:59, 23:59:59, 
 * and 19:12:27, respectively.
 */

#include <stdio.h>

struct time
{
  int hour;
  int minutes;
  int seconds;
};

int main (void)
{
  struct time timeUpdate (struct time now);
  struct time testTimes[5] =
    { {11, 59, 59}, {12,  0,  0}, {1, 29, 59},
      {23, 59, 59}, {19, 12, 27} };
  int i;
  
  for (i = 0; i < 5; ++i)
  {
    printf("Time is %.2i:%.2i:%.2i", testTimes[i].hour,
      testTimes[i].minutes, testTimes[i].seconds);
    
    testTimes[i] = timeUpdate(testTimes[i]);
    
    printf("...one second later it's %.2i:%.2i:%.2i\n", 
      testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
  }
  
  return 0;
}

struct time timeUpdate (struct time now)
{
  ++now.seconds;
  
  if (now.seconds == 60)
  {
    now.seconds = 0;
    ++now.minutes;
    
    if (now.minutes == 60)
    {
      now.minutes = 0;
      ++now.hour;
      
      if (now.hour == 24)
        now.hour = 0;
    }
  }
  
  return now;
}
