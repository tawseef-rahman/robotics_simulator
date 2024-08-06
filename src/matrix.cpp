#include "matrix.hpp"

Matrix::Matrix(int rows, int cols) : data(rows, cols) {}

Eigen::MatrixXd Matrix::getMatrix() const
{
    return data;
}

void Matrix::setMatrix(const Eigen::MatrixXd &matrix)
{
    data = matrix;
}

Matrix Matrix::operator*(const Matrix &other) const
{
    Matrix result(data.rows(), other.data.cols());
    result.setMatrix(data * other.data);
    return result;
}

Matrix Matrix::transpose() const
{
    Matrix result(data.cols(), data.rows());
    result.setMatrix(data.transpose());
    return result;
}