/*
 * 4. Write a program that merges lines alternately from two files
 *    and writes the results to stdout. If one file has fewer lines
 *    than the other, the remaining lines from the larger file should
 *    simply be copied to stdout.
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  FILE *openFile (const char *file);
  char fileName1[64], fileName2[64], 
       buffer1[81], buffer2[81];
  FILE *file1, *file2;
  
  // get two files name from user
  printf("Enter first file name: ");
  scanf("%63s", fileName1);
  
  printf("Enter second file name: ");
  scanf("%63s", fileName2);
  
  // open two files
  file1 = openFile(fileName1);
  file2 = openFile(fileName2);
  
  // merges lines alternately from two files
  while ((fgets(buffer1, 80, file1)) != NULL && \
         (fgets(buffer2, 80, file2)) != NULL) {
    
    fprintf(stdout, "%s", buffer1);
    fprintf(stdout, "%s", buffer2);
  }
  
  while ((fgets(buffer1, 80, file1)) != NULL)
    fprintf(stdout, "%s", buffer1);
  
  while ((fgets(buffer2, 80, file2)) != NULL)
    fprintf(stdout, "%s", buffer2);
  
  // close open file
  fclose(file1);
  fclose(file2);
  
  return 0;
}

FILE *openFile (const char *file)
{
  FILE *inFile;
  
  if ((inFile = fopen(file, "r")) == NULL) {
    fprintf(stderr, "Can't open %s for reading.\n", file);
    exit(EXIT_FAILURE);
  }
  
  return inFile;
}