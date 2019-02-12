# Vector 1-Norm

**Routine Name:**           onenorm

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.


**Description/Purpose:** This routine will compute the 2-norm of an arbitrary vector will real number entries. 

**Input:** This routine takes a vector (a 1 by n or n by 1 matrix created using the matrix struct) as input.

**Output:** This routine returns the 2-norm of the vector input as a real number.

**Usage/Example:**

The routine has one argument needed to return the 2-norm value.

      call smaceps(sval, ipow)
      print *, ipow, sval

Output from the lines above:

      24   5.96046448E-08

The resulting output is the 2-norm of the vector input.

**Implementation/Code:** The following is the code for smaceps()

      subroutine smaceps(seps, ipow)


**Last Modified:** February/2019
