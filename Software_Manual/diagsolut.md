# Solver: Square Linear System with Diagonal Coefficient Matrix

**Routine Name:**           onenormabsv

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will compute the absolute error in the approximation of one vector by another when the 1-norm is used. 

**Input:** This routine takes two vectors: one vector and another vector approximating that vector.

**Output:** This routine returns the absolute error in the approximation of one vector by another when the 1-norm is used.

**Usage/Example:**

The routine has two arguments needed to return the 1-norm value as a double: two 1 by n or n by 1 matrices from the matrix struct.

    srand(time(NULL));
    Matrix v(1,3), w(1,3);
    rfillm(v);
    rfillm(w);
    cout << onenormabsv(v, w) << endl;

Output from the lines above:

      1.6802

**Implementation/Code:** The following is the code for onenormabsv()

    #include "matrixstruct.hpp"
    #include "cvec.cpp"
    #include "addvec.cpp"
    #include "onenormvec.cpp"

    #ifndef onenormabsv_H
    #define onenormabsv_H

    static double onenormabsv(Matrix v, Matrix u){
        u = cvec(u, -1.0);
        v = vadd(u, v);
        return onenormv(v);
    }

    #endif

**Last Modified:** February/2019
