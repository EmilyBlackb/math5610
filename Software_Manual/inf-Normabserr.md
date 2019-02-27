# Absolute Error using the Infinity Norm

**Routine Name:**           infnormabsv

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.


**Description/Purpose:** This routine will compute the absolute error in the approximation of one vector by another when the ∞-norm is used. 

**Input:** This routine takes 2 vectors (a 1 by n or n by 1 matrix created using the matrix struct) as input. Matrices of other dimensions will return an error message.

**Output:** This routine returns the absolute error as a double in the approximation of one vector by another when the ∞-norm is used.

**Usage/Example:**

The routine has two arguments needed to return the absolute error using the infinity-norm.

    #include "matrixstruct.hpp"
    #include "ranmatrix.cpp"
    #include "infnormabsv.cpp"

    int main(){
    srand(time(NULL));
      Matrix v(1,3), w(1,3);
      rfillm(v);
      rfillm(w);
    
    //main for infnormabsv.cpp
    cout << infnormabsv(v,w) << endl;
      
    return 0;
    }

Output from the lines above:

    0.52125

The output is the calculated absolute error using the infinity-norm of the given 2 vectors.

**Implementation/Code:** The following is the code for infnormabsv()

    #include "matrixstruct.hpp"
    #include "cvec.cpp"
    #include "addvec.cpp"
    #include "infnormv.cpp"

    #ifndef infnormabsv_H
    #define infnormabsv_H

    static double infnormabsv(Matrix v, Matrix u){
        u = cvec(u, -1.0);
        v = vadd(u, v);
        return infnormv(v);
    }

    #endif

**Last Modified:** February/2019
