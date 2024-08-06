#include "robot.hpp"

void Robot::initialize()
{
    joint_positions = std::vector<double>(6, 0.0);
}

void Robot::setJointPositions(const std::vector<double> &positions)
{
    joint_positions = positions;
}

std::vector<double> Robot::getJointPositions() const
{
    return joint_positions;
}