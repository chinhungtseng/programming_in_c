// 2. Write a program to generate and display a table of n and n^2, for integer values of n ranging from 1 to 10.
//    Be certain to print appropriate column headings.

#include <stdio.h>

int main(void)
{
    printf("Table of square of n\n\n");
    printf("  n      square of n\n");
    printf("-----   -------------\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("  %2i      %4i\n", i, i * i);
    }

    return 0;
}
