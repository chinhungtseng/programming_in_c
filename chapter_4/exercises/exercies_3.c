/* 3. A triangular number can also be generated by the formula

      triangularNumber = n (n + 1) / 2

      for any integer value of n. For example, the 10th triangular number, 55, can be generated 
      by substituting 10 as the value for n in the preceding formula. Have the program 
      generates a table of triangular number betweeen 5 and 50 (that is, 5, 10, 15, ..., 50).
*/
#include <stdio.h>

int main(void)
{
    // print the header of the table
    printf("TABLE OF TRIANGULAR NUMBERS\n\n");

    printf(" n    Sum from 1 to n\n");
    printf("---   ---------------\n");

    for(int i = 1; i <= 50; i++)
    {
        if (i % 5 != 0)
	{
            continue;
	}
	printf(" %2i     %6i\n", i, i * (i + 1) / 2);
    }

    return 0;
}
