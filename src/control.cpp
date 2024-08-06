#include "control.hpp"
#include <iostream>
#include <vector>

void Control::applyControlInputs(Robot &robot)
{
    std::cout << "Applying control inputs to robot" << std::endl;
    adjustJointPositions(robot);
}

void Control::adjustJointPositions(Robot &robot)
{
    auto positions = robot.getJointPositions();
    std::vector<double> new_positions;
    for (const auto &pos : positions)
    {
        new_positions.push_back(pos + 0.1); // Apply a simple control increment
    }
    robot.setJointPositions(new_positions);
}