#include "includes.hpp"

Matrix::Matrix(int nRows, int nColumns) : rows{nRows}, columns{nColumns},matrixData{nullptr} {
    assert(nRows >= 1);
    assert(nColumns >= 1);

    matrixData = new double*



};


Matrix::~Matrix()
{
}
