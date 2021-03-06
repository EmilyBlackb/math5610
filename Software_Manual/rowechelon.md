# Row Echelon Form

**Routine Name:**           rowech

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will perform elementary row operations on a matrix to take the matrix to row echelon form.

**Input:** This routine takes an n by m matrix using the matrix struct.

**Output:** This routine returns an upper triangular matrix in row echelon form.

**Usage/Example:**

The routine needs 1 argument: a n by m matrix. 

      srand(time(NULL));
      
      Matrix A(3,5);
      rfillm(A);
      A.printm();
      rowech(A);
      A.printm();

Output from the lines above:

    0.0841841  0.814423  0.37928  0.693664  0.410276
    0.376469  0.335569  0.544833  0.0908219  0.872741
    0.103968  0.321858  0.861439  0.972813  0.184755

    1  0.891357  1.44722  0.241246  2.31823
    1.87694e-17  1  0.348191  0.910696  0.290941
    1.51719e-17  0  1  1.17085  -0.194789
        
The first block of code is the original A matrix generated by rfillm(). The second block of code is the row-echelon form.

**Implementation/Code:** The following is the code for rowech()

      //Row Echelon Form

      #include "matrixstruct.hpp"
      #include "ranmatrix.cpp"
      #include "t.cpp"
      #include "cvec.cpp"
      #include "addvec.cpp"
      #include "infnormv.cpp"

      ///////////////////////////////////////////////////////////


      #ifndef rowech_H
      #define rowech_H

      void rowech(Matrix &A){
      //A transpose 
        Matrix B(A.columns, A.rows);

      //column of A as a row  
        Matrix colmax(1, A.rows);

      //rows of A
        Matrix rowA(1, A.columns), rowK(1, A.columns);

      //scaling factor
        double scale[A.rows];
        for (int j = 0; j < A.rows; j++){
          rowK.matrix[0] = A.matrix[j]; 
          scale[j] = 1/infnormv(rowK);
        }


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


          //row swap
          //if( A.matrix[r][c] == 0){
          int index = r;
          double max = 0.0, absvalue = 0.0;

          double ppivot[(A.rows-(r))];

          for(int ind = (r); ind < A.rows; ind++){
              ppivot[ind -(r)] = B.matrix[c][ind]*scale[ind];
            if (ppivot[ind -(r)]<0 ) ppivot[ind -(r)] = -1*ppivot[ind -(r)];  //absolute value
            if (max < ppivot[ind -(r)]) {
              max = ppivot[ind -(r)];
              index= ind;
            }  
          } 

                  //swapping rows
            A.matrix[r]= A.matrix[index];
            A.matrix[index]= rowA.matrix[0];
            rowA.matrix[0]= A.matrix[r];


          //dividing by the first element in the row
          double divsor = 1/A.matrix[r][c];
          rowA = cvec(rowA, divsor);
          A.matrix[r]= rowA.matrix[0];

          //zeros below leading 1
          for(int k= r+1; k< A.rows; k++ ){
            double subtrct = A.matrix[k][c];
            rowK.matrix[0]= A.matrix[k];
            A.matrix[k]= vadd(rowK, cvec(rowA, -subtrct)).matrix[0];
          }

          if (r == A.rows-1) break;
        }
      }

      #endif

**references:** https://stackoverflow.com/questions/3909784/how-do-i-find-a-particular-value-in-an-array-and-return-its-index


**Last Modified:** April/2019
