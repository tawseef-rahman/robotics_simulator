#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <Eigen/Dense>

class Matrix
{
public:
    Matrix(int rows, int cols);
    Eigen::MatrixXd getMatrix() const;
    void setMatrix(const Eigen::MatrixXd &matrix);
    Matrix operator*(const Matrix &other) const;
    Matrix transpose() const;

private:
    Eigen::MatrixXd data;
};

#endif // MATRIX_HPP