# Vector infinity-Norm

**Routine Name:**           infnormv

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.


**Description/Purpose:** This routine will compute the infinity-norm of an arbitrary vector will real number entries. 

**Input:** This routine takes a vector (a 1 by n or n by 1 matrix created using the matrix struct) as input.

**Output:** This routine returns the infinity-norm of the vector input as a real number.

**Usage/Example:**

The routine has one argument needed to return the infinity-norm value.

      Matrix v(5,1);
      rfillm(v);
      v.matrix[1][0] = -4;
      v.printm();
      cout << infnormv(v);

Output from the lines above:

        0.840188
        -4
        0.783099
        0.79844
        0.911647
      4

The first 5 lines of output are the entries of the vector shown by using v.printm(). The last resulting output is the infinity-norm of the vector input.

**Implementation/Code:** The following is the code for infnormv()

      #include "matrixstruct.hpp"

      double infnormv(Matrix v){
          double sum = 0, absvalue = 0;
          if(v.columns == 1){
              for(int i = 0; i < v.rows; i++){
                  absvalue = v.matrix[i][0];
                  if (absvalue < 0) absvalue = -1.0*absvalue;
                  if (sum < absvalue) sum = absvalue;
              }
          }
          else if(v.rows == 1){
              for(int i = 0; i < v.columns; i++){
                  absvalue = v.matrix[0][i];
                  if (absvalue < 0) absvalue = -1.0*absvalue;
                  if (sum < absvalue) sum = absvalue;
              }
          }
          else cout << "Error: the vector needs to have either 1 column or 1 row" << endl;
          return sum;
      }


**Last Modified:** February/2019
