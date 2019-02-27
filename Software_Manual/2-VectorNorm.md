# Vector 2-Norm

**Routine Name:**           twonormv

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.


**Description/Purpose:** This routine will compute the 2-norm of an arbitrary vector will real number entries. 

**Input:** This routine takes a vector (a 1 by n or n by 1 matrix created using the matrix struct) as input.

**Output:** This routine returns the 2-norm of the vector input as a real number.

**Usage/Example:**

The routine has one argument needed to return the 2-norm value.

      srand(time(NULL));
      Matrix v(5,1), w(2,2);
      rfillm(v);
      rfillm(w);
      double result = twonormv(v);
      cout << result << endl;
      result = twonormv(w);

Output from the lines above:

      4.29848
      Error: the vector needs to have either 1 column or 1 row

The first resulting output is the 2-norm of the vector v input. The second line of output is the error message associated with not entering a vector as input.

**Implementation/Code:** The following is the code for twonormv()

      #include "matrixstruct.hpp"
      #include <math.h>

      double twonormv(Matrix v){
          double sum = 0.0;
          if(v.columns == 1){
              for(int i = 0; i < v.rows; i++){
                  sum = sum + v.matrix[i][0]*v.matrix[i][0];
              }
              sum = sqrt(sum);
          }
          else if(v.rows == 1){
              for(int i = 0; i < v.columns; i++){
                  sum = sum + v.matrix[0][i]*v.matrix[0][i];
              }
              sum = sqrt(sum);
          }
          else cout << "Error: the vector needs to have either 1 column or 1 row" << endl;
          return sum;
      }
      
 **References:** <http://www.cplusplus.com/reference/cmath/sqrt/>

**Last Modified:** February/2019
