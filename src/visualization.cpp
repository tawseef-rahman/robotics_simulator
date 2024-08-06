#include "visualization.hpp"
#include <iostream>
#include <vector>

void Visualization::render(const Robot &robot) const
{
    std::cout << "Rendering robot visualization" << std::endl;
    drawAxis();
    drawRobot(robot);
}

void Visualization::drawRobot(const Robot &robot) const
{
    auto positions = robot.getJointPositions();
    std::cout << "Robot joints at positions: ";
    for (const auto &pos : positions)
    {
        std::cout << pos << " ";
    }
    std::cout << std::endl;
}

void Visualization::drawAxis() const
{
    std::cout << "Drawing coordinate axes" << std::endl;
}