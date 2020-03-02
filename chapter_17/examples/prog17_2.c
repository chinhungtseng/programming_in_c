/*
 * Program 17.2 Compiling in Debug Code
 * 
 * example 1 -----------------------------------
 *  1) gcc -D DEBUG prog17_2.c -o prog17_2
 *  
 *  2) ./prog17_2 5 10
 *  
 *  3) processed 2 arguments
 *     arg1 = 5, arg2 = 10
 *     process (5, 10)
 *     return 50
 *     50
 * 
 * example 2 -----------------------------------
 *  1) gcc prog17_2.c -o prog17_2
 *  
 *  2) ./prog17_2 5 10
 *  
 *  3) 50
 *     
 */

#include <stdio.h>
#include <stdlib.h>

int process (int i1, int i2)
{
  int val;
#ifdef DEBUG
  fprintf(stderr, "process (%i, %i)\n", i1, i2);
#endif
  val = i1 * i2;
#ifdef DEBUG
  fprintf(stderr, "return %i\n", val);
#endif
  return val;
}

int main (int argc, char *argv[])
{
  int arg1 = 0, arg2 = 0;
  
  if (argc > 1)
    arg1 = atoi(argv[1]);
  if (argc == 3)
    arg2 = atoi(argv[2]);
  
#ifdef DEBUG
  fprintf(stderr, "processed %i arguments\n", argc - 1);
  fprintf(stderr, "arg1 = %i, arg2 = %i\n", arg1, arg2);
#endif
  
  printf("%i\n", process(arg1, arg2));
  
  return 0;
}
