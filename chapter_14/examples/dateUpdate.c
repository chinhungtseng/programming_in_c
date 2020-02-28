// Rewritten version of the dateUpdate function from Chapter 8.

#include "date.h"

// Function to calculate tomorrow's date
Date dateUpdate (Date today)
{
  Date tomorrow;
  
  if (today.day != numberOfDays(today))
    setDate(tomorrow, today.month, today.day + 1, today.year);
  else if (today.month == December)
    setDate(tomorrow, January, 1, today.year + 1);
  else
    setDate(tomorrow, today.month + 1, 1 , today.year);
  
  return tomorrow;
}
