/*
 * 11. Test the system libraray functions that are equivalent to the macros
 *     you developed in the preceding three exercises. The libraray functions
 *     are called isupper, isalpha, and isdigit. You need to include the 
 *     system header file <ctype.h> in your program in order to use them.
 */

#include <stdio.h>
#include <ctype.h>

int main (void)
{
  char c;
  
  printf("Enter a letter: ");
  scanf("%c", &c);
  
  printf("%c is upper letter? %s\n", c, isupper(c) ? "TRUE" : "FALSE");
  printf("%c is alpha letter? %s\n", c, isalpha(c) ? "TRUE" : "FALSE");
  printf("%c is digit number? %s\n", c, isdigit(c) ? "TRUE" : "FALSE");
  
  return 0;
}
