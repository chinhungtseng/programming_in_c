/*
 * 8. Write a macro IS_DIGIT that gives a nonzero value if a character 
 *    is a digit '0' through '9'. Use this macro in the definition of 
 *    another macro IS_SPECIAL, which gives a nonzero result if a 
 *    character is a special character; that is, not alphabetic and 
 *    not a digit. Be certain to use the IS_ALPHABETIC macro developed
 *    in exercise 7.
 */

/*  Test if a character is a lowercase letter.  */
#define IS_LOWER_CASE(x) ((x) >= 'a' && (x) <= 'z')
/*  Test if a character is a uppercase letter.  */
#define IS_UPPER_CASE(x) ((x) >= 'A' && (x) <= 'Z')
/*  Test if a character is a alphabetic letter.  */
#define IS_ALPHABETIC(x) (IS_LOWER_CASE(x) || IS_UPPER_CASE(x))

/*  Ttest if a character is a digit number. */
#define IS_DIGIT(x) ((x) >= '0' && (x) <= '9')

/*  Test if a character is not alphabetic and not a digit.  */
#define IS_SPECIAL(x) (!(IS_ALPHABETIC(x) || IS_DIGIT(x)))

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
  char c;
  bool isSpecial;
  
  printf("Enter a single letter: ");
  scanf("%c", &c);
  
  isSpecial = IS_SPECIAL(c);
  
  if (isSpecial)
    printf("%c is a special letter\n", c);
  else
    printf("%c is not a special letter\n", c);
  
  return 0;
}
