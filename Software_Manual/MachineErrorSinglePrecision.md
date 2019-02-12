# Single Precision Machine Error

**Routine Name:**           single_precision

**Author:** Emily Blackburn

**Language:** C++ (Can be compiled using g++ compiler)

**Description/Purpose:** This routine will compute the single precision value for the machine epsilon or the number of digits
in the representation of real numbers in single precision. This is a routine for analyzing the behavior of any computer. This
usually will need to be run one time for each computer.

**Input:** There are no inputs needed in this case. 

**Output:** There are no outputs for this routine. The program prints the machine precision epsilon.

**Usage/Example:**

The routine prints the values of the machine epsilon and the power of two that gives the machine epsilon. 
      
      single_precision();

Output from the lines above:

      5.96046e-08
      24

The first value is related to the decimal version of the machine epsilon and the second value (24) is the number of binary digits that define the same machine epsilon. The number of decimal digits that can be represented is roughly eight (E-08 on the
end of the second value).

**Implementation/Code:** The following is the code for single_precision()

      
    #include <iostream>

    using namespace std;

    void single_precision() {
        float x = 1;
        float y = 1;
        float z = x + 1;
        int time = 0;
    
        while (z != 1){
            x = x/2.0;
            z =  y + x;
            time = time + 1.0;
            if ((z - y) == 0.0){
                break;
            }
        }
        cout << x << endl << time << endl;
    }

**Last Modified:** January/2019
