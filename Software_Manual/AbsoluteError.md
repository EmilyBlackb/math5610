# Absolute Error Function

**Routine Name:**           abserr()

**Author:** Emily Blackburn

**Language:** C++. The code can be compiled using g++ compiler.

**Description/Purpose:** This routine computes and returns the absolute error in the approximation of a number x by another number y.

**Input:** The function requires 2 double numbers.

**Output:** This routine returns the absolute error.

**Usage/Example:**

The routine has two arguments x the real number and y the approximate number.

    #include <iostream>
    
    cout << abserr(5, 5.00004);
    
Output from the lines above:

    4e-05

**Implementation/Code:** The following is the code for abserr()

    using namespace std;

    double abserr(double real, double approx){
        double aerr = 1.0*real - 1.0*approx;
        if (aerr < 0) aerr = -1*aerr;
        return aerr;
    }

**References:** <http://www.cplusplus.com/reference/cstdlib/abs/>

**Last Modified:** February/2019
