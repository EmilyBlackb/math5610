# Absolute Error of two vectors in the 2-Norm

**Routine Name:**           twonormabsv

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.


**Description/Purpose:** This routine will return the absolute error in the approximation of one vector by another when the 2-norm is used.

**Input:** This routine takes two vectors: one vector and an approximate of that vector.

**Output:** This routine will return as a double the absolute error in the approximation of one vector by another when the 2-norm is used.

**Usage/Example:**

The routine has two arguments needed to return the 2-norm value: two 1 by n or n by 1 matrices using matrix struct.

      srand(time(NULL));
      Matrix v(1,3), w(1,3);
      rfillm(v);
      rfillm(w);
      cout << twonormabsv(v, w) << endl;

Output from the lines above:

      0.819036

The output is the absolute error of the vectors v and w using the 2-norm.

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
