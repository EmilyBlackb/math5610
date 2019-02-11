**Routine Name:**           vadd()

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using g++ compiler.

**Description/Purpose:** This routine will add together two vectors created using Matrix struct ([Matrix Struct Link](https://emilyblackb.github.io/math5610/Software_Manual/MatrixStruct)) . The matrices need to be of the same dimensions and be either 1 row by n columns or n rows by 1 column. 

**Input:** The function requires 2 matrix structs as input. Both Matrix structs need to be the same dimensions and either 1 row by n columns or n rows by 1 column.

**Output:** This routine returns a matrix struct created from the addition of the two matrix struct inputs.

**Usage/Example:**

The routine requires the matrix struct. The routine will take 2 Matrix struct arguments of the same 1 by n or n by 1 dimensions.

    Matrix A(2,3);  //creates a matrix named A
    rfillm(A);      
    A.printm();     //prints matrix A
    
    Matrix u(5,1), v(5,1), w(2,2), x(6,1); //creates a matrices u, v, w, and x/
    rfillm(u);      //fills the matrix with random numbers between 0 and 1 from the #include "ranmatrix.cpp"
    rfillm(v);
    rfillm(w);
    rfillm(x);
    Matrix result = vadd(v, w);   //w is not a 1 by n or n by 1 matrix so this will return an error
    result = vadd(v,x);           //v and x are not the same length so this will return an error
    result = vadd(u,v);           //This will add vector
    result.printm();              //This will print out the matrix result that was generated from the vadd(u,v) function
    return 0;
     
Output from the lines above:

    Error: One of the inputs was not a vector or one of the inputs needs to be transposed.
    Error: Vector lengths are not equivalent.
      1.03774
      0.729606
      1.55133
      1.07621
      1.46562

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
