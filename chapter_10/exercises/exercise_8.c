/*
 * 8. Write a function called sort3() to sort three integers into ascending order.
 *    (This function is not to be implemented with arrays.)
 */

#include <stdio.h>

void sort3 (int *n1, int *n2, int *n3)
{
  void swap (int *a, int *b);
  
  if (*n1 > *n2)
    swap(n1, n2);
  if (*n1 > *n3)
    swap(n1, n3);
  if (*n2 > *n3)
    swap(n2, n3);
}

void swap (int *a, int *b)
{
  int temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
}

int main (void)
{
  void sort3 (int *n1, int *n2, int *n3);
  int a = 30, b = 10, c = 20;

  printf("Before sorting: a = %i, b = %i, c = %i\n", a, b, c);  
  
  sort3(&a, &b, &c);
  
  printf("After  sorting: a = %i, b = %i, c = %i\n", a, b, c);  
  
  return 0;
}
