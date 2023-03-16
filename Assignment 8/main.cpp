// #include "includes.hpp"
#include "Dummy.hpp"
int main() {
    // Problem 1    
    // createFibonacci();

    // Problem 2
    // Matrix myIdentityMatrix(5);
    // int row{2};
    // int column{4};
    // Matrix aMatrix(row,column);
    // aMatrix.fillMatrix();
    // std::cout << myIdentityMatrix << std::endl;
    // std::cout << aMatrix << std::endl;
    
    // Problem 3
    // dummyTest();
    
    return 0;
}

/* Teorispørsmål
3a)
See comments in Dummy.cpp
Output
a: 4
b: 4
c: 4
a: 5
b: 5
c: 5
The output matches my guess. Since we didnt define a "=" operator for the Dummy class, the default one is used instead.
This means that when we write *numb.c = 5, this means that the memory address c poitns to gets altered to 5.
Since we also used "=" to initialize b and c, from a, this means that they all point to the same address.
3b)
Output:
a: 4
b: 4
c: 4
a: 5
b: 3
c: 5
and then the program crashes.
This is more correct. As b now is created by the Copy Constructor made, but c still copies a's address.
*/