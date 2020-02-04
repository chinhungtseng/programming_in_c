/*
 * 15. Modify Program 7.14 so that the user is asked again to type in the value of 
 *     the base if an invalid base in entered. The modified program should continue
 *     to ask for the value of the base until a valid response in given.
 */

#include <stdio.h>

void scalarMultiply (int nRows, int nCols, 
  int matrix[nRows][nCols], 
  int scalar)
{
  int row, col;
  
  for (row = 0; row < nRows; ++row)
    for (col = 0; col < nCols; ++col)
      matrix[row][col] *= scalar;
}

void displayMatrix (int nRows, int nCols, 
  int matrix[nRows][nCols])
{
  int row, col;
  
  for (row = 0; row < nRows; ++row)
  {
    for (col = 0; col < nCols; ++col)
      printf("%4i", matrix[row][col]);
    
    printf("\n");
  }
}

void setMatrixValues (int nRows, int nCols, 
  int matrix[nRows][nCols])
{
  int rows, cols, temp;
  for (rows = 0; rows < nRows; ++rows)
    for (cols = 0; cols < nCols; ++cols) 
    {
      printf("Set [%i, %i] = ", rows + 1, cols + 1);
      scanf("%i", &temp);
      matrix[rows][cols] = temp;
    }
}

int main (void)
{
  int rows, cols, nRow, nCol, temp, scalar;
  
  // dimension of matrix
  printf("Input matrix row and column numbers: ");
  scanf("%i %i", &nRow, &nCol);
  
  int sampleMatrix[nRow][nCol];
  setMatrixValues(nRow, nCol, sampleMatrix);
  
  printf("\nOrigin Matrix: \n");
  displayMatrix(nRow, nCol, sampleMatrix);
  
  printf("Input a scalar number: ");
  scanf("%i", &scalar);
  scalarMultiply(nRow, nCol, sampleMatrix, scalar);
  
  printf("\nMultiply by %i:\n", scalar);
  displayMatrix(nRow, nCol, sampleMatrix);
  
  return 0;
}
