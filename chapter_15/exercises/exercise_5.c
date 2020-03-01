/*
 * 5. Write a program that write columns m through n of each line of a file 
 *    to stdout. Have the program accept the values of m and n from the 
 *    terminal window.
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  void substr (char *string, int m, int n);
  char fileName[64], buffer[81];
  FILE *inFile;
  int  m, n;
  
  // get file name
  printf("Enter <file name> <column> <length>: ");
  scanf("%63s %i %i", fileName, &m, &n);

  // open file
  if ((inFile = fopen(fileName, "r")) == NULL) {
    fprintf(stderr, "Can't open %s for reading.\n", fileName);
    exit(EXIT_FAILURE);
  }
  
  while (fgets(buffer, 80, inFile) != NULL) {
    substr(buffer, m, n);
    fprintf(stdout, "%s", buffer);
  }
  
  // close file
  fclose(inFile);
  
  return 0;
}

void substr (char *string, int m, int n)
{
  // TODO
}

int stringLength (const char *string)
{
  const char *cptr = string;
  
  while (cptr)
    ++cptr;
  
  return string - cptr;
}
