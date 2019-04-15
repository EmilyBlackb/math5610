# Solver: Square Linear System with Lower Triangular Coefficient Matrix

**Routine Name:**           Uptriagsolut

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will compute the solution of a square linear system of equations where the coefficient matrix is lower triangular of the form Ax = b.

**Input:** This routine takes a square lower triangular matrix and a vector (A n by 1 matrix).

**Output:** This routine returns the solution the the square linear system.

**Usage/Example:**

The routine has two arguments needed to return the solution vector: An lower triangular matrix that is square (A) and a vector (b).

      srand(time(NULL));
      
      Matrix b(3,1), x(3,1), A(3,3);
      rfillm(b);
      rfillm(A);
      UpperT(A);  //This creates a random upper triangular square matrix in A. 
                  //See Software manual page for Upper and lower Triangular matrix
      x = Uptriagsolut(A,b);
      x.printm();

Output from the lines above:

      0.0767095
      1.30043
      0.405389

**Implementation/Code:** The following is the code for Uptriagsolut()

    //upper triangular Solution


    #include "matrixstruct.hpp"
    #include "ranmatrix.cpp"

    #ifndef Uptriagsolut_H
    #define Uptriagsolut_H

     Matrix Uptriagsolut(Matrix A, Matrix b){
       Matrix x(A.columns, 1);
      for( int k = (A.rows-1); 0 <= k; k--){
          double S = 0.0;
          for (int j = (k+1); j < (A.rows); j++){
            S  = S + A.matrix[k][j]*x.matrix[j][0];
          } 
          x.matrix[k][0] = (b.matrix[k][0]- S)/A.matrix[k][k];
      }

      return x;
    }

    #endif

**Last Modified:** April/2019

