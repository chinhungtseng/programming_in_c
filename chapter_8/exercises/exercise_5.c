/*
 * 5. Write a function called clockKeeper() that takes as its argument a dateAneTime structrure
 *    as defined in this chapter. The function should call the timeUpdate() function,
 *    and if the time reached midnight, the function should call the dateUpdate function to 
 *    switch over to the nect day. Have the function return the updated dateAndTime structure.
 */

#include <stdio.h>
#include <stdbool.h>

struct dateAndTime
{
  struct date {
    int month;
    int day;
    int year;
  } sdate;
  
  struct time {
    int hour;
    int minutes;
    int seconds;
  } stime;
};

int main (void)
{
  struct dateAndTime clockKeeper (struct dateAndTime dt);
  struct dateAndTime dateTime;
  
  printf("Enter date and time (mm/dd/yyyy hh:mm:ss): ");
  scanf("%i/%i/%i %i:%i:%i",
    &dateTime.sdate.month, &dateTime.sdate.day, &dateTime.sdate.year,
    &dateTime.stime.hour, &dateTime.stime.minutes, &dateTime.stime.seconds);

  dateTime = clockKeeper(dateTime);
  printf("Now time is %i/%i/%i %.2i:%.2i:%.2i\n",
    dateTime.sdate.month, dateTime.sdate.day, dateTime.sdate.year,
    dateTime.stime.hour, dateTime.stime.minutes, dateTime.stime.seconds);
  
  return 0;
}

struct dateAndTime clockKeeper (struct dateAndTime dt)
{
  struct time timeUpdate (struct time t);
  struct date dateUpdate (struct date d);
  bool isTimeEnd (struct time t);
  struct time times;
  
  if (!isTimeEnd(dt.stime))
    dt.stime = timeUpdate(dt.stime);
  else {
    dt.sdate = dateUpdate(dt.sdate);
    dt.stime = (struct time){.hour = 0, .minutes = 0, .seconds = 0};
  }
  
  return dt;
}

struct time timeUpdate (struct time t)
{
  ++t.seconds;
  
  if (t.seconds == 60) {
    t.minutes += 1;
    t.seconds = 0;
    
    if (t.minutes == 60) {
      t.hour += 1;
      t.minutes = 0;
      
      if (t.hour == 24)
        t.hour = 0;
    }
  }
  
  return t;
}

bool isTimeEnd (struct time t) 
{
  bool timeEndFlag = false;
  
  if (t.hour == 23 && t.minutes == 59 && t.seconds == 59)
    timeEndFlag = true;
  
  return timeEndFlag;
}

struct date dateUpdate (struct date d)
{
  int numberOfDays (struct date d);
  struct date nextDay;
  
  if (d.day != numberOfDays(d))
    nextDay = (struct date) {.month = d.month, .day = d.day + 1, .year = d.year};
  else if (d.month == 12)
    nextDay = (struct date) {.month = 1, .day = d.day, .year = d.year + 1};
  else
    nextDay = (struct date) {.month = d.month + 1, .day = 1, .year = d.year};
  
  return nextDay;
}

// Function to find the number of days in a month
int numberOfDays (struct date d)
{
  int days;
  bool isLeapYear (struct date d);
  
  const int daysPerMonth[12] = 
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  if (isLeapYear(d) && d.month == 2)
    days = 29;
  else
    days = daysPerMonth[d.month - 1];
  
  return days;
}

// Function to determine if it's a leap year;
bool isLeapYear (struct date d)
{
  bool leapYearFlag;
  
  if ((d.year % 4 == 0 && d.year % 100 != 0) || 
              d.year % 400 == 0)
    leapYearFlag = true;
  else 
    leapYearFlag = false;
  
  return leapYearFlag;
}
