#pragma once

class Matrix
{
private:
    int rows{0};
    int columns{0};
    double** matrixData;
public:
    /// @brief Constructor
    /// @param rows 
    /// @param columns 
    Matrix(int nRows, int nColumns);
    
    
    ~Matrix();
};

