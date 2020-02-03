/*
 * 9. The least common multiple (lcm) of two positive integer u and v if the
 *    smallest positive integer that is evenly divisible by both u and v.
 *    Thus, the lcm of 15 and 10, written lcm(15, 10), is 30 because 30 is the 
 *    smallest integer divisible by both 15 and 10. Write a function lcm() that
 *    takes two integer arguments and returns their lcm. The lcm() function 
 *    should calculate the least common multiple by calling the gcd() function
 *    from Program 7.6 in accordance with the following identity:
 *    
 *    lcm(u, v) = uv / gcd (u, v)      u, v >= 0
 */

#include <stdio.h>

// Greatest Common Divisor (gcd)
int gcd (int u, int v)
{
  int temp;
  
  while (v != 0)
  {
    temp = u % v;
    u = v;
    v = temp;
  }
  
  return u;
}

// Least Common Multiple (lcm)
int lcm (int u, int v)
{
  int lcmValue = u * v / gcd(u, v);
  return lcmValue;
}

int main (void)
{
  int u, v;
  
  printf("Enter two numbers: ");
  scanf("%i %i", &u, &v);
  
  if (u < 0 || v < 0)
  {
    printf("All value must be positive number!\n");
    return 1;
  }
  
  printf("The Least common multiple is %i\n\n", lcm(u, v));
  return 0;
}
