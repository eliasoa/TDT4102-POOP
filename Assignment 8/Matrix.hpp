#pragma once

class Matrix
{
private:
    double rows{0};
    double columns{0};

public:
    /// @brief Constructor
    /// @param rows 
    /// @param columns 
    Matrix(int nRows, int nColumns);
    
    
    ~Matrix();
};

