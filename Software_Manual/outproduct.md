# Vector Outer Product

**Routine Name:**           outpv

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will 

**Input:** This routine takes two vectors: one vector and another vector approximating that vector.

**Output:** This routine returns the outer product of the given vectors.

The routine has two arguments needed to return the outer product: two 1 by n or n by 1 matrices from the matrix struct.

    #include "matrixstruct.hpp"
    #include "ranmatrix.cpp"
    #include "outpv.cpp"

    int main(){

        srand(time(NULL));
        Matrix v(1,3), u(3,1), z(3,3);
        rfillm(v);
        rfillm(u);
        z = outpv(u,v);
        z.printm();

        return 0;
    }

Output from the lines above:

      0.194142  0.335449  0.188946
      0.333879  0.576895  0.324944
      0.046045  0.0795591  0.0448128

**Implementation/Code:** The following is the code for outpv()

    //outer product

    #include "matrixstruct.hpp"

    #ifndef outpv_H
    #define outpv_H

    static Matrix outpv(Matrix u, Matrix v){
        if (u.rows == v.columns && u.columns == v.rows && u.columns == 1){
            Matrix w(u.rows, v.columns);
            for(int i = 0; i < u.rows; i++){
                for(int j = 0; j < v.columns; j++){
                    w.matrix[i][j] = u.matrix[i][0]*v.matrix[0][j];
                }
            }
            return w;
        }
        else cout << "Error: Dimensions are not correct.\n";

    }

    #endif

**Last Modified:** April/2019
