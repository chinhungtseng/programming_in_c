/*
 * 6. Develop insertEntry() and removeEntry() functions for a doubly linked list
 *    that are similar in function to those developed in previous exercises for 
 *    a singly linked list. Why can your removeEntry() function now take as its
 *    argument a direct pointer to the entry to be removed from the list?
 */

#include <stdio.h>

struct entry
{
  int          value;
  struct entry *next;
  struct entry *prev;
};

struct entry n1, n2, n3, n5, *list_pointer = &n1;

void print_list (struct entry *ptrList)
{
  while (ptrList != NULL) {
    printf("%i  ", ptrList->value);
    ptrList = ptrList->next;
  }
  
  printf("\n");
}

void insertEntry (struct entry *ptrNew)
{
  ptrNew->next = list_pointer;
  ptrNew->prev = NULL;
  list_pointer->prev = ptrNew;
  list_pointer = ptrNew;
}

void removeEntry (struct entry *ptrDest)
{
  if (list_pointer->next != NULL) {
    list_pointer = list_pointer->next;
    list_pointer->prev = NULL;
  }
  else {
    list_pointer = NULL;
  }
}

int main (void)
{
  void print_list (struct entry *ptrList),
       insertEntry (struct entry *ptrNew),
       removeEntry (struct entry *ptrDest);
  
  n1.value = 101;
  n1.next =  &n2;
  n1.prev =  NULL;
  
  n2.value = 202;
  n2.next =  &n3;
  n2.prev =  &n1;
  
  n3.value = 303;
  n3.next =  NULL;
  n3.prev =  &n2;
  
  n5.value = 505;
  n5.next =  NULL;
  n5.prev =  NULL;
  
  insertEntry(&n5);
  print_list(list_pointer);
  
  removeEntry(list_pointer);
  print_list(list_pointer);
  
  return 0;
}
