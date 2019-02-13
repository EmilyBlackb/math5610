# Scalar-Vector Multiplication function

**Routine Name:**           cvec

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.


**Description/Purpose:** This routine will take a scalar and vector and compute the scalar multiple of the given scalar and vector. This routine requires Matrix struct ([Matrix struct link]()).

**Input:** This routine requires a double number (scalar) and a matrix struct that has 1 row and n columns or n rows and 1 column. matrices with incorrect dimensions will result in an error.

**Output:** This routine returns the scalar multiplication of the given double number and matrix struct. The returned matrix will have the same dimensions as the matrix that was taken as input. 

**Usage/Example:**

The routine has two arguments needed to return the matrix struct. The first argument is a 1 by n or n by 1 matrix struct and the second argument is a double number. In order to view the entries of the matrix resulted from the scalar multiplication, the matrix struct function printm() is used.

    Matrix v(5,1), w(2,2);  //create matrices v and w
    rfillm(v);              //fill the matrices with numbers between 0 and 1
    rfillm(w);
    Matrix result = cvec(v, 5.5);  //compute the multiplication of vector v with 5.5 and store it in matrix v
    result.printm();        //print the entries in the matric result
    cvec(w, 4.05);          //compute the multiplcation of matrix w with 4.05 - will result in an error since w is 
                            //not a 1 by n or n by 1 matrix

Output from the lines above:

    4.62103
    2.16911
    4.30705
    4.39142
    5.01406
    Error: the Vector needs to have 1 column or 1 row

The first 5 values resulted are from the computation of the vector v with 5.5. The following error message is result of trying to input a matrix of incorrect dimension size. 

**Implementation/Code:** The following is the code for cvec()

    #include "matrixstruct.hpp"

    Matrix cvec(Matrix v, double c){
        Matrix w(v.rows, 1), u(1, v.columns);
        if(v.columns == 1){
            for(int i = 0; i < v.rows; i++){
                w.matrix[i][0] = c*v.matrix[i][0];
            }
            return w;
        }
        else if(v.rows == 1){
            for(int i = 0; i < v.columns; i++){
                u.matrix[0][i] = c*v.matrix[0][i];
            }
            return u;
        }
        else cout << "Error: the Vector needs to have 1 column or 1 row" << endl;
    }

**Last Modified:** February/2019
