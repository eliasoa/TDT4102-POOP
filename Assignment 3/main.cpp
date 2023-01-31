#include "cannonball.h"
#include "std_lib_facilities.h"

/* 
Function that checks if two doubles are equal, within a error threshold
 using the formula |compareOperand-toOperand| ≤ maxError 
*/
void testDeviation(double compareOperand, double toOperand, double maxError, string name);


int main() {
    // cout << posX(0,50,5) << endl;
    // cout << posY(0,25,5) << endl;
    // cout << velY(25,5) << endl;
    // testDeviation(posX(0.0,50.0,5.0), 250.0, 0.001, "posX(0.0,50.0,5.0)");
    // vector<double> velocityVector = getVelocityVector(27.5, 15.64);
    // cout << velocityVector.at(0) << endl;
    // cout << velocityVector.at(1) << endl;
    
    return 0;
}


void testDeviation ( double compareOperand, double toOperand, double maxError, string name ){
    if ( abs(compareOperand-toOperand) <= maxError)
    {
        cout << name << "is valid\n" << endl;
    }
    else
    {
        cout << name << "is not valid, expected " << toOperand << " got " << compareOperand << endl;
    }
}