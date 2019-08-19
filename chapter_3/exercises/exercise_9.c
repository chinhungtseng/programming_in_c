// 9 Write a program to find the next largest even multiple for the following values of i and j:

#include <stdio.h>

int main(void)
{
    int i, j;

    // i = 365, j = 7
    i = 365;
    j = 7;
    printf("%i + %i = %i\n", i, j, i + j - i % j);

    // i = 12258, j = 23
    i = 12258;
    j = 23;
    printf("%i + %i = %i\n", i, j, i + j - i % j);
    
    // i = 996, j = 4
    i = 996;
    j = 4;
    printf("%i + %i = %i\n", i, j, i + j - i % j);

    return 0;
}
