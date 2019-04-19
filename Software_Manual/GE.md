# Gaussian Elimination

**Routine Name:**           GE

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will solve a square linear system of equations using Gaussian Elimination (elementary row operations) to reduce the augmented coefficient matrix to row echelon form and then apply backsubstitution to determine an approximate solution for the linear system.

**Input:** This routine a square n by n matrix A and a vector b that is n by 1.

**Output:** This routine returns the solution vector to the square linear system of equations using Gaussian Elimination.

**Usage/Example:**

The routine has two arguments needed to return the square linear system of equations' solution: an n by n coefficient matrix and a n by 1 vector.

    srand(time(NULL));
      
    Matrix A(3,3), b(3,1), x(3,1);
    rfillm(A); rfillm(b);
    A.printm(); b.printm();
    x = GE(A,b);
    x.printm();

Output from the lines above:

      0.987568  0.39173  0.378383
      0.952537  0.882028  0.813872
      0.770239  0.935139  0.0986672

      0.636363
      0.533086
      0.237092

      0.701591
      -0.346422
      0.209306

The first block of code is the coefficient matrix A. The second block of code is the vector b. The last block of code is the solution vector.
**Implementation/Code:** The following is the code for GE()

    //Gaussian Elimination

    #include "matrixstruct.hpp"

    #include "ranmatrix.cpp"
    #include "rowech.cpp"
     #include "Uptriagsolut.cpp"

    #include "t.cpp"


    #ifndef GE_H
    #define GE_H

    Matrix GE(Matrix A, Matrix b){
        Matrix ret((A.columns+1), A.rows), re(A.rows, A.columns+1), bt(b.columns, b.rows);
        Matrix x(A.rows, 1);
        //row echelon form
        for (int c = 0; c < A.columns; c++){
            ret.matrix[c] = t(A).matrix[c];
        }
        ret.matrix[ret.rows-1] = t(b).matrix[0];
        re = t(ret);
        rowech(re);


        //new A 
        ret = t(re);
        for (int r = 0; r < A.rows; r++){
            A.matrix[r] = ret.matrix[r];
        }
        A = t(A);

        //new b
        bt.matrix[0] = ret.matrix[ret.rows-1];
        b = t(bt);

        //back solve
        x = Uptriagsolut(A,b);

     return x;
    }

    #endif

**Last Modified:** April/2019
