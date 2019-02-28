# Matrix Infinity-Norm

**Routine Name:**           infnormm

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.


**Description/Purpose:** This routine will compute  the ∞-norm of a given square matrix (also known as the max norm).

**Input:** This routine takes a square matrix (rows = columns) using the matrix struct as input. Matrices of other dimensions will return an error message.

**Output:** This routine returns the matrix infinity-norm as a double.

**Usage/Example:**

    #include "matrixstruct.hpp"
    #include "ranmatrix.cpp"
    #include "infnormm.cpp"
    #include "ransymmatrix.cpp"

    int main(){

          srand(time(NULL));
          Matrix z(3,3);
          rsymmfillm(z);  //fills matrix z with random symmetric values
          z.matrix[0][2] = 500;  //changes the row 1 column 2 entry so that z is no longer symmetric
          cout << infnormm(z) << endl;

        return 0;
    }

The routine has one argument needed to return the matrix infinity-norm value.

    

Output from the lines above:

    4.43064e+09

The output is the matrix infinity norm of matrix 

**Implementation/Code:** The following is the code for infnormm()

    //max over the rows - sum over the columns.
    #include "infnormv.cpp"

    #ifndef infnormm_H
    #define infnormm_H

    double infnormm(Matrix A){
        Matrix w(A.rows, 1);
        double absvalue;
        for (int j = 0; j < A.rows; j++){
            w.matrix[j][0] = 0;
            for (int i = 0; i < A.columns; i++){
                absvalue = A.matrix[j][i];
                if ( absvalue < 0) absvalue = -1.0*absvalue;
                w.matrix[j][0] = w.matrix[j][0] + absvalue;
            }
        }
        return infnormv(w);
    }

    #endif


**Last Modified:** February/2019
