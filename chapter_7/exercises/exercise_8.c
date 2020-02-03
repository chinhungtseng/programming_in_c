/*
 * 8. An equation of the form
 *    
 *    ax^2 + bx + c = 0
 *    
 *    is know as a quadratic equation. The values of a, b, c in the preceding 
 *    example represent constant values. So
 *    
 *    4x^2 - 17x - 15 = 0
 *    
 *    represents a quadratic equation where a = 4, b = -17, and c = -15.
 *    The values of x that satisfy a particular quadratic equation, 
 *    known as the roots of the equation, can be calcualted by substituting
 *    the values of a, b, and c into the following two formulas:
 *    
 *    x = ( -b ± sqrt(b^2 - 4ac) ) / 2a
 *    
 *    If the value of b^2 - 4ac, called the discriminant, is less than zero,
 *    the roots of the equation, x1 and x2, are imaginary numbers.
 *    
 *    Write a program to solve a quadratic equation. The program should allow
 *    the user to enter the values for a, b, and c. If the discriminant is 
 *    less than zero, a message should be displayed that the roots are imaginary;
 *    otherwise, the program should then proceed to calculate and display the 
 *    tow roots of the equation.
 *    (Note: Be certain to make use of the squareRoot() function that you 
 *    developed in this chapter.)
 *    
 *    Note:
 *    * What is discriminant? https://www.youtube.com/watch?v=BMLxzZAjQAs
 */

#include <stdio.h>

double absuloteValue (double x)
{
  if (x < 0)
    x = -x;
  
  return x;
}

double squareRoot (double x)
{
  const double epsilon = .00001;
  double       guess = 1.0;
  
  while (absuloteValue(guess * guess / x - 1) >= epsilon)
    guess = (x / guess + guess) / 2.0;
  
  return guess;
}

int discriminant (int a, int b, int c)
{
  return (b * b - (4 * a * c));
}

int main (void) 
{
  int    a, b, c, discriminantValue;
  double resultX1, resultX2;
  
  printf("Input a: ");
  scanf("%i", &a);
  
  printf("Input b: ");
  scanf("%i", &b);
  
  printf("Input c: ");
  scanf("%i", &c);
  
  discriminantValue = discriminant(a, b, c);
  
  if (discriminantValue < 0)
  {
    printf("The roots are imaginary!\n");
  } 
  else if (discriminantValue == 0)
  {
    resultX1 = (double) -b / (2 * a);
    printf("Eqution of root is: %f\n", resultX1);
  }
  else 
  {
    resultX1 = (double) (-b + discriminantValue) / (2 * a);
    resultX2 = (double) (-b - discriminantValue) / (2 * a);
    printf("Eqution of root is: %f and %f\n", resultX1, resultX2);
  }
  
  return 0;
}
