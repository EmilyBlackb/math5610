# Vector Dot Product

**Routine Name:**           vdot

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.


**Description/Purpose:** This routine will return the dot product of two vectors (n by 1 or 1 by n matrices created using matrix struct) of the same length. 

**Input:** This routine takes two vectors of the same length as input. Matrices of other dimensions will return an error message.

**Output:** This routine returns the dot product of the vector inputs as a double.

**Usage/Example:**

The routine has two arguments needed to return the dot product value.

    #include "matrixstruct.hpp"
    #include "ranmatrix.cpp"
    #include "vdotproduct.cpp"

    int main(){

       srand(time(NULL));
       Matrix v(1,3), u(3,1);
       rfillm(v);
       rfillm(u);
       cout << vdot(v, u);
                
       return 0;
        
    }

Output from the lines above:

    0.766784

The output is the dot product of vector v and u.

**Implementation/Code:** The following is the code for vdot()

    #include "matrixstruct.hpp"

    #ifndef vdotproduct_H
    #define vdotproduct_H

    static double vdot(Matrix u, Matrix v){
            Matrix w(u.rows, u.columns);
            double sum = 0;
        if (u.rows == v.columns && u.columns == v.rows){
            if (u.rows == 1){
                for (int i = 0; i < u.columns; i++){
                    w.matrix[0][i] = u.matrix[0][i]*v.matrix[i][0];
                    sum = sum + w.matrix[0][i];
                }            
            }
            else if(u.columns == 1){
                for (int i = 0; i < u.rows; i++){
                    w.matrix[i][0] = u.matrix[i][0]*v.matrix[0][i];
                    sum = sum + w.matrix[i][0];
                }
            }
            else cout << " \n";
            return sum;
        }
        else cout << " \n";
    }

    #endif



**Last Modified:** February/2019
