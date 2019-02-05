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