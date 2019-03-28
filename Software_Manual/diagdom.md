# Diagonal Dominant Matrix Maker

**Routine Name:**           diagdom

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.


**Description/Purpose:** This routine will generate a diagonally dominant matrix that has real values in all entries of the matrix.
**Input:** This routine takes a square matrix.

**Output:** This routine returns a random sauare diagonally dominant matrix.

**Usage/Example:**

The routine has one argument needed to return the 1-norm value.

      srand(time(NULL));
      Matrix z(3,3);   

      diagdom(z);  //fills the entries of Matrix Z with random elements such that z is diagonally dominant
      z.printm();  //prints the entries of matrix z

Output from the lines above:

      2.52667e+09  4.79857e+08  1.71788e+09
      1.83909e+09  -3.22475e+09  -4.18457e+08
      -1.34043e+09  -2.14637e+09  -4.92645e+09

The output is the entries to matrix z where z is diagonally dominant.

**Implementation/Code:** The following is the code for diagdom()

    //Diag Dominant Matrix Maker
    #include "matrixstruct.hpp"
    #include "ranmatrix.cpp"
    #include "onenormabsv.cpp"

    using namespace std;

    #ifndef diagdom_H
    #define diagdom_H

    Matrix diagdom(Matrix &A){
        if (A.rows == A.columns){
            for(int row = 0; row < A.rows; row++){
                for(int col = 0; col < A.columns; col++){
                    A.matrix[row][col] = rand();
                    int r = rand();
                    if (r % 2 == 1) A.matrix[row][col] = -1.0*A.matrix[row][col];  
                }
            }
            Matrix w(1,A.columns);
            for(int i = 0; i < A.rows; i++){
                w.matrix[0] = A.matrix[i];
                A.matrix[i][i] = onenormv(w);
                int r = rand();
                if (r % 2 == 1) A.matrix[i][i] = -1.0*A.matrix[i][i];
            }
        }
        else cout << "Matrix is not square.\n";
    }

    #endif



**Last Modified:** March/2019
