#pragma once
#include "includes.hpp"
class Matrix
{
private:
    int rows{0};
    int columns{0};
    double** matrixData;
public:
    /// @brief Constructor that initialises a NxM 0-matrix
    /// @param rows int
    /// @param columns int
    Matrix(int nRows, int nColumns);
    
    /// @brief Constructor delegation initializing a NxN identity matrix
    /// @param nRows int
    explicit Matrix(int nRows);
    
    /// @brief Destructor
    ~Matrix();

    /// @brief Function that returns the value at matrix[row][column]
    /// @param row 
    /// @param col 
    /// @return double
    double get(int row, int col) const;

    /// @brief Function that inserts a value at the desired row and colum position
    /// @param row int
    /// @param col int
    /// @param value double
    void set(int row, int col, double value);

    
    /// @brief Overloading [] for getting matrix elements
    /// @param row 
    /// @return double Array at m[row], s.t. calling m[r][c] reutrns the value at that location
    const double* operator[](int row)const;

    /// @brief Function that returns the number of rows
    /// @return int
    int getRows() const;

    /// @brief Function that returns the numver of columns
    /// @return int
    int getColumns() const;

    
    friend std::ostream &operator<<( std::ostream &output, const Matrix &M);
};

