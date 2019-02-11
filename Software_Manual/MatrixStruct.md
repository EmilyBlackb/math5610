**Routine Name:**           Matrix

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using g++ compiler.

**Description/Purpose:** This routine creates a structure called Matrix.

**Input:** This routine requires 2 integer inputs: An integer for the number of rows and an integer for the number of columns.

**Output:** This routine returns a structure called Matrix. 

**Usage/Example:**

The routine requires matrixstruct. The routine takes a matrix using matrixstruct and fills the matrix with random real numbers between 0 and 1. In order to view the numbers generated use the matrixstruct function printm(). 

    Matrix A(2,3);      //creates a matrix named A
    rfillm(A);          //fills matrix A with random numbers between 0 and 1
    A.matrix[1][1] = 5; //Changes entry [2][2] to 5
    A.printm();         //prints matrix A
     
Output from the lines above:

    0.840188  0.394383  0.783099
    0.79844  5  0.197551

**Implementation/Code:** The following is the code for rfillm()

    #include <iostream>

    using namespace std;

    #ifndef matrixstruct_H
    #define matrixstruct_H

    struct Matrix {
        int rows, columns;
        double **matrix;
        Matrix(int, int);
        void printm();
    };

    Matrix::Matrix(int r, int c){
        rows = r;
        columns = c;
        matrix = new double* [rows];
        for(int row = 0; row < rows; row++){
            matrix[row] = new double[columns];
        }
    }

    void Matrix:: printm(){
        for(int row = 0; row < rows; row++){
            for(int col = 0; col < columns; col++){
                cout << "  " << matrix[row][col];
            }
            cout << endl;
        }
    }

    #endif
    
**References:**   
https://www.youtube.com/watch?v=0BX5heUj0FI
http://www.cplusplus.com/doc/tutorial/classes/
https://www.tutorialspoint.com/cplusplus/cpp_class_member_functions.htm

Stroustrup, Bjarne. The C++ Programming Language. Addison-Wesley, 1996

**Last Modified:** February/2019
