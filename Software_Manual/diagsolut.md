# Solver: Square Linear System with Diagonal Coefficient Matrix

**Routine Name:**           diagsolut

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will implement a method that will compute the solution of a square linear system of equations where the coefficient matrix is a diagonal matrix.

**Input:** This routine takes a Matrix and a vector ( n-by-1 matrix).

**Output:** This routine returns solution to the equation Ax=b  (x) where A is a square diagonal matrix, b is vector and x is a vector of unknowns.

**Usage/Example:**

The routine has two arguments needed to return the the solution to the linear system: An NxN matrix and a Nx1 Vector (created using matrix struct. 

      Matrix b(3,1), x(3,1), A(3,3);
      rfillm(b);
      rfillm(A);
      rdiagmatrix(A);    //this function creates a random diaonal matrix from a random matrix.
      x = diagsolut(A, b);

Output from the lines above:

      0.0539196
      0.51847
      0.0540669
      
The output are the entries for x vector we are trying to solve of the form Ax = b where b and A are known. 

**Implementation/Code:** The following is the code for diagsolut()

    //Square linear solver with diagonal matrix coefficient
    //Since the inverse of a diagonal matrix is the reciperical of each non-zero diagonal entries.
    //The solution will be A^-1 * B.

    #include "matrixstruct.hpp"
    #include "matrixmult.cpp"
    
    #ifndef randiagm_H
    #define randiagm_H
    
    //creates a diagonal matrix
    void rdiagmatrix(Matrix &A){  
        for (int row = 0; row < A.rows; row++ ){
            for (int col = 0; col < A.columns; col++){
                if (row != col) A.matrix[row][col] = 0;
            }
        }
       // A.printm();
    }
    #endif

    #ifndef Diaginv_H
    #define Diaginv_H

    // inverses a diagonal matrix 
    Matrix Diaginv(Matrix A){
        for (int row = 0; row < A.rows; row++ ){
            A.matrix[row][row] = 1.0/A.matrix[row][row];
        }
        //A.printm();
        return A;
    }
    #endif

    #ifndef Diagsolut_H
    #define Diagsolut_H

    Matrix diagsolut(Matrix A, Matrix b){
        Matrix x(A.rows,b.columns);
          A = Diaginv(A);
          x = mmult(A,b);
          x.printm();
          return x;
    }

    #endif

//references: https://stattrek.com/matrix-algebra/find-matrix-inverse.aspx
//references: https://www.khanacademy.org/math/precalculus/precalc-matrices/solving-equations-with-inverse-matrices/v/solving-matrix-equation

**Last Modified:** April/2019
