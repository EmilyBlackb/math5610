# Random Symmetric Matrix generator

**Routine Name:**           rsymmfillm

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using g++ compiler.

**Description/Purpose:** This routine that will generate a symmetric matrix that has real values in all entries of the matrix using matrix struct ([Matrix Struct Link](https://emilyblackb.github.io/math5610/Software_Manual/MatrixStruct)).

**Input:** The function requires a square matrix struct input.

**Output:** This routine returns that same matrix filled with random real numbers.

**Usage/Example:**

The routine requires matrixstruct. The routine takes a n by n matrix using matrixstruct and fills the matrix with random real. In order to view the numbers generated use the matrixstruct function printm(). 

    Matrix A(3,3);  //creates a 3 by 3 matrix named A
    rsymmfillm(A);  //fills matrix A with random numbers
    A.printm();     //prints matrix A
     
Output from the lines above:

      -2.12419e+09  3.0555e+08  9.74513e+08
      3.0555e+08  -9.73617e+08  -1.1883e+09
      9.74513e+08  -1.1883e+09  1.68524e+09

The lines of code output are the entries for the symmetric matrix A.

**Implementation/Code:** The following is the code for rsymmfillm()

    #include "matrixstruct.hpp"

    using namespace std;

    //fills a square matrix struct with symmetric random numbers.

    void rsymmfillm(Matrix &A){
        if (A.rows == A.columns){
            for(int row = 0; row < A.rows; row++){
                for(int col = row; col < A.columns; col++){
                    A.matrix[row][col] = 1.0*rand();
                    if (rand() % 2 == 1) A.matrix[row][col] = -1.0*A.matrix[row][col];
                    A.matrix[col][row] = A.matrix[row][col];
                }
            }
        }
        else cout << "Error: Matrix is not square-cannot be symmetric\n";
    }



**Last Modified:** February/2019

