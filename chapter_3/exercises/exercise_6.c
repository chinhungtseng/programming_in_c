// 6. Write a program to evaluate the polynomial shown here
// 3x^3 - 5x^2 + 6
// for x = 2.55

#include <stdio.h>

int main(void)
{
    double x = 2.55;
    double y = 3 * x * x * x - 5 * x * x + 6;

    printf("Result is %f\n", y);
}
