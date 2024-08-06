#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <vector>

class Robot
{
public:
    void initialize();
    void setJointPositions(const std::vector<double> &positions);
    std::vector<double> getJointPositions() const;

private:
    std::vector<double> joint_positions;
};

#endif // ROBOT_HPP