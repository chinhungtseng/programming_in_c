/*
 * 9. Rewirte Programs 4.2 through 4.5, replacing all used of the for statement with equivalent while sstatements.
 * Run each program to verify that both versions are identical.
 */

#include <stdio.h>

int main(void)
{
  // 4.2
  printf("Program 4.2 -----------------\n");
  int n = 1;
  int triangularNumber = 0;
  while (n <= 200)
  {
    triangularNumber = triangularNumber + n;
    n += 1;
  }
  printf("The 200th triangular number is %i\n", triangularNumber);
  
  // 4.3
  printf("Program 4.3 -----------------\n");
  n = 1;
  triangularNumber = 0;
  
  printf("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf(" n    Sum from 1 to n\n");
  printf("---   ---------------\n");
  while (n <= 10)
  {
    triangularNumber += n;
    printf(" %i              %i\n", n, triangularNumber);
    n++;
  }
  
  // 4.4
  printf("Program 4.4 -----------------\n");
  
  n = 1;
  triangularNumber = 0;
  int number;
  
  printf("What tringular number do you want? ");
  scanf("%i", &number);
  
  while (n <= number) 
  {
    triangularNumber += n;
    ++n;
  }
  
  printf("TriangularNumber %i is %i\n", number, triangularNumber);
  
  // 4.5
  printf("Program 4.5 -----------------\n");
  
  n = 1;
  triangularNumber = 0;
  number = 0;
  int counter = 1;
  
  while (counter <= 5)
  {
    printf("What triangular number do you want? ");
    scanf("%i", &number);
    
    triangularNumber = 0;
    
    int n = 1;
    while (n <= number)
    {
      triangularNumber += n;
      ++n;
    }
    printf("Triangular number %i is %i\n\n", number, triangularNumber);
    ++counter;
  }
}