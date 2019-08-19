// 7. Write a program that evaluates the following expresstion and displays the results 
// (remember to use exponential format to diaplay the result):
// (3.31 * 10^-8 * 2.01 * 10^-7) / (7.16 * 10^-6 + 2.01 * 10^-8)

#include <stdio.h>

int main(void)
{
    printf("%lf\n", (3.31 * 1e8 * 2.01 * 1e-7) / (7.16 * 1e-6 + 2.01 * 1e-8));
}
