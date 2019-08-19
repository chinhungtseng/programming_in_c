// 8. To round off an iteger i to the next largest even multiple of another integer j,
//    th efollowing formula can be used:
//    Next_multiple = i + j - i % j
//    
//    For example, to round off 256 days to the next largest number of days evenly divisible by a week,
//    value of i = 256 and j = 7 can be subsitituted into the preceding formula as follows:
//    Nect_multiple = 256 + 7 - 256 % 7
//                  = 256 + 7 - 4
//                  = 259

#include <stdio.h>

int main(void)
{
    int i = 256;
    int j = 7;
    int Next_multiple = i + j - i % j;
    printf("%i\n", Next_multiple);
}
