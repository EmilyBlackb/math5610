# Symmetric Diagonally Dominant Matrix Generator

**Routine Name:**           SDD

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will generate a symmetric diagonally dominant matrix that has real values in all entries of the matrix.

**Input:** This routine takes a square matrix.

**Output:** This routine returns a symmetric diagonally dominant matrix.

**Usage/Example:**

The routine has 1 argument: a square matrix.

    srand(time(NULL));
    Matrix A(3,3);
    SDD(A);
    A.printm();

Output from the lines above:

      -2.71785e+09  -1.71379e+09  4.79181e+08
      -1.71379e+09  -3.05284e+09  -1.34543e+09
      4.79181e+08  -1.34543e+09  3.96562e+09
      
The output are the entries to the symmetric diagonally dominant matrix created using SDD() printed using A.printm().

**Implementation/Code:** The following is the code for SDD()

    //Symmetric diagonally dominant matrix

    #include "matrixstruct.hpp"
    #include "diagdom.cpp"


     #ifndef SDD_H
     #define SDD_H


    Matrix SDD(Matrix &A){
        diagdom(A);
        for(int row = 0; row < A.rows; row++){
            for(int col = row; col < A.columns; col++){
                if(A.matrix[row][col] < A.matrix[col][row]) A.matrix[col][row] = A.matrix[row][col];
                else A.matrix[row][col] = A.matrix[col][row];
            }
        }
    }

    #endif


**Last Modified:** April/2019
