**Routine Name:**           relerr()

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using the g++ compiler.

**Description/Purpose:** This routine will compute and return the relative error in the approximation of a number x by another number y.

**Input:** This routine has two inputs: a double number x and another number y that aproximates x.

**Output:** This routine returns the relative error.

**Usage/Example:**

The routine takes two double numbers and returns the relative error. 

      cout << relerr(5, 5.0004);

Output from the lines above:

      0.00200016

**Implementation/Code:** The following is the code for relerr()

    double relerr(double real, double approx){
    double rerr = (1.0*real - 1.0*approx)/1.0*approx;
    if (rerr < 0) rerr = -1*rerr;
    return rerr;
    }

**Last Modified:** February/2019
