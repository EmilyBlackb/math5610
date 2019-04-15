# Solver: Square Linear System with Lower Triangular Coefficient Matrix

**Routine Name:**           Lowtriagsolut

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will compute the solution of a square linear system of equations where the coefficient matrix is lower triangular of the form Ax = b.

**Input:** This routine takes a square lower triangular matrix and a vector (A n by 1 matrix).

**Output:** This routine returns the solution the the square linear system.

**Usage/Example:**

The routine has two arguments needed to return the solution vector: A lower triangular matrix that is square (A) and a vector (b).

      srand(time(NULL));
      
      Matrix b(3,1), x(3,1), A(3,3);
      rfillm(b);
      rfillm(A);
      lowerT(A);              //changes matrix A to a lower Triangular matrix - 
                              //See Upper and Lower Triangular Matrix maker software page
      A.printm();             //prints the matrix A
      b.printm();             //prints the vector b
      x = Lowtriagsolut(A,b);  //computes the solution to the linear system and stores it in x.
      x.printm();             //prints the solution to the linear system

Output from the lines above:

        0.856328  0  0
        0.434573  0.438409  0
        0.0286676  0.248653  0.884801

        0.99732
        0.330596
        0.941712

        1.16465
        -0.400373
        1.1391

The first block of results is the Lower Triangular coefficent matrix used. The second block is the vector b used. The final block is the solution to the square linear system system for the given lower triangular coefficent matrix and vector b.

**Implementation/Code:** The following is the code for Lowtriagsolut()

//lower triangular Solution


#include "matrixstruct.hpp"
#include "ranmatrix.cpp"

#ifndef Lowtriagsolut_H
#define Lowtriagsolut_H

 Matrix Lowtriagsolut(Matrix A, Matrix b){
   Matrix x(A.columns, 1);
  for( int k = 0; k < A.rows ; k++){
      double S = 0.0;
      for (int j = 0; j < k; j++){
        S  = S + A.matrix[k][j]*x.matrix[j][0];
      } 
      x.matrix[k][0] = (b.matrix[k][0]- S)/A.matrix[k][k];
  }
            
  return x;
}

#endif

**Last Modified:** April/2019

