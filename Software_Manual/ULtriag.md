# Upper and Lower Triangular Matrix Maker

**Routine Name:**          UpperT  lowerT 

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.


**Description/Purpose:** This routine will take a square matrix filled using rfillm() and modifies it to be upper/lower triangular respectively.

**Input:** The input is a square random matrix

**Output:** This routine modifies the given matrix to upper/lower triangular respectively.

**Usage/Example:**

See Software Page for Solving a square linear system of equations where the coefficent matrix is upper triangular/lower triangular.

**Implementation/Code:** The following is the code for UpperT() 

    #include "matrixstruct.hpp"
    #include "ranmatrix.cpp"

    #ifndef uppertriag_H
    #define uppertriag_H
    //make A Upper triangular
    Matrix UpperT (Matrix A){
      for (int row = 0; row < A.rows; row++){
          for (int col = 0; col < A.columns; col++){
              if (col < row){
                A.matrix[row][col] = 0;
              }
          }
      }
      return A;
    }

    #endif

**Implementation/Code:** The following is the code for lowerT() 

    #include "matrixstruct.hpp"
    #include "ranmatrix.cpp"
    
    #ifndef lowertriag_H
    #define lowertriag_H
    //make A Lower triangular
    Matrix lowerT (Matrix A){
      for (int row = 0; row < A.rows; row++){
          for (int col = 0; col < A.columns; col++){
              if (row < col){
                A.matrix[row][col] = 0;
              }
          }
      }
      return A;
    }

     #endif
     
     
**Last Modified:** April/2019

