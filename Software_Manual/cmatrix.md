# Matrix Scalar Multiple

**Routine Name:**           cmatrix

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will 

**Input:** This routine takes a matrix and a scalar.

**Output:** This routine returns the scalar multiplication of the given matrix by the given scalar.

**Usage/Example:**

The routine has two arguments needed to return the scalar multiplication: a matrix and a scalar.

    #include "matrixstruct.hpp"
    #include "diagdom.cpp"
    #include "cmatrix.cpp"
    
    int main(){

        srand(time(NULL));
        Matrix z(3,3);
        diagdom(z);         //fills entries of matrix z with a random diagonally dominant matrix

        z = cmatrix(z, 5);  //Multiplies the matrix with the constant 5
        z.printm();         // prints the matrix z.


        return 0;
    }

Output from the lines above:

      -1.04068e+10  -3.14401e+09  3.87932e+09
      -9.75865e+09  1.77408e+10  3.53918e+09
      3.93431e+09  -7.10401e+09  1.9677e+10

The above output the entries to the matrix z that has been multiplied by 5.

**Implementation/Code:** The following is the code for cmatrix()

    //cmatrix

    #include "matrixstruct.hpp"

    #ifndef cmatrix_H
    #define cmatrix_H

    static Matrix cmatrix(Matrix A, double c){
        Matrix w(A.rows, A.columns);
        for(int i = 0; i < A.rows; i++){
            for(int j = 0; j < A.columns; j++){
                w.matrix[i][j] = c*A.matrix[i][j];
            }
        }
        return w;
    }

    #endif

**Last Modified:** April/2019
