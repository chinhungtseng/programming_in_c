/*
 * 6. Write a program that displays the contents of a file at the terminal
 *    20 lines at a time. At the end of each 20 lines, have the program 
 *    wait for a character to be entered from the terminal. If the character
 *    is the letter q, the program should stop the display of the file;
 *    any other character should cause the next 20 lines from the file to
 *    be displayed.
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  char fileName[64], buffer[101];
  FILE *inFile;
  int  i = 0;
  
  // get file name from user
  printf("Enter file name: ");
  scanf("%63s", fileName);
  
  // open file
  if ((inFile = fopen(fileName, "r")) == NULL) {
    fprintf(stderr, "Can't open file %s.\n", fileName);
    exit(EXIT_FAILURE);
  }
  
  while (!feof(inFile) && getchar() != 'q' ) {
    for (i = 0; i < 20; ++i) {
      fgets(buffer, 100, inFile);
      fprintf(stdout, "%s", buffer);
    }
  }
  
  // close file
  fclose(inFile);
  
  return 0;
}
