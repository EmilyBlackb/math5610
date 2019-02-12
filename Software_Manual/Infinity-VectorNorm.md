# Vector infinity-Norm

**Routine Name:**           smaceps

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
    c
    c set up storage for the algorithm
    c --------------------------------
    c
          real seps, one, appone
    c
    c initialize variables to compute the machine value near 1.0
    c ----------------------------------------------------------
    c
          one = 1.0
          seps = 1.0
          appone = one + seps
    c
    c loop, dividing by 2 each time to determine when the difference between one and
    c the approximation is zero in single precision
    c --------------------------------------------- 
    c
          ipow = 0
          do 1 i=1,1000
             ipow = ipow + 1
    c
    c update the perturbation and compute the approximation to one
    c ------------------------------------------------------------
    c
            seps = seps / 2
            appone = one + seps
    c
    c do the comparison and if small enough, break out of the loop and return
    c control to the calling code
    c ---------------------------
    c
            if(abs(appone-one) .eq. 0.0) return
    c
        1 continue
    c
    c if the code gets to this point, there is a bit of trouble
    c ---------------------------------------------------------
    c
          print *,"The loop limit has been exceeded"
    c
    c done
    c ----
    c
          return
    end

**Last Modified:** February/2019
