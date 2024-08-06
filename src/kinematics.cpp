#include "kinematics.hpp"
#include <iostream>
#include <stdexcept>
#include <cmath>

void Kinematics::computeTransformationMatrix(const std::vector<double> &joint_angles)
{
    if (joint_angles.size() != 3)
        throw std::invalid_argument("Expected 3 joint angles for computation");

    double theta1 = joint_angles[0];
    double theta2 = joint_angles[1];
    double theta3 = joint_angles[2];
    double d1 = 1.0;
    double d2 = 1.0;
    double d3 = 1.0;

    transformation_matrix = Eigen::MatrixXd(4, 4);
    transformation_matrix << cos(theta1) * (cos(theta2 + theta3) * d3 + d2), -sin(theta1), 0.0, cos(theta1) * (cos(theta2 + theta3) * d3 + d2),
        sin(theta1) * (cos(theta2 + theta3) * d3 + d2), cos(theta1), 0.0, sin(theta1) * (cos(theta2 + theta3) * d3 + d2),
        0.0, 0.0, 1.0, d1 + d2,
        0.0, 0.0, 0.0, 1.0;
}

void Kinematics::computeJacobianMatrix(const std::vector<double> &joint_angles)
{
    if (joint_angles.size() != 3)
        throw std::invalid_argument("Expected 3 joint angles for Jacobian matrix");

    double theta1 = joint_angles[0];
    double theta2 = joint_angles[1];
    double theta3 = joint_angles[2];
    double d1 = 1.0;

    jacobian_matrix = Eigen::MatrixXd(3, 3);
    jacobian_matrix << -sin(theta1) * (1.0 + 1.0), -sin(theta1) * 1.0, -sin(theta1) * 0.0,
        cos(theta1) * (1.0 + 1.0), cos(theta1) * 1.0, cos(theta1) * 0.0,
        0.0, 0.0, 1.0;
}