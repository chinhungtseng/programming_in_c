/* 4. The factorial of an integer n, written n!, is the prouct of the consecutive integers 1 through n.
      For example, 5 factorial is calculated as 

      5! = 5 * 4 * 3 * 2 * 1 = 120

      Write a program to generate and print a table of the first factorials.
*/

#include <stdio.h>

int factorial(int n)
{
    if (n <= 0)
        return 1;
    else
        return(n * factorial(n - 1));
}

int main(void)
{
    printf("THE TABLE OF FACTORIALS\n\n");
    printf(" n         n!\n");
    printf("---     -------\n");

    for (int i = 0; i < 10; i++)
    {
        printf(" %2i  %8i\n", i + 1, factorial(i + 1));
    }

    return 0;
}
