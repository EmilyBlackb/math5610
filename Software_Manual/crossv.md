# Vector Cross Product

**Routine Name:**           crossv

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.


**Description/Purpose:** This routine will c returns the cross-product of two vectors of length three. 

**Input:** This routine takes two vectors (a 1 by 3 or 3 by 1 matrix created using the matrix struct) as input. Matrices of other dimensions will return an error message.

**Output:** This routine returns the cross product of 2 vectors of length 3 as a double.

**Usage/Example:**

The routine has two arguments needed to return the cross product.

    #include "matrixstruct.hpp"
    #include "ranmatrix.cpp"
    #include "crossv.cpp"

    int main(){

          srand(time(NULL));
          Matrix v(1,3), w(1,3), z(1,3);
          rfillm(v);
          rfillm(w);
          z = crossv(v,w);
          z.printm();

        return 0;
    }

Output from the lines above:

      -0.0147774  -0.125613  0.34038

The output are the entries to the vector z: the crossproduct of v and w. 

**Implementation/Code:** The following is the code for crossv()

    //Cross Product

    Matrix crossv( Matrix u, Matrix v){
        Matrix w(u.rows,u.columns);
        if (u.rows == v.rows && u.columns == v.columns){
            if (u.columns == 3){
                for (int j = 0; j < w.columns; j++){
                        w.matrix[0][j % 3] = u.matrix[0][(1+j) % 3]*v.matrix[0][(2+j) % 3]
                            - u.matrix[0][(2+j) %3]*v.matrix[0][(1+j) % 3];
                }
            }
            else if (u.rows == 3){
                for (int j = 0; j < w.rows; j++){
                        w.matrix[j % 3][0] = u.matrix[(1+j) % 3][0]*v.matrix[(2+j) % 3][0]
                            - u.matrix[(2+j) %3][0]*v.matrix[(1+j) % 3][0];
                }
            }
            else cout << "Error: length is not 3\n";
        }
        else cout << "Error: vectors are not the same length\n";
        return w;
    }



**Last Modified:** February/2019
