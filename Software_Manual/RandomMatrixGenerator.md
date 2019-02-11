**Routine Name:**           rfillm

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using g++ compiler.

**Description/Purpose:** This routine will fill a matrix struct ([Matrix Struct Link](https://emilyblackb.github.io/math5610/Software_Manual/MatrixStruct.md)) with random real numbers between 0 and 1.

**Input:** The function requires a matrix struct input.

**Output:** This routine returns that same matrix filled with random real numbers between 0 and 1.

**Usage/Example:**

The routine requires matrixstruct. The routine takes a matrix using matrixstruct and fills the matrix with random real numbers between 0 and 1. In order to view the numbers generated use the matrixstruct function printm(). 

    Matrix A(2,3);  //creates a matrix named A
    rfillm(A);      //fills matrix A with random numbers between 0 and 1
    A.printm();     //prints matrix A
     
Output from the lines above:

    0.840188  0.394383  0.783099
    0.79844  0.911647  0.197551

**Implementation/Code:** The following is the code for rfillm()

    #include <iostream>
    #include "matrixstruct.hpp"

    using namespace std;

    //fills a matrix struct with random numbers between 0 and 1.

    void rfillm(Matrix &A){
        for(int row = 0; row < A.rows; row++){
            for(int col = 0; col < A.columns; col++){
                A.matrix[row][col] = 1.0*rand()/RAND_MAX;
            }
        }
    }

**Last Modified:** February/2019
