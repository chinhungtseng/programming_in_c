/*
 * 7. Write a macro IS_ALPHABETIC that gives a nonzero value if a 
 *    character is an alphabetic charater. Have the macro use the 
 *    IS_LOWER-_ASE macro defined in the chapter text and the 
 *    IS_UPPER_CASE macro defined in exercise 6.
 */

/*  Test if a character is a lowercase letter.  */
#define IS_LOWER_CASE(x) ((x) >= 'a' && (x) <= 'z')

/*  Test if a character is a uppercase letter.  */
#define IS_UPPER_CASE(x) ((x) >= 'A' && (x) <= 'Z')

/*  Test if a character is a alphabetic letter.  */
#define IS_ALPHABETIC(x) (IS_LOWER_CASE(x) || IS_UPPER_CASE(x))

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
  char c;
  bool isAlpha;
  
  printf("Enter a single letter: ");
  scanf("%c", &c);
  
  isAlpha = IS_ALPHABETIC(c);
  
  if (isAlpha)
    printf("%c is an alphabetic letter\n", c);
  else
    printf("%c is not an alphabetic letter\n", c);
  
  return 0;
}
