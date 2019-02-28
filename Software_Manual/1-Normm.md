# Matrix 1-Norm

**Routine Name:**           onenormm

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will compute and return the 1-matrix norm of a given square matrix.

**Input:** This routine takes a a square matrix using the matrix struct (matrix rows = matrix columns).

**Output:** This routine returns the matrix 1-norm of the matrix input as a real number.

**Usage/Example:**

The routine has one argument needed to return the matrix 1-norm value.

    #include "matrixstruct.hpp"
    #include "onenormm.cpp"
    #include "ransymmatrix.cpp"

    int main(){
    
      srand(time(NULL));
      Matrix z(3,3);
      rsymmfillm(z);
    
    cout << onenormm(z) << endl;
      
    return 0;
    }

Output from the lines above:

      5.02904e+09

The output is the calculated Matrix 1-norm of the matrix z.

**Implementation/Code:** The following is the code for onenormm()

    #ifndef onenormm_H
    #define onenormm_H

    double onenormm(Matrix A){
        Matrix w(1, A.columns);
        double absvalue;
        for (int j = 0; j < A.columns; j++){
            w.matrix[0][j] = 0;
            for (int i = 0; i < A.rows; i++){
                absvalue = A.matrix[i][j];
                if ( absvalue < 0) absvalue = -1.0*absvalue;
                w.matrix[0][j] = w.matrix[0][j] + absvalue;
            }
        }
        return infnormv(w);
    }

    #endif


**Last Modified:** February/2019
