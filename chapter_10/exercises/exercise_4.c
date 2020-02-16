/*
 * 4. Write a function called removeEntry() to remove an entry from a linked list.
 *    The sole argument to the precedure should be a pointer to the list. Have the 
 *    function remove the entry after the one pointed to by the argument. (Why can't
 *    you remove the entry ointed to by the argument?) You need to use the speccial 
 *    structure you set up in exercise 3 to handle the special case of removing the 
 *    first element from the list.
 */

#include <stdio.h>

struct entry
{
  int          value;
  struct entry *next;
};

void removeEntry (struct entry *listPtr)
{
  if (listPtr->next == NULL)
    return;
  
  listPtr->next = listPtr->next->next;
}

void printList (struct entry *listPtr)
{
  while (listPtr) {
    printf("%i ", listPtr->value);
    listPtr = listPtr->next;
  }
  
  printf("\n");
}

int main (void)
{
  void removeEntry (struct entry *listPtr);
  void printList (struct entry *listPtr);
  
  struct entry n1, n2, n3, n4;
  struct entry entryPtr = {0, &n1};
  
  n1.value = 100;
  n1.next =  &n2;
  
  n2.value = 200;
  n2.next =  &n3;
  
  n3.value = 300;
  n3.next =  &n4;
  
  n4.value = 400;
  n4.next =  (struct entry *) 0;
  
  while (entryPtr.next) {
    removeEntry(&entryPtr);
    printList(entryPtr.next);
  }

  return 0;
}
