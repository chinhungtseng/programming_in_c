/*
 * Program 17.4 A Simple Program for Use with gdb
 * 
 * 1) gcc -g prog17_4.c -o prog17_4
 * 
 * 2) lldb prog17_4
 *    (lldb) target create "prog17_4"
 *    Current executable set to 'prog17_4' (x86_64).
 *    
 *    (lldb) run
 *    Process 21624 launched: '/Users/peter/Documents/Project/programming_in_c/chapter_17/examples/prog17_4' (x86_64)
 *    Process 21624 stopped
 *    * thread #1, queue = 'com.apple.main-thread', stop reason = EXC_BAD_ACCESS (code=2, address=0x10010c000)
 *      frame #0: 0x0000000100000f2b prog17_4`main at prog17_4.c:13:12
 *      10     int i, sum;
 *      11
 *      12     for (i = 0; i >= 0; ++i)
 *      -> 13       sum += data[i];
 *      14
 *      15     printf("sum = %i\n", sum);
 *      16
 *      Target 0: (prog17_4) stopped.
 *      
 *      (lldb) list 9
 *      9      const int data[5] = {1, 2, 3, 4, 5};
 *      10     int i, sum;
 *      11
 *      12     for (i = 0; i >= 0; ++i)
 *      13       sum += data[i];
 *      14
 *      15     printf("sum = %i\n", sum);
 *      16
 *      17     return 0;
 *      18   }
 *      
 *      (lldb) print sum
 *      (int) $0 = -2068004522
 *      
 *      (lldb) print i
 *      (int) $1 = 273436
 *      
 *      (lldb) print data
 *      (const int [5]) $2 = ([0] = 1, [1] = 2, [2] = 3, [3] = 4, [4] = 5)
 *      
 *      (lldb) quit
 * 
 */

#include <stdio.h>

int main (void)
{
  const int data[5] = {1, 2, 3, 4, 5};
  int i, sum;
  
  for (i = 0; i >= 0; ++i)
    sum += data[i];
  
  printf("sum = %i\n", sum);
  
  return 0;
}
