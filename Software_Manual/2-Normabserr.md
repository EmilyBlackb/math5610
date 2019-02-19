# Absolute Error of two vectors in the 2-Norm

**Routine Name:**           twonormabsv

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.


**Description/Purpose:** This routine will return the absolute error in the approximation of one vector by another when the 2-norm is used.

**Input:** This routine takes two vectors: one vector and an approximate of that vector.

**Output:** This routine will return the absolute error in the approximation of one vector by another when the 2-norm is used as a double.

**Usage/Example:**

The routine has one argument needed to return the 1-norm value.

      srand(time(NULL));
      Matrix v(1,3), w(1,3);
      rfillm(v);
      rfillm(w);
      cout << twonormabsv(v, w) << endl;

Output from the lines above:

      0.819036

**Implementation/Code:** The following is the code for twonormabsv()

    #include "matrixstruct.hpp"
    #include "cvec.cpp"
    #include "addvec.cpp"
    #include "twonormv.cpp"

    #ifndef twonormabsv_H
    #define twonormabsv_H

    static double twonormabsv(Matrix v, Matrix u){
        u = cvec(u, -1.0);
        v = vadd(u, v);
        return twonormv(v);
    }

    #endif



**Last Modified:** February/2019
