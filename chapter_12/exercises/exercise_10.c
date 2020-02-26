/*
 * 10. Consider the definition of the printint macro from this chapter:
 *      
 *      #define printint(n) printf("%i\n", x ## n)
 *      
 *     Could the following be used to display the values of the 100 
 *     variables x1-x100? Why or why not?
 *     
 *      for (i = 1; i < 100; ++i)
 *        printx(i);
 *     
 *     Answer: No.
 *      1) printx() function is not defined.
 *          for (i = 1; i < 100; ++i)
 *            printint(i);
 *         
 *      2) the for loop only excute 99 times, so can't display x1-x100 values
 *           for (i = 1; i <= 100; ++i)
 *            printf(i);
 *            
 *      3) preprocessor performs a literal text substittion
 *         so printint(i); is expanded to 
 *            printf("%i\n", xi);
 *         in 100 times iterattion, producing the incorrect result.
 */

#define printint(n) printf("%i\n", x ## n)

#include <stdio.h>

int main (void)
{
  int i, x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5,
         x6 = 6, x7 = 7, x8 = 8, x9 = 9, x10 = 10;
  
  for (i = 1; i < 10; ++i)
    printint(i);
  
  return 0;
}
