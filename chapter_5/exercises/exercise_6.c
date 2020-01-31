/*
 * 6. Write a program that takes an integer keyed in from the terminal 
 *    and extracts and displays each digit of the integer in English.
 *    So, if the user types in 932, the program should display
 *    
 *    nine three two
 *    
 *    Remember to desplay "zero" if the user types in just a 0.
 *    (Note: this exercise is a hard one!)
 */

#include <stdio.h>

int main(void) 
{
  int number, test_number, right_digit;
  int rev_number = 0;
  
  printf("Enter your number: ");
  scanf("%i", &number);
  
  if (number == 0)
    printf("zero\n");
  else 
  {
    // reverse the input number
    while (number != 0)
    {
      right_digit = number % 10;
      rev_number = rev_number * 10 + right_digit;
      number /= 10;
    }
    
    // show each number in terminal
    while (rev_number != 0)
    {
      right_digit = rev_number % 10;
      rev_number /= 10;
      
      switch (right_digit)
      {
        case 0:
          printf("zero");
          break;
        case 1:
          printf("one");
          break;
        case 2:
          printf("two");
          break;
        case 3:
          printf("three");
          break;
        case 4:
          printf("four");
          break;
        case 5:
          printf("five");
          break;
        case 6:
          printf("six");
          break;
        case 7:
          printf("seven");
          break;
        case 8:
          printf("eight");
          break;
        case 9:
          printf("nine");
          break;
      }
      printf(" ");
    }
    printf("\n");
  }
  
  return 0;
}
