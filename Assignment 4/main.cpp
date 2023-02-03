#include "utilities.h"
#include "tests.h"

int main() {
    int userInput = 0;
    bool terminate = false;
    // temp variables
    int a = 0;
    int b = 0;
    while (terminate != true)
    {   
        cout << "Input: ";
        cin >> userInput;
        switch (userInput)
        {
        case 0:
            terminate = true;
            cout << "Exiting" << endl;
            break;
        case 1:
            testCallByValue();
            break;
        case 2:
            testCallByReference();
            break;
        case 3:
            a = 1;
            b = 2;
            swapNumbers(a,b);
            cout << "a: " << a << "b: " << b << endl;
            break;    
        case 4:
        {
            Student studentOne {"Elias", "Kybernetikk og Robotikk", 24};
            Student studentTwo {"Per Magnus", "Elsys", 24};
            printStudent(studentOne);
            printStudent(studentTwo);
            cout << isInProgram(studentTwo, "Elsys") << endl;
            cout << isInProgram(studentOne, "Elsys") << endl;
        }
            break;
        default:
            break;
        }  
    }    
    return 0;
}

/* Teorispørsmål
Oppgave 1:
a) Kodeforståelse
After 10 iterations: v0 = 25
e) Pass by reference is the preferable way to do it, as pass-by-value would need to
return a vector, making the funciton cumbersome, pass-by-const-ref wont let the function
change the arguments, making the function useless.
Oppgave 2:
e) Oppgave om feilmelding
The order of the includes is wrong???
*/