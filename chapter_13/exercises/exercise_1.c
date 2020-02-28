/*
 * 1. Define a type FunctionPtr() (using typedef) that represents a 
 *    pointer to a function that return an int and that takes no 
 *    arguments. Refer to Chapter 10, "Pointers", for the details 
 *    on how to declare a variable of this type.
 */

#include <stdio.h>

int myBirthday (void)
{
  return (0x12ff7a8);
}

typedef int (*FunctionPtr) (void);

int main (void)
{
  FunctionPtr mbd = myBirthday;
  printf("%i\n", mbd());
  
  return 0;
}

