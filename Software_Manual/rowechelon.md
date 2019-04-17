# Row Echelon Form

**Routine Name:**           rowech

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will compute the absolute error in the approximation of one vector by another when the 1-norm is used. 

**Input:** This routine takes two vectors: one vector and another vector approximating that vector.

**Output:** This routine returns the absolute error in the approximation of one vector by another when the 1-norm is used.

**Usage/Example:**

The routine has two arguments needed to return the 1-norm value as a double: two 1 by n or n by 1 matrices from the matrix struct.

      srand(time(NULL));
      
      Matrix A(4,3);
      rfillm(A);
      rowech(A);
      A.printm();

Output from the lines above:

      1  1.05636  0.0959918
      0  1  -0.000314035
      0  0  1
      0  0  1.73472e-18

**Implementation/Code:** The following is the code for rowech()

    //Row Echelon Form

    #include "matrixstruct.hpp"
    #include "ranmatrix.cpp"
    #include "t.cpp"
    #include "cvec.cpp"
    #include "addvec.cpp"

    #ifndef rowech_H
    #define rowech_H

    void rowech(Matrix &A){
    //A transpose 
      Matrix B(A.columns, A.rows);

    //column of A as a row  
      Matrix colmax(1, A.rows);
    //row of A
      Matrix rowA(1, A.columns), rowK(1, A.columns);

      for (int c     = 0; c < A.columns; c++){
        int r = c;
        rowA.matrix[0] = A.matrix[r]; 
        B = t(A);

        //zero columns
        bool zvec = true;
        while (zvec == true){
          colmax.matrix[0]= B.matrix[c];
          for(int a = r; a < A.rows; a++){
            if (colmax.matrix[0][a] != 0) zvec = false;
          }
          if (zvec == true) c++;
        }

        //row swap if leading 0
        if (colmax.matrix[0][r] == 0){
          int index = r;
          double max = 0.0, absvalue = 0.0;
          for(int ind = (r+1); ind < A.rows; ind++){
            absvalue = colmax.matrix[0][ind];
            if (absvalue < 0) absvalue = -1.0*absvalue;
            if (max < absvalue) {
              max = absvalue;
              index= ind;
            }  
          }

                //swapping rows
          A.matrix[r]= A.matrix[index];
          A.matrix[index]= rowA.matrix[0];
          rowA.matrix[0]= A.matrix[r];
        }


        //dividing by the first element in the row
        rowA = cvec(rowA, 1/A.matrix[r][c]);

        A.matrix[r]= rowA.matrix[0];

        //zeros below leading 1
        for(int k= r+1; k< A.rows; k++ ){
          rowK.matrix[0]= A.matrix[k];
          A.matrix[k]= vadd(rowK, cvec(rowA, -A.matrix[k][c])).matrix[0];
        }
      }

    }

    #endif

    //references: https://stackoverflow.com/questions/3909784/how-do-i-find-a-particular-value-in-an-array-and-return-its-index


**Last Modified:** April/2019
