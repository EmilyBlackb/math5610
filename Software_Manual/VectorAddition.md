**Routine Name:**           vadd()

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using g++ compiler.

**Description/Purpose:** This routine will add together two matrices. 
([Matrix Struct Link](https://emilyblackb.github.io/math5610/Software_Manual/MatrixStruct)) with random real numbers between 0 and 1.

**Input:** The function requires 2 matrix structs as input.

**Output:** This routine returns a matrix struct.

**Usage/Example:**

The routine requires matrixstruct. The routine takes a matrix using matrixstruct and fills the matrix with random real numbers between 0 and 1. In order to view the numbers generated use the matrixstruct function printm(). 

    Matrix A(2,3);  //creates a matrix named A
    rfillm(A);      //fills matrix A with random numbers between 0 and 1
    A.printm();     //prints matrix A
     
Output from the lines above:

    0.840188  0.394383  0.783099
    0.79844  0.911647  0.197551

**Implementation/Code:** The following is the code for vadd()

    //vector addition
    #include "matrixstruct.hpp"

    Matrix vadd(Matrix u, Matrix v){
        Matrix w(v.rows, v.columns);
        if((u.columns == 1) && (v.columns == 1)){
            if(u.rows == v.rows){
                for(int i = 0; i < v.rows; i++){
                    w.matrix[i][0] = u.matrix[i][0] + v.matrix[i][0];
                }
            }
            else cout << "Error: Vector lengths are not equivalent." << endl;
        }
        else if((u.rows == 1) && (v.rows == 1)){
            if(u.columns == v.columns){
                for(int i = 0; i < v.columns; i++){
                    w.matrix[0][i] = u.matrix[0][i] + v.matrix[0][i];
                }
            }
            else cout << "Error: Vector lengths are not equivalent." << endl;
        }
        else cout << "Error: One of the inputs was not a vector or one of the inputs needs to be transposed." << endl;
        return w;
    }

**Last Modified:** February/2019
