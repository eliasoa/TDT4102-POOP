#include "includes.hpp"

Matrix::Matrix(int nRows, int nColumns) : rows{nRows}, columns{nColumns},matrixData{nullptr} {
    assert(nRows >= 1);
    assert(nColumns >= 1);

    matrixData = new double* [rows];
    for (int i = 0; i < rows; i++)
    {
        matrixData[i] = new double [columns];
        for (int j = 0; j < rows; j++)
        {
            matrixData[i][j] = 0.0;
        }
    }
}

Matrix::Matrix(int nRows) : Matrix{nRows, nRows}{
    assert(nRows >= 1);

    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nRows; j++)
        {
            if (j==i)
            {
                matrixData[i][j] = 1.0;
            }            
        }
    }  
}


Matrix::~Matrix(){
    for (int i = 0; i < rows; i++)
    {
        delete[] matrixData[i];
        matrixData[i] = nullptr;
    }
    
    delete[] matrixData;
    matrixData = nullptr;
    
    rows = 0;
    columns = 0;
    std::cout << "Matrices have been purged" << std::endl;
}

double Matrix::get(int row, int col) const{
    return matrixData[row][col];
}

void Matrix::set(int row, int col, double value){
    matrixData[row][col] = value;
}


const double* Matrix::operator[](int row) const{
    return matrixData[row];
}


int Matrix::getRows() const{
    return rows;
}

int Matrix::getColumns() const{
    return columns;
}

std::ostream &operator<<( std::ostream &output, const Matrix &M){
    for (int i = 0; i < M.getRows(); i++)
    {
        for (int j = 0; j < M.getColumns(); j++)
        {
            std::cout << M.get(i,j) << " ";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
    return output;
}

void Matrix::fillMatrix(){

    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_int_distribution<int> distribution(0,10);
    
    for (int i = 0; i < getRows(); i++)
    {
        for (int j = 0; j < getColumns(); j++)
        {
            set(i,j,distribution(generator));
        }
    }
}