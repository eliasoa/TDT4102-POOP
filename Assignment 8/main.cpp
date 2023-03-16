#include "includes.hpp"

int main() {
    // Problem 1    
    // createFibonacci();

    // Problem 2
    // Matrix m(2,2);

    // m.set(0,0,1);
    // m.set(0,1,2),
    // m.set(1,0,3);
    // m.set(1,1,4);
    // std::cout << m[0][1] << std::endl;
    Matrix myIdentityMatrix(2);
    // std::cout << myIdentityMatrix[0][0] << std::endl;
    // std::cout << myIdentityMatrix[0][1] << std::endl;
    // std::cout << myIdentityMatrix[1][0] << std::endl;
    // std::cout << myIdentityMatrix[1][1] << std::endl;

    Matrix aMatrix(2,4);

    // std::cout << aMatrix.getRows() << std::endl;
    // std::cout << aMatrix.getColumns() << std::endl;

    std::cout << myIdentityMatrix << std::endl;
    return 0;
}