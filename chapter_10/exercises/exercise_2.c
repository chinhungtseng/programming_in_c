/*
 * 2. Write a function called insertEntry() to insert a new entry into a linked list.
 *    Have the procedure take as arguments a pointer to the list entry to be inserted
 *    (of type struct entry as defined in this chapter), and a pointer to an element 
 *    in the list after which the new entry is to be inserted.
 */

#include <stdio.h>

struct entry
{
  int          value;
  struct entry *next;
};

void insertEntry (struct entry *mainPtr, struct entry *newPtr)
{
  newPtr->next = mainPtr->next;
  mainPtr->next = newPtr;
}

void print_list (struct entry *pointer)
{
  while (pointer != (struct entry *) 0) {
    printf("%i  ", (pointer->value));
    pointer = pointer->next;
  }
  
  printf("\n");
}

int main (void)
{
  void insertEntry (struct entry *mainPtr, struct entry *newPtr),
       print_list (struct entry *pointer);
  struct entry n1, n2, n3, n4, *list_pointer = &n1;
  
  n1.value = 100;
  n1.next =  &n2;
  
  n2.value = 200;
  n2.next =  &n3;
  
  n3.value = 300;
  n3.next  = 0;   /* == (struct entry *) 0, null pointer */
  
  n4.value = 400;
  n4.next =  0;
  
  insertEntry(list_pointer, &n4);
  
  print_list (list_pointer);
  
  return 0;
}
