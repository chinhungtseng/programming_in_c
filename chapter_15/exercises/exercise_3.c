/*
 * 3. Write a program to copy one file to another, replacing all lowercase
 *    characters with their uppercase equivalents.
 */

#define IS_LOWERCASE(x) ((x) >= 'a' && (x) <= 'z')
#include <stdio.h>

int toUpper (int c)
{
  if (IS_LOWERCASE(c))
    c -= ('a' - 'A');
  
  return c;
}

int main (void)
{
  char inName[64], outName[64];
  FILE *in, *out;
  int  c;
  
  // get file name from user
  printf("Enter name of file to be copied: ");
  scanf("%63s", inName);
  printf("Enter name of output file: ");
  scanf("%63s", outName);
  
  // open input and output file
  if ((in = fopen(inName, "r")) == NULL) {
    printf("Can't open %s for reading.\n", inName);
    return 1;
  }
  
  if ((out = fopen(outName, "w")) == NULL) {
    printf("Can't open %s for writting.\n", outName);
    return 2;
  }
  
  // copy in to out
  while ((c = getc(in)) != EOF)
    putc(toUpper(c), out);
  
  // close open file
  fclose(in);
  fclose(out);
  
  printf("File has been copied.\n");
  
  return 0;
}
