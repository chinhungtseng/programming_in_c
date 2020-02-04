/*
 * 12. A matrix M with i rows, j columns can be transposed into a matrix N having 
 *     j rows and i columns by simply setting the value of N(a,b) equal to the 
 *     value of M(b,a) for all relevant values of a and b.
 *     
 *     a. Wirte a function transposeMatrix() that takes as an argument a 4 x 5 matrix
 *        and a 5 x 4 matrix. Have the function transpose the 4 x 5 matrix and store 
 *        the results in the 5 x 4 matrix. Also write a main() routine to test the 
 *        funciton.
 *      
 *     b. Using variable-length arrays, rewrite the transposeMatrix() function 
 *        developed in exercise 12a to take the number of rows and columns as arguments,
 *        and to transpose the matrix of the specified dimenstions.
 */

#include <stdio.h>

void transposeMatrix (int nRows, int nCols, 
                      int M[nRows][nCols], 
                      int tM[nCols][nRows])
{
  int row, col;
  
  for (col = 0; col < nCols; ++col)
    for (row = 0; row < nRows; ++row)
      tM[col][row] = M[row][col];
}

void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols])
{
  int row, col;
  
  for (row = 0; row < nRows; ++row) 
  {
    for (col = 0; col < nCols; ++col)
      printf("%5i", matrix[row][col]);
    
    printf("\n");
  }
}

int main (void)
{
  int M[4][5] = 
    {
      {1, 2, 3, 4, 5},
      {2, 3, 4, 5, 6},
      {3, 4, 5, 6, 7},
      {4, 5, 6, 7, 8}
    };
  int N[5][4];
  
  transposeMatrix(4, 5, M, N);
  displayMatrix(5, 4, N);
  
  return 0;
}
