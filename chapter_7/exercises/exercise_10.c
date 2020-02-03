/*
 * 10. Write a function prime() that returns 1 if its argument is a prime 
 *     number and returns 0 otherwise.
 */

#include <stdio.h>

// Sieve of Eratosthenes Algorithm
int prime (int n)
{
  // define an array of integers P
  int i, j, isPrime, P[n + 1];
  
  // set array P value all 0
  for (i = 0; i <= n; ++i)
    P[i] = 0;
  
  // prime number testing 
  for (i = 2; i <= n; ++i)
    for (j = i; j * i <= n; ++j)
      P[i * j] = 1;
  
  // check that n is prime number
  isPrime = 0;
  for (i = 1; i <= n; ++i)
    if (P[i] == 0 && i == n)
      isPrime = 1;
    
  return isPrime;
}

int main (void)
{
  int number;
  
  printf("Number: ");
  scanf("%i", &number);

  if (prime(number) == 1)
    printf("%i is prime number\n", number);
  else 
    printf("%i is not prime number\n", number);
  
  return 0;
}
