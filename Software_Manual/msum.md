# Matrix Sum

**Routine Name:**           msum

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will return the sum of two matrices of the same size.

**Input:** This routine takes two matrices of the same size.

**Output:** This routine returns the sum of the two given matrices.

**Usage/Example:**

The routine has two matrices from the matrix struct.

    #include "matrixstruct.hpp"
    #include "ranmatrix.cpp"
    #include "ransymmatrix.cpp"
    #include "diagdom.cpp"
    #include "matrixsum.cpp"

    int main(){

        srand(time(NULL));
        Matrix z(3,3), p(3,3);
        diagdom(z);  
        rsymmfillm(p);
        p = msum(z,p);
        p.printm();

        return 0;
    }

Output from the lines above:

      5.77419e+09  2.09435e+09  5.96396e+08
      1.84544e+09  1.98472e+09  1.04381e+09
      -8.78526e+08  2.64351e+09  -1.38332e+09

**Implementation/Code:** The following is the code for msum()

    //matrix sum

    #include "matrixstruct.hpp"

    #ifndef msum_H
    #define msum_H

    static Matrix msum(Matrix A, Matrix B){
        if (A.rows == B.rows && A.columns == B.columns){
            Matrix w(A.rows, A.columns);
            for(int i = 0; i < A.rows; i++){
                for(int j = 0; j < A.columns; j++){
                    w.matrix[i][j] = A.matrix[i][j] + B.matrix[i][j];
                }
            }
            return w;
        }
        else cout << "Error: Dimensions are not the same between the matrices\n";

    }

    #endif

**Last Modified:** April/2019
