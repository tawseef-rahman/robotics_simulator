#ifndef KINEMATICS_HPP
#define KINEMATICS_HPP

#include <vector>
#include "matrix.hpp"

class Kinematics
{
public:
    void computeTransformationMatrix(const std::vector<double> &joint_angles);
    void computeJacobianMatrix(const std::vector<double> &joint_angles);

private:
    Matrix transformation_matrix;
    Matrix jacobian_matrix;
};

#endif // KINEMATICS_HPP