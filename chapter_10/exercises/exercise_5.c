/*
 * 5. A doubly linked list is a list in which each entry contains a pointer to the 
 *    preceding entry in the list as well as a pointer to the next entry in the 
 *    list. Define the appropriate structure definition for a doubly linked list
 *    entry and then write a small program that implements a small doubly linked 
 *    list and prints out the elements of the list.
 */

#include <stdio.h>

struct entry
{
  int          value;
  struct entry *next;
  struct entry *prev;
};

int main (void)
{
  struct entry n1, n2, n3, *list_pointer;
  
  list_pointer = &n1;
  
  n1.value = 100;
  n1.next =  &n2;
  n1.prev =  NULL;
  
  n2.value = 200;
  n2.next =  &n3;
  n2.prev =  &n1;
  
  n3.value = 300;
  n3.next =  NULL;
  n3.prev =  &n2;

  printf("%i\n", list_pointer->value);
  printf("%i\n", (list_pointer->next)->value);
  printf("%i\n", ((list_pointer->next)->prev)->value);
  
  return 0;
}
