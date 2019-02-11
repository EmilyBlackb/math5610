
**Routine Name:**           double_precision

**Author:** Emily Blackburn

**Language:** C++ (Can be compiled using g++ compiler)

**Description/Purpose:** This routine will compute the double precision value for the machine epsilon or the number of digits
in the representation of real numbers in double precision. This is a routine for analyzing the behavior of any computer. This
usually will need to be run one time for each computer.


**Input:** There are no inputs needed in this case. 

**Output:** There are no outputs for this routine. The program prints the machine precision epsilon.

**Usage/Example:**

This routine does not require any inputs and returns 2 values:
      
      double_precision();

Output from the lines above:

      1.11022e-16
      53

The first value is related to the decimal version of the machine epsilon and the second value (53) is the number of binary digits that define the same machine epsilon. The number of decimal digits that can be represented is roughly eight (E-16 on the
end of the second value).

**Implementation/Code:** The following is the code for double_precision()

      
    #include <iostream>

    using namespace std;

    void double_precision(){
        double x = 1;
        double y = 1;
        double z = x +1;
        int time = 0;
    
        while (z != 1){
            x = x/2.0;
            z =  y + x;
            time = time +1.0;
            if ((z - y) == 0.0){
                break;
            }
        }
        cout << x << endl << time << endl;
    }

**Last Modified:** January/2019
