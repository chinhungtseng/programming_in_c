/*
 * 7. Write a pointer version of the sort() function from Chapter 7, "Working with 
 *    Functions". Be certain that pointers are exclusively used by the function,
 *    including index variables in the loops.
 */

#include <stdio.h>

void sort (int *a, int n)
{
  int *i, *j, temp, * const arrayEnd = a + n;
  
  for (i = a; i < arrayEnd - 1; ++i)
    for (j = i + 1; j < arrayEnd; ++j)
      if (*i > *j) {
        temp = *i;
        *i = *j;
        *j = temp;
      }
}

void print_array (int *a, const int n)
{
  int *ptr, * const arrayEnd = a + n;
  
  for (ptr = a; ptr < arrayEnd; ++ ptr)
    printf("%i ", *ptr);
  
  printf("\n");
}

int main (void)
{
  int i; 
  int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                   44, -3, -9, 12, 17, 22, 6, 11};
  void sort(int a[], int n);
  void print_array (int *a, const int n);
  
  printf("The array before the sort:\n");
  print_array(array, 16);
  
  sort(array, 16);
  
  printf("\n\nThe array after the sort:\n");
  print_array(array, 16);
  
  return 0;
}