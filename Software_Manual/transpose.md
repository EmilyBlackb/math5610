# Transpose function

**Routine Name:**           t

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will transpose a given matrix or vector (created from matrix struct)

**Input:** This routine takes in 1 matrix.

**Output:** This routine returns the the transpose of that matrix

**Usage/Example:**

The routine has needs a matrix to return the matrix transpose.

    srand(time(NULL));
  
    Matrix  A(3,3);
    rfillm(A);
    A.printm();
    A = t(A);
    A.printm();

Output from the lines above:

    0.937437  0.591578  0.766484
    0.256987  0.558116  0.440838
    0.565793  0.0326564  0.419009

    0.937437  0.256987  0.565793
    0.591578  0.558116  0.0326564
    0.766484  0.440838  0.419009
  
First block of output is A and the second block of output is A transposed.

**Implementation/Code:** The following is the code for onenormabsv()

    //Matrix Transpose

    #include "matrixstruct.hpp"

    #ifndef transpose_H
    #define transpose_H

    void t(Matrix &A){
      Matrix T(A.columns, A.rows);
      for (int i = 0; i < A.rows; i++){
        for (int j = 0; j < A.columns; j++){
            T.matrix[j][i] = A.matrix[i][j] ;
        }
      }
    }

    #endif

**Last Modified:** April/2019
