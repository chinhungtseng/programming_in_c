/*
 * 3. Program 6.2 permits only 20 responses to enterted.
 *    Modify that program so taht any numer of responses can be entered.
 *    So that the user does not have to count the number of responses 
 *    in the list, set up the program so that the value 999 cna be 
 *    keyed in by the user to indicate that the last response has been entered.
 *    (Hint: You cna use the break statement here if you wan tot exit your loop.)
 */

#include <stdio.h>

int main(void)
{
  int ratingCounters[11], i, response, numInput;
  
  for (i = 1; i <= 10; ++i)
    ratingCounters[i] = 0;
  
  printf("Enter the number of responses (1 to 999): ");
  scanf("%i", &numInput);
  
  if (numInput < 1 || numInput > 999)
  {
    printf("The number is out of valid range!\n");
    return 1;
  }
  
  printf("Enter your responses (1 to 10)/(exit: 999)\n");
  
  for (i = 1; i <= numInput; ++i)
  {
    printf("> response %3i: ", i);
    scanf("%i", &response);
    
    if (response == 999)
      break;
    else if (response < 1 || response > 10)
      printf(" * Bad response: %i\n", response);
    else 
      ++ratingCounters[response];
  }
  
  printf("\n\nRating    Number of Responses\n");
  printf("------    -------------------\n");
  
  for (i = 1; i <= 10; ++i)
    printf("%4i%14i\n", i, ratingCounters[i]);
  
  return 0;
}
