#include <iostream>

using namespace std;

void single_precision() {
    float x = 1;
    float y = 1;
    float z = x +1;
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