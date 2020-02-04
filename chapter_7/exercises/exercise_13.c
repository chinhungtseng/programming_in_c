/*
 * 13. Modify the sort() function from Program 7.12 to take a third argument 
 *     indicating whether the array is to be sorted in ascending or descending
 *     order. Then modify the sort() algorithm to correctly sort the array 
 *     into the indicated order.
 */

#include <stdio.h>
#include <stdbool.h>

void sort(int a[], int n, bool desc)
{
  int i, j, temp;
  
  for (i = 0; i < n - 1; ++i)
    for (j = i + 1; j < n; ++j)
    {
      if (desc) 
      {
        if (a[i] < a[j])
        {
          temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
      else 
      {
        if (a[i] > a[j])
        {
          temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }
}

void displayArray (int a[], int n)
{
  for (int i = 0; i < n; ++i)
    printf("%i ", a[i]);
  
  printf("\n");
}

int main (void)
{
  int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                   44, -3, -9, 12, 17, 22, 6, 11};
  
  sort(array, 16, true);
  displayArray(array, 16);
  
  sort(array, 16, false);
  displayArray(array, 16);
  
  return 0;
}
